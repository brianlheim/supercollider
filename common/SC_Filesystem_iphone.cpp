/*
 *  Copyright (c) 2005 Tim Walters. All rights reserved.
 *  Copyright (c) 2017 Brian Heim. All rights reserved.
 *  Created by Tim Walters on 2005-10-19.
 *
 *	Revision history:
 *	  Changed from SC_DirUtils to SC_Filesystem (Brian Heim, 2017-04-03)
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License as
 *  published by the Free Software Foundation; either version 2 of the
 *  License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 *  02110-1301 USA
 */

/*
 * SC_Filesystem implementation for iPhone.
 */
#ifdef SC_IPHONE

#include "SC_Filesystem.hpp"

// stdlib
#include <string>   // std::string
#include <map>      // std::map

#define DEBUG_SCFS
#ifdef DEBUG_SCFS
#include <iostream>
using std::cout;
using std::endl;
#endif

// boost
#include <boost/algorithm/string/predicate.hpp> // iequals

// system
#include <glob.h> // ::glob, glob_t

using Path = SC_Filesystem::Path;
using DirName = SC_Filesystem::DirName;
using DirMap = SC_Filesystem::DirMap;

//============ DIRECTORY NAMES =============//
const char* gIdeName = "none"; // @TODO: move out
const char* SUPERCOLLIDER_DIR_NAME = "SuperCollider";
const char* EXTENSIONS_DIR_NAME = "Extensions";
const char* LIBRARY_DIR_NAME = "Library";
const char* DOCUMENTS_DIR_NAME = "Documents";
const char* APPLICATION_SUPPORT_DIR_NAME = "Application Support";
const Path ROOT_PATH = Path("/");

//============ PATH UTILITIES =============//

// @TODO: simplify when removing debugging code (possibly throw in header)
Path SC_Filesystem::getDirectory(const DirName& dn)
{
#ifdef DEBUG_SCFS
	cout << "SCFS::getDirectory: enter" << endl;
#endif
	const DirMap::const_iterator& it = mDirectoryMap.find(dn);
	Path p;
	if (it != mDirectoryMap.end()) {
		p = it->second;
	} else {
		p = initDirectory(dn) ? mDirectoryMap.find(dn)->second : Path();
	}
#ifdef DEBUG_SCFS
	cout << "\tgot " << p << endl;
	cout << "SCFS::getDirectory: exit" << endl;
#endif
	return p;
}

// @TODO: easier way?
Path SC_Filesystem::expandTilde(const Path& p)
{
	Path::const_iterator piter = p.begin();

	if (piter != p.end() && *piter == "~") {
		Path ret = getDirectory(DirName::UserHome);
		while (++piter != p.end())
			ret /= *piter;
		return ret;
	} else {
		return p;
	}
}

bool SC_Filesystem::shouldNotCompileDirectory(const Path& p) const
{
	const std::string& dirname = p.filename().string(Codecvt());
	const std::string& idePath = std::string("scide_") + gIdeName;
	return (boost::iequals(dirname, "help") ||
			boost::iequals(dirname, "ignore") ||
			dirname == ".svn" ||
			dirname == ".git" ||
			dirname == "_darcs" ||
			dirname == idePath ||
			isNonHostPlatformDirectory(dirname));
}

bool SC_Filesystem::isStandalone() { return false; }

Path SC_Filesystem::resolveIfAlias(const Path& p, bool& isAlias) { isAlias = false; return p; }

// Returns false if initialization failed
bool SC_Filesystem::initDirectory(const DirName& dn)
{
#ifdef DEBUG_SCFS
	cout << "SCFS::initDirectory: enter" << endl;
	cout << "\tdn: " << (int)dn << endl;
#endif
	Path p;

	switch (dn) {
		case DirName::SystemAppSupport:
			p = defaultSystemAppSupportDirectory();
			break;
		case DirName::SystemExtension:
			p = defaultSystemExtensionDirectory();
			break;
		case DirName::UserHome:
			p = defaultUserHomeDirectory();
			break;
		case DirName::UserAppSupport:
			p = defaultUserAppSupportDirectory();
			break;
		case DirName::UserExtension:
			p = defaultUserExtensionDirectory();
			break;
		case DirName::UserConfig:
			p = defaultUserConfigDirectory();
			break;
		case DirName::Resource:
			p = defaultResourceDirectory();
			break;
		default:
#ifdef DEBUG_SCFS
			cout << "\tdefault case" << endl;
#endif
			break;
	}

	if (!p.empty()) {
#ifdef DEBUG_SCFS
		cout << "\tsuccess: " << p << endl;
#endif
		mDirectoryMap[dn] = p;
	} else {
#ifdef DEBUG_SCFS
		cout << "\tinit failed" << endl;
#endif
	}

#ifdef DEBUG_SCFS
	cout << "SCFS::initDirectory: exit" << endl;
#endif
	return !p.empty();
}

//============ GLOB UTILITIES =============//

struct SC_Filesystem::Glob
{
	glob_t mHandle;
	size_t mEntry;
};

SC_Filesystem::Glob* SC_Filesystem::makeGlob(const char* pattern)
{
	Glob* glob = new Glob;

	const int flags = GLOB_MARK | GLOB_TILDE | GLOB_QUOTE;
	const int err = ::glob(pattern, flags, nullptr, &glob->mHandle);
	if (err < 0) {
		delete glob;
		return nullptr;
	}

	glob->mEntry = 0;
	return glob;
}

void SC_Filesystem::freeGlob(Glob* glob)
{
	globfree(&glob->mHandle);
	delete glob;
}

Path SC_Filesystem::globNext(Glob* glob)
{
	if (glob->mEntry >= glob->mHandle.gl_pathc)
		return Path();
	return Path(glob->mHandle.gl_pathv[glob->mEntry++]);
}

//============= PRIVATE METHODS ==============//

bool SC_Filesystem::isNonHostPlatformDirectory(const std::string& s)
{
	return s == "linux" || s == "windows" || s == "osx";
}

Path SC_Filesystem::defaultSystemAppSupportDirectory()
{
	// Note: original implementation called sc_AppendBundleName if defined(__APPLE__).
	// However, that function is only defined when !defined(SC_IPHONE). I have taken
	// the more conservative approach and avoided appending the bundle name here. -BH
	return ROOT_PATH;
}

Path SC_Filesystem::defaultSystemExtensionDirectory()
{
	const Path p = defaultSystemAppSupportDirectory();
	return p.empty() ? p : (p / EXTENSIONS_DIR_NAME);
}

Path SC_Filesystem::defaultUserHomeDirectory()
{
	const char *home = getenv("HOME");
	return Path(home ? home : "");
}

Path SC_Filesystem::defaultUserAppSupportDirectory()
{
	// Note: I have not added XDG support here because that seems highly unlikely on iPhone. -BH
	const Path& p = defaultUserHomeDirectory();
	return p.empty() ? p : p / DOCUMENTS_DIR_NAME;
}

Path SC_Filesystem::defaultUserExtensionDirectory()
{
	const Path p = defaultUserAppSupportDirectory();
	return p.empty() ? p : p / EXTENSIONS_DIR_NAME;
}

Path SC_Filesystem::defaultUserConfigDirectory()
{
	// Note: I have not added XDG support here because that seems highly unlikely on iPhone. -BH
	return defaultUserAppSupportDirectory();
}

Path SC_Filesystem::defaultResourceDirectory()
{
	return defaultUserAppSupportDirectory();
}

#endif // SC_IPHONE
