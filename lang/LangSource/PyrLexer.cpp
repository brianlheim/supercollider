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

/*** INCLUDES: BEGIN ***/

/* standard C headers */
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

/* C++ headers */
#include <new>
#include <cerrno>
#include <limits>
#include <set>

/* platform-dependent declarations */
#ifdef _WIN32
# include <direct.h>
#else
# include <sys/param.h>
# include "dirent.h"
#endif

/* boost headers */
#include <boost/filesystem/path.hpp>

/* Bison-generated parser header */
#include "Bison/lang11d_tab.h"

/* SuperCollider headers */
#include "GC.h"
#include "InitAlloc.h"
#include "PredefinedSymbols.h"
#include "PyrInterpreter.h"
#include "PyrKernelProto.h"
#include "PyrLexer.h"
#include "PyrObject.h"
#include "PyrObjectProto.h"
#include "PyrParseNode.h"
#include "PyrPrimitive.h"
#include "PyrPrimitiveProto.h"
#include "PyrSched.h"
#include "PyrSymbolTable.h"
#include "SCBase.h"
#include "SC_DirUtils.h"
#include "SC_InlineUnaryOp.h"
#include "SC_InlineBinaryOp.h"
#include "SC_LanguageConfig.hpp"
#include "SC_TextUtils.hpp"
#include "SimpleStack.h"

/*** INCLUDES: END ***/

/*** DEFINES: BEGIN ***/

#define MAXYYLEN 8192

#define OPENPAREN '('
#define OPENCURLY '{'
#define OPENSQUAR '['
#define CLOSSQUAR ']'
#define CLOSCURLY '}'
#define CLOSPAREN ')'

#define LEXER_CMD_LINE_FILENAME "selected text"

/*** DEFINES: END ***/

int yyparse(); /* should be deleted once real Bison header is made */

double compileStartTime; /* should be given local scope */
int gNumCompiledFiles; /* can probably be given local scope */

PyrSymbol *gCompilingFileSym = 0;
VMGlobals *gCompilingVMGlobals = 0;
static char gCompileDir[MAXPATHLEN];

/* set to true to print detailed debug messages */
const bool gDebugLexer = false;

/* set to true to do a rigorous check of the symbol table after compilation */
const bool gDebugSymbolTable = false;

LongStack brackets;
LongStack closedFuncCharNo;
LongStack generatorStack;
int lastClosedFuncCharNo = 0;

const char *binopchars = "!@%&*-+=|<>?/";
char yytext[MAXYYLEN];
char curfilename[PATH_MAX];

int yylen;
int gLexMode = 0;
enum {
	LEXMODE_COMPILE = 0,
	LEXMODE_START_CMDLINE = 1,
	LEXMODE_IN_CMDLINE = 2
};
bool compilingCmdLine = false;

intptr_t zzval;

int lineno, charno, linepos;
int *linestarts;
int maxlinestarts;

char *text;
int textlen;
int textpos;
int errLineOffset, errCharPosOffset;
int parseFailed = 0;
bool compiledOK = false;
std::set<std::string> compiledDirectories;


int sc_strtoi(const char *str, int n, int base)
{
	int z = 0;
	for (int i=0; i<n; ++i)
	{
		int c = *str++;
		if (!c) break;
		if (c >= '0' && c <= '0' + sc_min(10,base) - 1) z = z * base + c - '0';
		else if (c >= 'a' && c <= 'a' + sc_min(36,base) - 11) z = z * base + c - 'a' + 10;
		else if (c >= 'A' && c <= 'A' + sc_min(36,base) - 11) z = z * base + c - 'A' + 10;
	}
	return z;
}

double sc_strtof(const char *str, int n, int base)
{
	double z = 0.;
	int decptpos = 0;
	for (int i=0; i<n; ++i)
	{
		int c = *str++;
		if (!c) break;
		if (c >= '0' && c <= '0' + sc_min(10,base) - 1) z = z * base + c - '0';
		else if (c >= 'a' && c <= 'a' + sc_min(36,base) - 11) z = z * base + c - 'a' + 10;
		else if (c >= 'A' && c <= 'A' + sc_min(36,base) - 11) z = z * base + c - 'A' + 10;
		else if (c == '.') decptpos = i;
	}
	//calculation previously included decimal point in count of columns (was n-decptpos); there are 1 less than n characters which are columns in the number contribution
	z = z / pow((double)base, n -1- decptpos);
	return z;
}

static void sc_InitCompileDirectory(void)
{
	// main class library folder: only used for relative path resolution
	sc_GetResourceDirectory(gCompileDir, MAXPATHLEN-32);
	sc_AppendToPath(gCompileDir, MAXPATHLEN, "SCClassLibrary");
}

extern void asRelativePath(char *inPath, char *outPath)
{
	uint32 len = strlen(gCompileDir);
	if (strlen(inPath) < len || memcmp(inPath, gCompileDir, len) != 0) {
		// gCompileDir is not the prefix.
		strcpy(outPath, inPath);
		return;
	}
	strcpy(outPath, inPath +  len);
}


static bool getFileText(char* filename, char **text, int *length)
{
	FILE *file;
	char *ltext;
	int llength;

#ifdef _WIN32
	file = fopen(filename, "rb");
#else
	file = fopen(filename, "r");
#endif
	if (!file) return false;

	fseek(file, 0L, SEEK_END);
	llength = ftell(file);
	fseek(file, 0L, SEEK_SET);
	ltext = (char*)pyr_pool_compile->Alloc((llength+1) * sizeof(char));
#ifdef _WIN32
	// win32 isprint( ) doesn't like the 0xcd after the end of file when
	// there is a mismatch in lengths due to line endings....
	memset(ltext,0,(llength+1) * sizeof(char));
#endif //_WIN32
	MEMFAIL(ltext);

	size_t size = fread(ltext, 1, llength, file);
	if (size != llength) {
		error("error when reading file");
		fclose(file);
		return false;
	}
	ltext[llength] = 0;
	*length = llength;
	fclose(file);
	*text = ltext;
	return true;
}

void initLexerGlobals()
{
	initLongStack(&brackets);
	initLongStack(&closedFuncCharNo);
	initLongStack(&generatorStack);
	lastClosedFuncCharNo = 0;
	textpos = 0;
	linepos = 0;
	lineno = 1;
	charno = 0;
	yylen = 0;
	zzval = 0;
	parseFailed = 0;
	maxlinestarts = 1000;
	linestarts = (int*)pyr_pool_compile->Alloc(maxlinestarts * sizeof(int*));
	MEMFAIL(linestarts);
	linestarts[0] = 0;
	linestarts[1] = 0;
}

/* Readies the lexer to parse a file from startPos to endPos.
 * The lineOffset is used to give helpful error messages.
 * This function returns `false` if and only if the source was not
 * already loaded and this function failed to load it.
 */
bool startLexer(PyrSymbol *fileSym, int startPos, int endPos, int lineOffset)
{
	char *filename = fileSym->name;

	textlen = -1;

	/* if there's no source text, attempt to pull it now */
	if(!fileSym->u.source) {
		if (!getFileText(filename, &text, &textlen))
			return false;
		rtf2txt(text);
		fileSym->u.source = text;
	}
	else
		text = fileSym->u.source;

	/* if there's no start or end position, set it up to read the whole file */
	if((startPos >= 0) && (endPos > 0)) {
		textlen = endPos - startPos;
		text += startPos;
	}
	else if(textlen == -1)
		textlen = strlen(text);

	initLexerGlobals();

	errLineOffset = sc_max(lineOffset, 0);
	errCharPosOffset = sc_max(startPos, 0);

	gLexMode = 0;

	strcpy(curfilename, filename);

	return true;
}

