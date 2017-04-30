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
 *  Filesystem utilities and properties for SuperCollider.
 *  Singleton class that loads default directories if they
 *  are requested before being set.
 *  Uses boost::filesystem::path as its main interface for
 *  cross-platform compatibility and ease of notation.
 */

#ifndef SC_FILESYSTEM_HPP_INCLUDED
#define SC_FILESYSTEM_HPP_INCLUDED

#define DEBUG_SCFS

#define SC_FOLDERNAME_EXTENSIONS "Extensions"

#include <map> // map
#include <codecvt> // codecvt_utf8
#include <boost/filesystem/path.hpp> // path

class SC_Filesystem {
public:
	enum class DirName;
	struct     Glob;

	typedef boost::filesystem::path    Path;
	typedef std::map<DirName, Path>    DirMap;

	enum class DirName {
		SystemAppSupport,
		SystemExtension,
		UserHome,
		UserAppSupport,
		UserExtension,
		UserConfig,
		Resource
	};

	// singleton
	SC_Filesystem(SC_Filesystem const&) = delete;
	void operator=(SC_Filesystem const&) = delete;
	static SC_Filesystem& instance()
	{
		static SC_Filesystem instance;
		return instance;
	}

	// Get and set the path associated with a directory name.
	// The path is initialized first if necessary.
	Path getDirectory(const DirName& dn)
	{
		const DirMap::const_iterator& it = mDirectoryMap.find(dn);
		if (it != mDirectoryMap.end()) {
			return it->second;
		}
		return mDirectoryMap[dn] = defaultDirectory(dn);
	}

	inline void setDirectory(const DirName& dn, const Path& p) { mDirectoryMap[dn] = p; }

	// Expands a path starting with `~` to use the user's home directory.
	Path        expandTilde(const Path& p)
	{
		static const Path tilde("~");
		Path::const_iterator piter = p.begin();
		if (piter != p.end() && *piter == tilde) {
			Path expanded = getDirectory(DirName::UserHome);
			while (++piter != p.end())
				expanded /= *piter; // lexically_relative would expand "~" to "$HOME/." when we just want "$HOME"
			return expanded;
		} else {
			return p;
		}
	}

	bool        shouldNotCompileDirectory(const Path& p) const;
	static bool isStandalone();
	static std::string pathAsUTF8String(const Path&);

	// postconditions: isAlias is true if path is an alias, and false otherwise
	// returns: the resolved path if resolution occurred
	//          the original path if no resolution occurred
	//          Path() if resolution failed
	// @TODO: Could possibly be split into `isAlias` and `resolveAlias` to avoid
	// unnecessary copying
	static Path resolveIfAlias(const Path& p, bool& isAlias);

	static Glob* makeGlob(const char* pattern);
	static Path globNext(Glob* g); // Returns empty path for end-of-stream
	static void freeGlob(Glob* g);

private:
	SC_Filesystem() {};

	//
	static bool isNonHostPlatformDirectory(const std::string& p);

	Path defaultDirectory(const DirName& dn)
	{
		switch (dn) {
			case DirName::SystemAppSupport:
				return defaultSystemAppSupportDirectory();
			case DirName::SystemExtension:
				return defaultSystemExtensionDirectory();
			case DirName::UserHome:
				return defaultUserHomeDirectory();
			case DirName::UserAppSupport:
				return defaultUserAppSupportDirectory();
			case DirName::UserExtension:
				return defaultUserExtensionDirectory();
			case DirName::UserConfig:
				return defaultUserConfigDirectory();
			case DirName::Resource:
				return defaultResourceDirectory();
			default:
				return Path();
		}
	}
	
	static Path defaultSystemAppSupportDirectory();
	static Path defaultUserHomeDirectory();
	static Path defaultUserAppSupportDirectory();
	static Path defaultUserConfigDirectory();
	static Path defaultResourceDirectory();

	static Path defaultSystemExtensionDirectory()
	{
		const Path& p = defaultUserAppSupportDirectory();
		return p.empty() ? p : p / SC_FOLDERNAME_EXTENSIONS;
	}

	static Path defaultUserExtensionDirectory()
	{
		const Path& p = defaultUserAppSupportDirectory();
		return p.empty() ? p : p / SC_FOLDERNAME_EXTENSIONS;
	}

	DirMap mDirectoryMap;
};

#endif // SC_FILESYSTEM_HPP_INCLUDED
