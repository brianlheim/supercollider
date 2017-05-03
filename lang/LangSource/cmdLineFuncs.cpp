/*
	SuperCollider real time audio synthesis system
    Copyright (c) 2002 James McCartney. All rights reserved.
	http://www.audiosynth.com

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
*/

#include "SC_LanguageClient.h"

#ifdef _WIN32
#    include <windows.h>
#endif

int main(int argc, char** argv)
{
#ifdef _WIN32
	UINT oldCodePage = GetConsoleOutputCP();
	if (!SetConsoleOutputCP(65001)) // UTF-8 codepage
		return 2;
#endif
	SC_LanguageClient * client = createLanguageClient("sclang");
	if (!client)
		return 1;
	int returnCode = client->run(argc, argv);
	destroyLanguageClient(client);
#ifdef _WIN32
	SetConsoleOutputCP(oldCodePage);
#endif
	return returnCode;
}