/* Readies the lexer to parse a command line, either from the actual command
 * line, the SC-IDE command line, or interpreted text executed from the SC-IDE.
 */
void startLexerCmdLine(char *textbuf, int textbuflen)
{
	text = (char*)pyr_pool_compile->Alloc((textbuflen+2) * sizeof(char));
	MEMFAIL(text);
	memcpy(text, textbuf, textbuflen);
	text[textbuflen] = ' ';
	text[textbuflen+1] = '\0';
	textlen = textbuflen + 1;

	/* I think rtf2txt is useless in this particular case, but that's only a
	 * hypothesis for now - Brian H */
	rtf2txt(text);

	initLexerGlobals();

	errLineOffset = 0;
	errCharPosOffset = 0;

	gLexMode = 1;

	strcpy(curfilename, LEXER_CMD_LINE_FILENAME);
}

void finiLexer()
{
	pyr_pool_compile->Free(linestarts);
	freeLongStack(&brackets);
	freeLongStack(&closedFuncCharNo);
	freeLongStack(&generatorStack);
}

/* This function consists of code factored out of input() and input0(). It updates
 * the lexer's internal counters to begin parsing a new line and allocates double
 * memory if the file goes beyond the initial maxlinestarts */
void input_startNewLine()
{
	lineno++;
	linepos = textpos;
	if (linestarts) {
		if (lineno >= maxlinestarts) {
			maxlinestarts += maxlinestarts;
			linestarts = (int*)pyr_pool_compile->Realloc(
				linestarts,  maxlinestarts * sizeof(int*));
		}
		linestarts[lineno] = linepos;
	}
	charno = 0;
}

/* input() and input0() pull the next character from the text; the only difference is
 * that input() also adds the character to yytext (what will eventually be passed to
 * the Bison-generated parser). unput() and unput0() are the corresponding inverse operations
 */
int input()
{
	int c;

	if (textpos >= textlen) {
		c = 0;
		/* should this block have `textpos++` (c.f. input0() below)? - Brian H */
		/* if this block ends up matching input0()'s corresponding block below, move
		 * both into input_startNewLine() and rename accordingly - Brian H */
	} else {
		c = text[textpos++];
		charno++;
	}

	if (c == '\n' || c == '\r')
		input_startNewLine();

	if (c != 0 && yylen < MAXYYLEN-2)
		yytext[yylen++] = c;

	if (gDebugLexer)
		postfl("input '%c' %d\n", c, c);

	return c;
}

int input0()
{
	int c;

	/* We could factor out the textpos++, but probably best to leave it like this while there's a lack
	 * of parallelism between input and input0 - Brian H */
	if (textpos >= textlen) {
		c = 0;
		textpos++; // so unput will work properly
	} else {
		c = text[textpos++];
		charno++;
	}

	if (c == '\n' || c == '\r')
		input_startNewLine();

	if (gDebugLexer)
		postfl("input0 '%c' %d\n", c, c);

	return c;
}

/* unput() and unput0() are the inverses of input() and input0() — the `0` signifies that the operation
 * doesn't involve yytext.
 */
void unput(int c)
{
	if (textpos > 0)
		--textpos;
	if (c) {
		if (yylen > 0)
			--yylen;
		if (charno > 0)
			--charno;
		if (c == '\n' || c == '\r')
			--lineno;
	}
}

void unput0(int c)
{
	if (textpos > 0)
		--textpos;
	if (charno > 0)
		--charno;
	if (c == '\n' || c == '\r')
		--lineno;
}

int convertEscapeSequence(int c)
{
	switch(c) {
		case 'n' : return '\n';
		case 'r' : return '\r';
		case 't' : return '\t';
		case 'f' : return '\f';
		case 'v' : return '\v';
		default:
			//post("invalid escape sequence '\\%c' found on line %d, char %d\n",
			//	 lineno, charno);
			return c;
	}
}


/***************************************************************************/
/*       MAIN PARSING FUNCTIONS: yylex() and scanForClosingBracket()       */
/***************************************************************************/

/* yylex is responsible for choosing the right token type to throw back up to
 * the Bison parser. scanForClosingBracket is a simplified version that quickly
 * jumps to the next closing bracket in order to recognize the limits of class
 * and class extension definitions. Changes to Bison should be mirrored here.
 *
 * Most of the custom and cute parsing rules in SC are contained in the next
 * hundred lines. Read carefully!
 */
int yylex()
{
	int r, c, c2;
	intptr_t d;
	int radix;
    char extPath[MAXPATHLEN]; // for error reporting

	yylen = 0;
	// finite state machine to parse input stream into tokens

	if (gLexMode == 1) {
		gLexMode = 2;
		r = INTERPRET;
		goto leave;
	}
start:
	c = input();

	if (c == '\0') {
		r = 0;
		goto leave;
	}
	else if (isspace(c)) {
		yylen = 0;
		goto start;
	}
	else if (isalpha(c) || c == '_') {
		goto identifier;
	}
	else if (c == '/') {
		c = input();
		if (c == '/')
			goto commentLine;
		else if (c == '*')
			goto commentBlock;
		unput(c);
		goto binaryOp;
	}
	else if (isdigit(c)) {
		goto digitsBeforePoint;
	}
	else if (c == OPENPAREN || c == OPENSQUAR || c == OPENCURLY) {
		pushls(&brackets, (intptr_t)c);
		if (c == OPENCURLY) {
			pushls(&closedFuncCharNo, (intptr_t)(linestarts[lineno] + charno - 1));
		}
		r = c;
		goto leave;
	}
	else if (c == CLOSSQUAR) {
		if (!emptyls(&brackets)) {
			if ((d = popls(&brackets)) != OPENSQUAR) {
				fatal();
				post("opening bracket was a '%c', but found a '%c'\n", d, c);
				goto error2;
			}
		} else {
			fatal();
			post("unmatched '%c'\n", c);
			goto error2;
		}
		r = c;
		goto leave;
	}
	else if (c == CLOSPAREN) {
		if (!emptyls(&brackets)) {
			if ((d = popls(&brackets)) != OPENPAREN) {
				fatal();
				post("opening bracket was a '%c', but found a '%c'\n", d, c);
				goto error2;
			}
		} else {
			fatal();
			post("unmatched '%c'\n", c);
			goto error2;
		}
		r = c;
		goto leave;
	}
	else if (c == CLOSCURLY) {
		if (!emptyls(&brackets)) {
			if ((d = popls(&brackets)) != OPENCURLY) {
				fatal();
				post("opening bracket was a '%c', but found a '%c'\n", d, c);
				goto error2;
			}
			lastClosedFuncCharNo = popls(&closedFuncCharNo);
		} else {
			fatal();
			post("unmatched '%c'\n", c);
			goto error2;
		}
		r = c;
		goto leave;
	}
	else if (c == '~' || c == ';' || c == ':' || c == '`' || c == ',') {
		r = c;
		goto leave;
	}
	else if (c == '^') {
		if (gLexMode > 0) {
			fatal();
			post("'%c' is not allowed outside of class methods\n", c);
			goto error2;
		} else {
			r = c;
			goto leave;
		}
	}
	else if (c == '\\') {
		goto symbolAfterBackslash;
	}
	else if (c == '\'') {
		goto symbolAfterQuote;
	}
	else if (c == '"') {
		goto stringAfterQuote;
	}
	else if (c == '.') {
		if ((c = input()) == '.') {
			if ((c = input()) == '.') {
				r = ELLIPSIS;
				goto leave;
			} else {
				r = DOTDOT;
				unput(c);
				goto leave;
			}
		} else {
			unput(c);
			r = '.';
			goto leave;
		}
	}
	else if (c == '#') {
		if ((c = input()) == OPENCURLY) {
			pushls(&brackets, (intptr_t)OPENCURLY);
			pushls(&closedFuncCharNo, (intptr_t)(linestarts[lineno] + charno - 2));
			r = BEGINCLOSEDFUNC;
		} else {
			unput(c);
			r = '#';
		}
		goto leave;
	}
	else if (c == '$') {
		c = input();
		if (c == '\\') {
			c = input();
			c = convertEscapeSequence(c);
		}
		r = processChar(c);
		goto leave;
	}
	else if (c == '=') {
		c = input();
		/* binopchars: "!@%&*-+=|<>?/" */
		if (c && strchr(binopchars, c))
			goto binaryOp;
		else {
			unput(c);
			r = '=';
			goto leave;
		}
	}
	/* binopchars: "!@%&*-+=|<>?/" */
	else if (strchr(binopchars, c)) {
		goto binaryOp;
	}
	else if(!isprint(c)) {
		yylen = 0;
		goto start;
	}
	else
		goto error1;
	/* At this point, we've checked:
	 * null, space, alpha, digits, /, [{()}], ^~;:`,\'".#$, !@%&*-+=|<>?, and non-printing.
	 * By my estimate, that's everything. error1 is, I think, supposed
	 * to catch non-ASCII characters, but I think the use of !isprint(c) here precludes that. - Brian H
	 */

identifier:
	c = input();

	if (isalnum(c) || c == '_')
		goto identifier;
	else if (c == ':') {
		yytext[yylen] = 0;
		r = processKeywordBinaryOperator(yytext);
		goto leave;
	} else {
		unput(c);
		yytext[yylen] = 0;
		r = processIdentifier(yytext);
		goto leave;
	}

symbolAfterBackslash:
	c = input();

	if (isalnum(c) || c == '_')
		goto symbolAfterBackslash;
	else {
		unput(c);
		yytext[yylen] = 0;
		r = processSymbol(yytext);
		goto leave;
	}

binaryOp:
	c = input();

	/* binopchars: "!@%&*-+=|<>?/" */
	if (c && strchr(binopchars, c))
		goto binaryOp;
	else {
		unput(c);
		yytext[yylen] = 0;
		r = processBinaryOperator(yytext);
		goto leave;
	}

radixDigitsBeforePoint:

	c = input();
	c2 = toupper(c);
	if (c2 >= '0' && c2 <= '0' + sc_min(10, radix) - 1)
		goto radixDigitsBeforePoint;
	if (c2 >= 'A' && c2 <= 'A' + sc_min(36, radix) - 11)
		goto radixDigitsBeforePoint;
	if (c2 == '.')
		goto radixDigitsAfterPoint;
	unput(c);
	yytext[yylen] = 0;
	r = processIntRadix(yytext, yylen, radix);
	goto leave;

radixDigitsAfterPoint:

	c = input();
	// do not allow lower case after decimal point.
	if (c >= '0' && c <= '0' + sc_min(10,radix) - 1)
		goto radixDigitsAfterPoint;
	if (c >= 'A' && c <= 'A' + sc_min(36,radix) - 11)
		goto radixDigitsAfterPoint;
	unput(c);
	yytext[yylen] = 0;
	r = processFloatRadix(yytext, yylen, radix);
	goto leave;

hexDigits:

	c = input();
	if (isxdigit(c))
		goto hexDigits;
	unput(c);
	yytext[yylen] = 0;
	r = processHexInt(yytext);
	goto leave;

digitsBeforePoint:

	c = input();

	if (isdigit(c)) goto digitsBeforePoint;
	else if (c == 'r') {
		radix = sc_strtoi(yytext, yylen-1, 10);
		yylen = 0;
		goto radixDigitsBeforePoint;
	}
	else if (c == 'e' || c == 'E') goto exponentFound;
	else if (c == '.') {
		c2 = input();
		if (isdigit(c2)) goto digitsAfterPoint;
		else {
			unput(c2);
			unput(c);
			yytext[yylen] = 0;
			r = processInt(yytext);
			goto leave;
		}
	}
	else if (c == 'b' || c == 's') {
		d = input();
		if (isdigit(d)) goto accidentalFound;
		if (d == c) goto accidental2;
		goto accidental3;
accidentalFound:
		d = input();
		if (isdigit(d)) goto accidentalFound;
		unput(d);
		yytext[yylen] = 0;
		r = processAccidental1(yytext);
		goto leave;
accidental2:
		d = input();
		if (d == c) goto accidental2;
accidental3:
		unput(d);
		yytext[yylen] = 0;
		r = processAccidental2(yytext);
		goto leave;
	}
	else if (c == 'x') {
		yylen = 0;
		goto hexDigits;
	} else {
		unput(c);
		yytext[yylen] = 0;
		r = processInt(yytext);
		goto leave;
	}

digitsAfterPoint:

	c = input();

	if (isdigit(c))
		goto digitsAfterPoint;
	else if (c == 'e' || c == 'E')
		goto exponentFound;
	else {
		unput(c);
		yytext[yylen] = 0;
		r = processFloat(yytext, 0);
		goto leave;
	}

exponentFound:	/* e has been seen, need digits */
	c = input();

	if (isdigit(c))
		goto expon_3;
	else if (c == '+' || c == '-')
		goto expon_2;
	else goto error1;

expon_2:	/* + or - seen but still need digits */
	c = input();

	if (isdigit(c))
		goto expon_3;
	else
		goto error1;

expon_3:
	c = input();

	if (isdigit(c))
		goto expon_3;
	else {
		unput(c);
		yytext[yylen] = 0;
		r = processFloat(yytext, 0);
		goto leave;
	}

symbolAfterQuote: {
		int startline, endchar;
		startline = lineno;
		endchar = '\'';

		/*do {
			c = input();
		} while (c != endchar && c != 0);*/
		for (;yylen<MAXYYLEN;) {
			c = input();
			if (c == '\n' || c == '\r') {
				asRelativePath(curfilename,extPath);
				post("Symbol open at end of line on line %d in file '%s'\n",
					startline+errLineOffset, extPath);
				yylen = 0;
				r = 0;
				goto leave;
			}
			if (c == '\\') {
				yylen--;
				c = input();
			} else if (c == endchar) break;
			if (c == 0) break;
		}
		if (c == 0) {
			asRelativePath(curfilename,extPath);
			post("Open ended symbol started on line %d in file '%s'\n",
				startline+errLineOffset, extPath);
			yylen = 0;
			r = 0;
			goto leave;
		}
		yytext[yylen] = 0;
		yytext[yylen-1] = 0;
		r = processSymbol(yytext);
		goto leave;
	}

stringAfterQuote: {
		int startline, endchar;
		startline = lineno;
		endchar = '"';

		for (;yylen<MAXYYLEN;) {
			c = input();
			if (c == '\\') {
				yylen--;
				c = input();
				yytext[yylen-1] = convertEscapeSequence(c);
			} else if (c == '\r') c = '\n';
			else if (c == endchar) break;
			if (c == 0) break;
		}
		if (c == 0) {
			asRelativePath(curfilename, extPath);
			post("Open ended string started on line %d in file '%s'\n",
				startline + errLineOffset, extPath);
			yylen = 0;
			r = 0;
			goto leave;
		}
		yylen--;

		do {
			c = input0();
		} while (c && isspace(c));

		if (c == '"') goto stringAfterQuote;
		else if (c) unput0(c);

		yytext[yylen] = 0;
		r = processString(yytext);
		goto leave;
	}

commentLine:	/* comment -- to end of line */
	do {
		c = input0();
	} while (c != '\n' && c != '\r' && c != 0);
	yylen = 0;
	if (c == 0) { r = 0; goto leave; }
	else goto start;

commentBlock: {
		int startline, clevel, prevc;
		startline = lineno;
		prevc = 0;
		clevel = 1;
		do {
			c = input0();
			if (c == '/' && prevc == '*') {
				if (--clevel <= 0)
                    break;
                else
                    c = input0(); // eat both characters
            } else if (c == '*' && prevc == '/') {
                clevel++;
                c = input0(); // eat both characters
            }
			prevc = c;
		} while (c != 0);
		yylen = 0;
		if (c == 0) {
			asRelativePath(curfilename, extPath);
			post("Open ended comment started on line %d in file '%s'\n",
				startline + errLineOffset, extPath);
			r = 0;
			goto leave;
		}
		goto start;
	}


error1:

	yytext[yylen] = 0;

	asRelativePath(curfilename, extPath);
	post("illegal input string '%s' \n   at '%s' line %d char %d\n",
		yytext, extPath, lineno+errLineOffset, charno);
	post("code %d\n", c);

error2:
	asRelativePath(curfilename, extPath);
	post("  in file '%s' line %d char %d\n", extPath, lineno+errLineOffset, charno);
	r = BADTOKEN;
	goto leave;

leave:
	yytext[yylen] = 0;

	if (gDebugLexer)
		postfl("yylex: %d  '%s'\n",r,yytext);

	return r;
}

/********************************/
/*  TOKEN PROCESSING FUNCTIONS  */
/********************************/

/* Handles processing of all alphanumeric tokens beginning with [_a-zA-Z].
 * Keywords: arg, const, classvar, false, inf, nil, pi, true, var, while
 * Identifiers: primitives, class names, other alphanumeric IDs
 * Curry arguments, e.g. `array.collect(_.max)' */
int processIdentifier(char *token)
{
	if (gDebugLexer)
		postfl("processIdentifier: '%s'\n", token);

	PyrSymbol *sym;
	PyrSlot slot;
	PyrParseNode *node;

	zzval = (intptr_t) -1;

	/* Use a switch to speed up string comparisons, in order to give a better
	 * worst-case cost for name identifiers. - Brian H */
	switch (token[0]) {
		/* starting with an underscore can either be a curry arg or a primitive */
		case '_':
			if (token[1] == 0) {
				node = newPyrCurryArgNode();
				zzval = (intptr_t)node;
				return CURRYARG;
			} else {
				sym = getsym(token);
				SetSymbol(&slot, sym);
				node = newPyrSlotNode(&slot);
				zzval = (intptr_t)node;
				return PRIMITIVENAME;
			}
			break; // for security

		case 'a':
			if (!strcmp(token, "arg"))
				return ARG;
			else
				break;

		case 'c':
			if (!strcmp(token, "const"))
				return SC_CONST;
			else if (!strcmp(token, "classvar"))
				return CLASSVAR;
			else
				break;

		case 'f':
			if (!strcmp(token, "false")) {
				SetFalse(&slot);
				node = newPyrSlotNode(&slot);
				zzval = (intptr_t)node;
				return FALSEOBJ;
			}
			else
				break;

		case 'i':
			if(!strcmp(token, "inf")) {
				SetFloat(&slot, std::numeric_limits<double>::infinity());
				node = newPyrSlotNode(&slot);
				zzval = (intptr_t)node;
				return SC_FLOAT;
			}
			else
				break;

		case 'n':
			if (!strcmp(token, "nil")) {
				SetNil(&slot);
				node = newPyrSlotNode(&slot);
				zzval = (intptr_t)node;
				return NILOBJ;
			}
			else
				break;

		case 'p':
			if (!strcmp(token, "pi")) {
				SetFloat(&slot, pi);
				node = newPyrSlotNode(&slot);
				zzval = (intptr_t)node;
				return PIE;
			}
			else
				break;

		case 't':
			if (!strcmp(token, "true")) {
				SetTrue(&slot);
				node = newPyrSlotNode(&slot);
				zzval = (intptr_t)node;
				return TRUEOBJ;
			}
			else
				break;

		case 'v':
			if (!strcmp(token, "var"))
				return VAR;
			else
				break;

		case 'w':
			if (!strcmp(token, "while")) {
				sym = getsym(token);
				SetSymbol(&slot, sym);
				node = newPyrSlotNode(&slot);
				zzval = (intptr_t)node;
				return WHILE;
			}
			else
				break;

		default:
			break; // fall out of switch
	}

	/* An ID starting with an uppercase character is always a class name */
	if (isupper(token[0])) {
		sym = getsym(token);
		SetSymbol(&slot, sym);
		node = newPyrSlotNode(&slot);
		zzval = (intptr_t)node;

		if (gDebugLexer)
			postfl("CLASSNAME: '%s'\n", token);

		return CLASSNAME;
	}

	/* Default case: name identifier, non-keyword, non-classname */
	sym = getsym(token);
	SetSymbol(&slot, sym);
	node = newPyrSlotNode(&slot);
	zzval = (intptr_t)node;
	return NAME;
}

/* binopchars: "!@%&*-+=|<>?/" */
/* We get here by having a sequence of these characters of any length. */
int processBinaryOperator(char *token)
{
	PyrSymbol *sym;
	PyrSlot slot;
	PyrSlotNode *node;

	if (gDebugLexer)
		postfl("processBinaryOperator: '%s'\n", token);

	sym = getsym(token);
	SetSymbol(&slot, sym);
	node = newPyrSlotNode(&slot);
	zzval = (intptr_t)node;

	if (strcmp(token, "<-")==0) return LEFTARROW;
	if (strcmp(token, "<>")==0) return READWRITEVAR;
	if (strcmp(token, "|")==0) return '|';
	if (strcmp(token, "<")==0) return '<';
	if (strcmp(token, ">")==0) return '>';
	if (strcmp(token, "-")==0) return '-';
	if (strcmp(token, "*")==0) return '*';
	if (strcmp(token, "+")==0) return '+';
	return BINOP;
}

/* We get here by having an alphanumeric sequence ending with `:',
 * an infix method selector like `x pow: y' */
int processKeywordBinaryOperator(char *token)
{
	PyrSymbol *sym;
	PyrSlot slot;
	PyrSlotNode *node;

	if (gDebugLexer)
		postfl("processKeywordBinaryOperator: '%s'\n", token);

	token[yylen-1] = 0; // strip off colon
	sym = getsym(token);
	SetSymbol(&slot, sym);
	node = newPyrSlotNode(&slot);
	zzval = (intptr_t)node;
	return KEYBINOP;
}

int processChar(int c)
{
	PyrSlot slot;
	PyrSlotNode *node;

	if (gDebugLexer)
		postfl("processChar: '%c'\n", c);

	SetChar(&slot, c);
	node = newPyrSlotNode(&slot);
	zzval = (intptr_t)node;
	return ASCII;
}

/* A sequence of digits, optionally preceded by `-' */
int processInt(char *s)
{
	PyrSlot slot;
	PyrSlotNode *node;

	if (gDebugLexer)
		postfl("processInt: '%s'\n", s);

	SetInt(&slot, atoi(s));
	node = newPyrSlotNode(&slot);
	zzval = (intptr_t)node;
	return INTEGER;
}

/* A sequence of hex digits */
int processHexInt(char *s)
{
	PyrSlot slot;
	PyrSlotNode *node;
	int val = 0;

	if (gDebugLexer)
		postfl("processHexInt: '%s'\n", s);

	do {
		val *= 16;
		if (isdigit(*s))
			val = *s - '0';
		else if (islower(*s))
			val = *s - 'a' + 10;
		else
			val = *s - 'A' + 10; // assume well-formed input
	} while(*++s);

	SetInt(&slot, val);
	node = newPyrSlotNode(&slot);
	zzval = (intptr_t)node;
	return INTEGER;
}

/* A sequence of digits in the given radix, ignoring case */
int processIntRadix(char *s, int n, int radix)
{
	PyrSlot slot;
	PyrSlotNode *node;

	if (gDebugLexer)
		postfl("processIntRadix: '%s'\n", s);

	SetInt(&slot, sc_strtoi(s, n, radix));
	node = newPyrSlotNode(&slot);
	zzval = (intptr_t)node;
	return INTEGER;
}

int processFloat(char *s, int sawpi)
{
	PyrSlot slot;
	PyrSlotNode *node;
	double z;

	if (gDebugLexer)
		postfl("processFloat: '%s'\n", s);

	if (sawpi) { z = atof(s)*pi; SetFloat(&slot, z); }
	else  { SetFloat(&slot, atof(s)); }
	node = newPyrSlotNode(&slot);
	zzval = (intptr_t)node;
	return SC_FLOAT;
}

int processFloatRadix(char *s, int n, int radix)
{
	PyrSlot slot;
	PyrSlotNode *node;

	if (gDebugLexer)
		postfl("processFloatRadix: '%s'\n", s);

	SetFloat(&slot, sc_strtof(s, n, radix));
	node = newPyrSlotNode(&slot);
	zzval = (intptr_t)node;
	return SC_FLOAT;
}

int processAccidental1(char *s)
{
	PyrSlot slot;
	PyrSlotNode *node;
	char *c;
	double degree=0.;
	double cents=0.;
	double centsdiv=1000.;

	if (gDebugLexer)
		postfl("processAccidental1: '%s'\n", s);

	c = s;
	while (*c) {
		if (*c >= '0' && *c <= '9') degree = degree*10. + *c - '0';
		else break;
		c++;
	}

	if (*c == 'b') centsdiv = -1000.;
	else if (*c == 's') centsdiv = 1000.;
	c++;

	while (*c) {
		if (*c >= '0' && *c <= '9') {
			cents = cents*10. + *c - '0';
		}
		else break;
		c++;
	}

	if (cents > 499.) cents = 499.;

	SetFloat(&slot, degree + cents/centsdiv);
	node = newPyrSlotNode(&slot);
	zzval = (intptr_t)node;
	return ACCIDENTAL;
}

int processAccidental2(char *s)
{
	PyrSlot slot;
	PyrSlotNode *node;
	char *c;
	double degree=0.;
	double semitones=0.;

	if (gDebugLexer)
		postfl("processAccidental2: '%s'\n", s);

	c = s;
	while (*c) {
		if (*c >= '0' && *c <= '9') degree = degree*10. + *c - '0';
		else break;
		c++;
	}

	while (*c) {
		if (*c == 'b') semitones -= 1.;
		else if (*c == 's') semitones += 1.;
		c++;
	}

	if (semitones > 4.) semitones = 4.;
	else if (semitones < -4.) semitones = -4.;

	SetFloat(&slot, degree + semitones/10.);
	node = newPyrSlotNode(&slot);
	zzval = (intptr_t)node;
	return ACCIDENTAL;
}

int processSymbol(char *s)
{
	PyrSlot slot;
	PyrSlotNode *node;
	PyrSymbol *sym;

	if (gDebugLexer)
		postfl("processSymbol: '%s'\n", s);

	sym = getsym(s+1);

	SetSymbol(&slot, sym);
	node = newPyrSlotNode(&slot);
	zzval = (intptr_t)node;
	return SYMBOL;
}

int processString(char *s)
{
	PyrSlot slot;
	PyrSlotNode *node;
	PyrString *string;

	if (gDebugLexer)
		postfl("processString: '%s'\n", s);

	int flags = compilingCmdLine ? obj_immutable : obj_permanent | obj_immutable;
	string = newPyrString(gMainVMGlobals->gc, s+1, flags, false);
	SetObject(&slot, string);
	node = newPyrSlotNode(&slot);
	zzval = (intptr_t)node;
	return STRING;
}

/********************************/
/*   ERROR HANDLING FUNCTIONS   */
/********************************/

void yyerror(const char *s)
{
	parseFailed = 1;
	yytext[yylen] = 0;
	error("%s\n",s);
	postErrorLine(lineno, linepos, charno);
	//Debugger();
}

void fatal()
{
	parseFailed = 1;
	yytext[yylen] = 0;
	error("Parse error\n");
	postErrorLine(lineno, linepos, charno);
	//Debugger();
}

void postErrorLine(int linenum, int start, int charpos)
{
	int i, j, end, pos;
	char str[256];

	//post("start %d\n", start);
	//parseFailed = true;
    char extPath[MAXPATHLEN];
    asRelativePath(curfilename, extPath);
	post("  in file '%s'\n", extPath);
	post("  line %d char %d:\n\n", linenum+errLineOffset, charpos);
	// nice: postfl previous line for context

	//postfl("text '%s' %d\n", text, text);

	// postfl error line for context
	pos = start + charpos;
	for (i=pos; i < textlen; ++i) {
		if (text[i] == 0 || text[i] == '\r' || text[i] == '\n') break;
	}
	end=i;
	for (i=start, j=0; i<end && j<255; ++i) {
		str[j++] = text[i];
	}
	str[j] = 0;
	post("  %s\n  ", str);
	for (i=0; i<charpos-yylen; i++) post(" ");
	for (i=0; i<yylen; i++) post("^");
	post("\n");

	i=end+1;
	if (i<textlen) {
		// postfl following line for context
		for (j=0; j<255 && i<textlen; ++i) {
			if (text[i] == 0 ||text[i] == '\r' || text[i] == '\n') break;
			str[j++] = text[i];
		}
		str[j] = 0;
		post("  %s\n", str);
	}
	post("-----------------------------------\n", str);
}

/***************************************************************************/
/*         SECONDARY PARSING FUNCTION : scanForClosingBracket              */
/***************************************************************************/

/* Note that this function only uses input0 -- the goal here isn't to really
 * parse anything, just find the closing bracket as quickly and efficiently
 * as possible */
bool scanForClosingBracket()
{
	int r, c, startLevel;
	intptr_t d;
	bool res = true;
	// finite state machine to parse input stream into tokens

	if (gDebugLexer)
		postfl("->scanForClosingBracket\n");

	startLevel = brackets.num;
start:
	c = input0();

	if (c == 0) goto leave;
	else if (c==' ' || c=='\t' || c=='\n' || c=='\r' || c=='\v' || c=='\f') {
		goto start;
	}
	else if (c == '\'') goto symbolAfterQuote;
	else if (c == '"') goto stringAfterQuote;
	else if (c == '/') {
		c = input0();
		if (c == '/') goto commentLine;
		else if (c == '*') goto commentBlock;
		else { unput(c); goto start; }
	}
	else if (c == '$') {
		c = input0();
		if (c == '\\') {
			c = input0();
			switch (c) {
				case 'n' : c = '\n'; break;
				case 'r' : c = '\r'; break;
				case 't' : c = '\t'; break;
				case 'f' : c = '\f'; break;
				case 'v' : c = '\v'; break;
			}
		}
		goto start;
	}
	else if (c == OPENPAREN || c == OPENSQUAR || c == OPENCURLY) {
		pushls(&brackets, (intptr_t)c);
		r = c;
		goto start;
	}
	else if (c == CLOSSQUAR) {
		if (!emptyls(&brackets)) {
			if ((d = popls(&brackets)) != OPENSQUAR) {
				fatal();
				post("opening bracket was a '%c', but found a '%c'\n", d, c);
				goto error1;
			}
		} else {
			fatal();
			post("unmatched '%c'\n",c);
			goto error1;
		}
		r = c;
		if (brackets.num < startLevel) goto leave;
		else goto start;
	}
	else if (c == CLOSPAREN) {
		if (!emptyls(&brackets)) {
			if ((d = popls(&brackets)) != (intptr_t) OPENPAREN) {
				fatal();
				post("opening bracket was a '%c', but found a '%c'\n", d, c);
				goto error1;
			}
		} else {
			fatal();
			post("unmatched '%c'\n",c);
			goto error1;
		}
		if (brackets.num < startLevel) goto leave;
		else goto start;
	}
	else if (c == CLOSCURLY) {
		if (!emptyls(&brackets)) {
			if ((d = popls(&brackets)) != OPENCURLY) {
				fatal();
				post("opening bracket was a '%c', but found a '%c'\n", d, c);
				goto error1;
			}
		} else {
			fatal();
			post("unmatched '%c'\n",c);
			goto error1;
		}
		if (brackets.num < startLevel) goto leave;
		else goto start;
	} else {
		goto start;
	}
symbolAfterQuote: {
		int startline, endchar;
		startline = lineno;
		endchar = '\'';

		do {
			c = input0();
			if (c == '\\') {
				c = input0();
			}
		} while (c != endchar && c != 0);
		if (c == 0) {
			char extPath[MAXPATHLEN];
			asRelativePath(curfilename, extPath);
			post("Open ended symbol started on line %d in file '%s'\n",
				 startline, extPath);
			goto error2;
		}
		goto start;
	}

stringAfterQuote: {
		int startline, endchar;
		startline = lineno;
		endchar = '\"';

		do  {
			c = input0();
			if (c == '\\') {
				c = input0();
			}
		} while (c != endchar && c != 0);
		if (c == 0) {
			char extPath[MAXPATHLEN];
			asRelativePath(curfilename, extPath);
			post("Open ended string started on line %d in file '%s'\n",
				 startline, extPath);
			goto error2;
		}
		goto start;
	}
commentLine:	/* comment -- to end of line */
	do {
		c = input0();
	} while (c != '\n' && c != '\r' && c != 0);
	if (c == 0) { goto leave; }
	else goto start;

commentBlock: {
		int startline, clevel, prevc;
		startline = lineno;
		prevc = 0;
		clevel = 1;
		do {
			c = input0();
			if (c == '/' && prevc == '*') {
                if (--clevel <= 0)
                    break;
                else
                    c = input0(); // eat both characters
            } else if (c == '*' && prevc == '/') {
                clevel++;
                c = input0(); // eat both characters
            }
			prevc = c;
		} while (c != 0);
		if (c == 0) {
			char extPath[MAXPATHLEN];
			asRelativePath(curfilename, extPath);
			post("Open ended comment started on line %d in file '%s'\n",
				 startline, extPath);
			goto error2;
		}
		goto start;
	}

error1:
	char extPath[MAXPATHLEN];
	asRelativePath(curfilename, extPath);
	post("  in file '%s' line %d char %d\n", extPath, lineno, charno);
	res = false;
	goto leave;

error2:
	res = false;
	goto leave;

leave:
	if (gDebugLexer)
		postfl("<-scanForClosingBracket\n");

	return res;
}

/***************************************************************************/
/*                      MAIN PARSING FUNCTIONS : END                       */
/***************************************************************************/
/*               CLASS SYSTEM STRUCTURING FUNCTIONS : BEGIN                */
/***************************************************************************/

int numClassDeps;
static ClassExtFile* sClassExtFiles;
static ClassExtFile* eClassExtFiles;

ClassExtFile* newClassExtFile(PyrSymbol *fileSym, int startPos, int endPos);
ClassExtFile* newClassExtFile(PyrSymbol *fileSym, int startPos, int endPos)
{
	ClassExtFile* classext;
	classext = (ClassExtFile*)pyr_pool_compile->Alloc(sizeof(ClassExtFile));
	classext->fileSym = fileSym;
	classext->next = 0;
	classext->startPos = startPos;
	classext->endPos = endPos;
	if (!sClassExtFiles) sClassExtFiles = classext;
	else eClassExtFiles->next = classext;
	eClassExtFiles = classext;
	return classext;
}

ClassDependency* newClassDependency(PyrSymbol *className, PyrSymbol *superClassName,
	PyrSymbol *fileSym, int startPos, int endPos, int lineOffset)
{
	ClassDependency* classdep;

	//post("classdep '%s' '%s' '%s' %d %d\n", className->name, superClassName->name,
	//	fileSym->name, className, superClassName);
	// pyrmalloc:
	// lifetime: kill after compile.
	numClassDeps++;
	if (className->classdep) {
		error("duplicate Class found: '%s' \n", className->name);
		post("%s\n",className->classdep->fileSym->name);
		postfl("%s\n\n",fileSym->name);
		return className->classdep;
	}
	classdep = (ClassDependency*)pyr_pool_compile->Alloc(sizeof(ClassDependency));
	MEMFAIL(text);
	classdep->className = className;
	classdep->superClassName = superClassName;
	classdep->fileSym = fileSym;
	classdep->superClassDep = NULL;
	classdep->next = NULL;
	classdep->subclasses = NULL;

	classdep->startPos = startPos;
	classdep->endPos = endPos;
	classdep->lineOffset = lineOffset;

	className->classdep = classdep;
	return classdep;
}

void buildDepTree()
{
	ClassDependency *next;
	SymbolTable* symbolTable = gMainVMGlobals->symbolTable;

	//postfl("->buildDepTree\n"); fflush(stdout);
	for (int i=0; i<symbolTable->TableSize(); ++i) {
		PyrSymbol *sym = symbolTable->Get(i);
		if (sym && (sym->flags & sym_Class)) {
			if (sym->classdep) {
				if (sym->classdep->superClassName->classdep) {
					next = sym->classdep->superClassName->classdep->subclasses;
					sym->classdep->superClassName->classdep->subclasses = sym->classdep;
					sym->classdep->next = next;
				} else if (sym->classdep->superClassName != s_none) {
					error("Superclass '%s' of class '%s' is not defined in any file.\n%s\n",
						sym->classdep->superClassName->name, sym->classdep->className->name,sym->classdep->fileSym->name);
				}
			}
		}
	}
	//postfl("<-buildDepTree\n"); fflush(stdout);
}

extern PyrClass *gClassList;

ClassDependency **gClassCompileOrder;
int gClassCompileOrderNum = 0;
int gClassCompileOrderSize = 1000;

void compileDepTree();

void traverseFullDepTree()
{
	//postfl("->traverseFullDepTree\n"); fflush(stdout);
	gClassCompileOrderNum = 0;
	gClassCompileOrder = (ClassDependency**)pyr_pool_compile->Alloc(
								gClassCompileOrderSize * sizeof(ClassDependency));
	MEMFAIL(gClassCompileOrder);

	// parse and compile all files
	initParser(); // sets compiler errors to 0
	gParserResult = -1;

	traverseDepTree(s_object->classdep, 0);
	compileDepTree(); // compiles backwards using the order defined in gClassCompileOrder
	compileClassExtensions();

	pyr_pool_compile->Free(gClassCompileOrder);

	finiParser();
	//postfl("<-traverseFullDepTree\n"); fflush(stdout);
}

void traverseDepTree(ClassDependency *classdep, int level)
{
	ClassDependency *subclassdep;

	if (!classdep) return;

	subclassdep = classdep->subclasses;
	for (; subclassdep; subclassdep = subclassdep->next) {
		traverseDepTree(subclassdep, level+1);
	}
	if (gClassCompileOrderNum > gClassCompileOrderSize) {
		gClassCompileOrderSize *= 2;
		gClassCompileOrder = (ClassDependency**)pyr_pool_compile->Realloc(gClassCompileOrder,
								gClassCompileOrderSize * sizeof(ClassDependency));
		MEMFAIL(gClassCompileOrder);
	}

/*	postfl("traverse level:%d, gClassCompileOrderNum:%d, '%s' '%s' '%s'\n", level, gClassCompileOrderNum, classdep->className->name, classdep->superClassName->name,
		classdep->fileSym->name); fflush(stdout);
*/

	gClassCompileOrder[gClassCompileOrderNum++] = classdep;
}

void compileClass(PyrSymbol *fileSym, int startPos, int endPos, int lineOffset)
{
	//fprintf(stderr, "compileClass: %d\n", fileSym->u.index);

	gCompilingFileSym = fileSym;
	gCompilingVMGlobals = 0;
	gRootParseNode = NULL;
	initParserPool();
	if (startLexer(fileSym, startPos, endPos, lineOffset)) {
		//postfl("->Parsing %s\n", fileSym->name); fflush(stdout);
		parseFailed = yyparse();
		//postfl("<-Parsing %s %d\n", fileSym->name, parseFailed); fflush(stdout);
		//post("parseFailed %d\n", parseFailed); fflush(stdout);
		if (!parseFailed && gRootParseNode) {
			//postfl("Compiling nodes %p\n", gRootParseNode);fflush(stdout);
			compilingCmdLine = false;
			compileNodeList(gRootParseNode, true);
			//postfl("done compiling\n");fflush(stdout);
		} else {
			compileErrors++;
				 char extPath[MAXPATHLEN];
				 asRelativePath(fileSym->name, extPath);
			error("file '%s' parse failed\n", extPath);
			postfl("error parsing\n");
		}
		finiLexer();
	} else {
		error("file '%s' open failed\n", fileSym->name);
	}
	freeParserPool();
}

void compileDepTree()
{
	ClassDependency *classdep;
	int i;

	for (i=gClassCompileOrderNum-1; i>=0; --i) {
		classdep = gClassCompileOrder[i];
		/*postfl("compile %d '%s' '%s' '%s'...%d/%d/%d\n", i, classdep->className->name, classdep->superClassName->name,
			classdep->fileSym->name, classdep->startLine, classdep->endLine, classDep->lineOffset);*/
		compileClass(classdep->fileSym, classdep->startPos, classdep->endPos, classdep->lineOffset);
	}
	//postfl("<compile\n");
}

void compileClassExtensions()
{
	if (sClassExtFiles) {
		ClassExtFile *classext = sClassExtFiles;
		do {
			//postfl("compile class ext: %d/%d\n", classext->startPos, classext->endPos);
			compileClass(classext->fileSym, classext->startPos, classext->endPos, -1);
			classext = classext->next;
		} while (classext);
	}
}

void findDiscrepancy();

void traverseFullDepTree2()
{

	// assign a class index to all classes
	if (!parseFailed && !compileErrors) {
		buildClassTree();
		gNumClasses = 0;

		// now I index them during pass one
		indexClassTree(class_object, 0);
		setSelectorFlags();
		if (2*numClassDeps != gNumClasses) {
			error("There is a discrepancy.\n");
			/* not always correct
					if(2*numClassDeps < gNumClasses) {
						post("Duplicate files may exist in the directory structure.\n");
					} else {
						post("Some class files may be missing.\n");
					}
					*/
			post("numClassDeps %d   gNumClasses %d\n", numClassDeps, gNumClasses);
			findDiscrepancy();
			compileErrors++;
		} else {
			double elapsed;
			buildBigMethodMatrix();
			SymbolTable* symbolTable = gMainVMGlobals->symbolTable;
			post("\tNumber of Symbols %d\n", symbolTable->NumItems());
			post("\tByte Code Size %d\n", totalByteCodes);
			//elapsed = TickCount() - compileStartTime;
			//elapsed = 0;
			elapsed = elapsedTime() - compileStartTime;
			post("\tcompiled %d files in %.2f seconds\n",
				 gNumCompiledFiles, elapsed );
			if(numOverwrites == 1){
				post("\nInfo: One method is currently overwritten by an extension. To see which, execute:\nMethodOverride.printAll\n\n");
			}
			else if(numOverwrites > 1){
				post("\nInfo: %i methods are currently overwritten by extensions. To see which, execute:\nMethodOverride.printAll\n\n", numOverwrites);
			}
			post("compile done\n");
		}
	}
}

bool parseOneClass(PyrSymbol *fileSym)
{
	int token;
	PyrSymbol *className, *superClassName;
	ClassDependency *classdep;
	bool res;

	int startPos, startLineOffset;

	res = true;

	startPos = textpos;
	startLineOffset = lineno - 1;

	token = yylex();
	if (token == CLASSNAME) {
		className = slotRawSymbol(&((PyrSlotNode*)zzval)->mSlot);
		// I think this is wrong: zzval is space pool alloced
		//pyrfree((PyrSlot*)zzval);

		token = yylex();
		if (token == 0) return false;
		if (token == OPENSQUAR) {
			scanForClosingBracket(); // eat indexing spec
			token = yylex();
			if (token == 0) return false;
		}
		if (token == ':') {
			token = yylex();  // get super class
			if (token == 0) return false;
			if (token == CLASSNAME) {
				superClassName = slotRawSymbol(&((PyrSlotNode*)zzval)->mSlot);
				// I think this is wrong: zzval is space pool alloced
				//pyrfree((PyrSlot*)zzval);
				token = yylex();
				if (token == 0) return false;
				if (token == OPENCURLY) {
					scanForClosingBracket(); // eat class body
					classdep = newClassDependency(className, superClassName, fileSym, startPos, textpos, startLineOffset);
				} else {
					compileErrors++;
					postfl("Expected %c.  got token: '%s' %d\n", OPENCURLY, yytext, token);
					postErrorLine(lineno, linepos, charno);
					return false;
				}
			} else {
				compileErrors++;
				post("Expected superclass name.  got token: '%s' %d\n", yytext, token);
				postErrorLine(lineno, linepos, charno);
				return false;
			}
		} else if (token == OPENCURLY) {
			if (className == s_object) superClassName = s_none;
			else superClassName = s_object;
			scanForClosingBracket(); // eat class body
			classdep = newClassDependency(className, superClassName, fileSym, startPos, textpos, startLineOffset);
		} else {
			compileErrors++;
			post("Expected ':' or %c.  got token: '%s' %d\n", OPENCURLY, yytext, token);
			postErrorLine(lineno, linepos, charno);
			return false;
		}
	} else if (token == '+') {
		token = yylex();
		if (token == 0) return false;
		scanForClosingBracket();

		newClassExtFile(fileSym, startPos, textpos);
		return false;
	} else {
		if (token != 0) {
			compileErrors++;
			post("Expected class name.  got token: '%s' %d\n", yytext, token);
			postErrorLine(lineno, linepos, charno);
			return false;
		} else {
			res = false;
		}
	}
	return res;
}

void initPassOne()
{
	post("initPassOne started\n");

	pyr_pool_runtime->FreeAllInternal();

	sClassExtFiles = NULL;

	void *ptr = pyr_pool_runtime->Alloc(sizeof(SymbolTable));
	gMainVMGlobals->symbolTable  = new (ptr) SymbolTable(pyr_pool_runtime, 65536);

	initSymbols(); // initialize symbol globals
	initSpecialSelectors();
	initSpecialClasses();
	initClasses();
	initParserPool();
	initParseNodes();
	initPrimitives();
	compileErrors = 0;
	numClassDeps = 0;
	compiledOK = false;
	compiledDirectories.clear();
	sc_InitCompileDirectory();
	post("initPassOne done\n");
}

void finiPassOne()
{
	//postfl("->finiPassOne\n");
	freeParserPool();
	//postfl("<-finiPassOne\n");
}

static bool passOne_ProcessDir(const char *dirname, int level)
{
	if (!sc_DirectoryExists(dirname))
		return true;

	if (compiledDirectories.find(std::string(dirname)) != compiledDirectories.end())
		// already compiled
		return true;

	bool success = true;

	if (gLanguageConfig && gLanguageConfig->pathIsExcluded(dirname)) {
		post("\texcluding dir: '%s'\n", dirname);
		return success;
	}

	if (level == 0) post("\tcompiling dir: '%s'\n", dirname);

	SC_DirHandle *dir = sc_OpenDir(dirname);
	if (!dir) {
		error("open directory failed '%s'\n", dirname); fflush(stdout);
		return false;
	}

	for (;;) {
		char diritem[MAXPATHLEN];
		bool skipItem = true;
		bool validItem = sc_ReadDir(dir, dirname, diritem, skipItem);
		if (!validItem) break;
		if (skipItem) continue;

		if (sc_DirectoryExists(diritem)) {
			success = passOne_ProcessDir(diritem, level + 1);
		} else {
			success = passOne_ProcessOneFile(diritem, level + 1);
		}

		if (!success) break;
	}

	compiledDirectories.insert(std::string(dirname));
	sc_CloseDir(dir);
	return success;
}

bool passOne()
{
	initPassOne();

	if (sc_IsStandAlone()) {
		/// FIXME: this should be moved to the LibraryConfig file
		if (!passOne_ProcessDir(gCompileDir, 0))
			return false;
	} else
		if (!gLanguageConfig->forEachIncludedDirectory(passOne_ProcessDir))
			return false;

	finiPassOne();
	return true;
}

// true if filename ends in ".sc"
bool isValidSourceFileName(char *filename)
{
	int len = strlen(filename);
	bool validExtension = (len>3 && strncmp(filename+len-3, ".sc", 3) == 0)
						  || (len>7 && strncmp(filename+len-7, ".sc.rtf", 7) == 0);
	if (!validExtension)
		return false;

	boost::filesystem::path pathname(filename);

	if (pathname.filename().c_str()[0] == '.') // hidden filename
		return false;

	return true;
}

// sekhar's replacement
bool passOne_ProcessOneFile(const char * filenamearg, int level)
{
	bool success = true;

	bool isAlias = false;

	char filename[MAXPATHLEN];
	int status = sc_ResolveIfAlias(filenamearg, filename, isAlias, MAXPATHLEN);

	if (status<0) {
		printf("WARNING: skipping invalid symbolic link: %s\n", filenamearg);
		return success;
	}

	if (gLanguageConfig && gLanguageConfig->pathIsExcluded(filename)) {
	  post("\texcluding file: '%s'\n", filename);
	  return success;
	}

	if (isValidSourceFileName(filename)) {
		gNumCompiledFiles++;
		PyrSymbol * fileSym = getsym(filename);
		fileSym->u.source = NULL;
		if (startLexer(fileSym, -1, -1, -1)) {
			while (parseOneClass(fileSym)) { };
			finiLexer();
		} else {
			error("file '%s' open failed\n", filename);
			success = false;
		}
	} else {
		if (sc_DirectoryExists(filename))
			success = passOne_ProcessDir(filename, level);
	}
	return success;
}

void schedRun();

void compileSucceeded();
void compileSucceeded()
{
	compiledOK = !(parseFailed || compileErrors);
	if (compiledOK) {
		compiledOK = true;

		compiledOK = initRuntime(gMainVMGlobals, 128*1024, pyr_pool_runtime);

		if (compiledOK) {
			VMGlobals *g = gMainVMGlobals;

			g->canCallOS = true;
			//++g->sp; SetObject(g->sp, g->process);
			//runInterpreter(g, s_hardwaresetup, 1);

			++g->sp; SetObject(g->sp, g->process);
			runInterpreter(g, s_startup, 1);
			g->canCallOS = false;

			schedRun();
		}
		flushPostBuf();
	}
}

static void runShutdown()
{
	//printf("->aboutToCompileLibrary\n");
	gLangMutex.lock();
	if (compiledOK) {
		VMGlobals *g = gMainVMGlobals;

		g->canCallOS = true;

		++g->sp;
		SetObject(g->sp, g->process);
		runInterpreter(g, s_shutdown, 1);

		g->canCallOS = false;
	}
	gLangMutex.unlock();
	//printf("<-aboutToCompileLibrary\n");
}

void closeAllGUIScreens();
void TempoClock_stopAll(void);
void closeAllCustomPorts();

void shutdownLibrary()
{
	closeAllGUIScreens();

	schedStop();

	runShutdown();

	TempoClock_stopAll();

	gLangMutex.lock();
	closeAllCustomPorts();

	if (compiledOK) {
		VMGlobals *g = gMainVMGlobals;
		g->canCallOS = true;
		g->gc->RunAllFinalizers();
		g->canCallOS = false;
	}

	pyr_pool_runtime->FreeAll();

	compiledOK = false;

	gLangMutex.unlock();
	deinitPrimitives();

	SC_LanguageConfig::freeLibraryConfig();
}

SCLANG_DLLEXPORT_C bool compileLibrary(bool standalone)
{
	//printf("->compileLibrary\n");
	shutdownLibrary();

	gLangMutex.lock();
	gNumCompiledFiles = 0;
	compiledOK = false;

	SC_LanguageConfig::readLibraryConfig(standalone);

	compileStartTime = elapsedTime();

	totalByteCodes = 0;

#ifdef NDEBUG
	postfl("compiling class library...\n");
#else
	postfl("compiling class library (debug build)...\n");
#endif

	bool res = passOne();
	if (res) {

		postfl("\tpass 1 done\n");

		if (!compileErrors) {
			buildDepTree();
			traverseFullDepTree();
			traverseFullDepTree2();
			flushPostBuf();

			if (!compileErrors && gDebugSymbolTable) {
				SymbolTable* symbolTable = gMainVMGlobals->symbolTable;
				symbolTable->CheckSymbols();
			}
		}
		pyr_pool_compile->FreeAll();
		flushPostBuf();
		compileSucceeded();
	} else {
		compiledOK = false;
	}

	gLangMutex.unlock();
	//printf("<-compileLibrary\n");
	return compiledOK;
}

void dumpByteCodes(PyrBlock *theBlock);

SCLANG_DLLEXPORT_C void runLibrary(PyrSymbol* selector)
{
	VMGlobals *g = gMainVMGlobals;
	g->canCallOS = true;
	try {
		if (compiledOK) {
			++g->sp; SetObject(g->sp, g->process);
			runInterpreter(g, selector, 1);
		} else {
			postfl("Library has not been compiled successfully.\n");
		}
	} catch (std::exception &ex) {
		PyrMethod *meth = g->method;
		if (meth) {
			int ip = slotRawInt8Array(&meth->code) ? g->ip - slotRawInt8Array(&meth->code)->b : -1;
			post("caught exception in runLibrary %s:%s %3d\n",
				 slotRawSymbol(&slotRawClass(&meth->ownerclass)->name)->name, slotRawSymbol(&meth->name)->name, ip
				 );
			dumpByteCodes(meth);
		} else {
			post("caught exception in runLibrary\n");
		}
		error(ex.what());
	} catch (...) {
		postfl("DANGER: OUT of MEMORY. Operation failed.\n");
	}
	g->canCallOS = false;
}
