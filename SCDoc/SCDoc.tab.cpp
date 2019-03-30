/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         scdocparse
#define yylex           scdoclex
#define yyerror         scdocerror
#define yydebug         scdocdebug
#define yynerrs         scdocnerrs

#define yylval          scdoclval
#define yychar          scdocchar
#define yylloc          scdoclloc

/* First part of user prologue.  */
#line 1 "SCDoc.y" /* yacc.c:337  */

/************************************************************************
*
* Copyright 2012 Jonatan Liljedahl <lijon@kymatica.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "SCDoc.h"

//#define YYLEX_PARAM &yylval, &yylloc

int scdocparse();

extern int scdoclineno;
extern char *scdoctext;
extern int scdoc_start_token;
extern FILE *scdocin;
//extern struct YYLTYPE scdoclloc;

//int scdoc_metadata_mode;

static const char * method_type = NULL;

static DocNode * topnode;

void scdocerror(const char *str);

extern void error(const char *fmt, ...);
extern void post(const char *fmt, ...);

static inline bool stringEqual(const char * a, const char * b)
{
    return strcmp(a, b) == 0;
}


#line 132 "SCDoc.tab.cpp" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "SCDoc.tab.hpp".  */
#ifndef YY_SCDOC_SCDOC_TAB_HPP_INCLUDED
# define YY_SCDOC_SCDOC_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int scdocdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 0,
    CLASS = 258,
    TITLE = 259,
    SUMMARY = 260,
    RELATED = 261,
    CATEGORIES = 262,
    REDIRECT = 263,
    CLASSTREE = 264,
    COPYMETHOD = 265,
    KEYWORD = 266,
    PRIVATE = 267,
    SECTION = 268,
    SUBSECTION = 269,
    METHOD = 270,
    ARGUMENT = 271,
    DESCRIPTION = 272,
    CLASSMETHODS = 273,
    INSTANCEMETHODS = 274,
    EXAMPLES = 275,
    RETURNS = 276,
    DISCUSSION = 277,
    LIST = 278,
    TREE = 279,
    NUMBEREDLIST = 280,
    DEFINITIONLIST = 281,
    TABLE = 282,
    FOOTNOTE = 283,
    NOTE = 284,
    WARNING = 285,
    CODE = 286,
    LINK = 287,
    ANCHOR = 288,
    SOFT = 289,
    IMAGE = 290,
    TELETYPE = 291,
    STRONG = 292,
    EMPHASIS = 293,
    SUPERSCRIPT = 294,
    SUBSCRIPT = 295,
    CODEBLOCK = 296,
    TELETYPEBLOCK = 297,
    TAGSYM = 298,
    BARS = 299,
    HASHES = 300,
    TEXT = 301,
    URL = 302,
    COMMA = 303,
    METHODNAME = 304,
    METHODARGS = 305,
    NEWLINE = 306,
    EMPTYLINES = 307,
    BAD_METHODNAME = 308,
    START_FULL = 309,
    START_PARTIAL = 310,
    START_METADATA = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 55 "SCDoc.y" /* yacc.c:352  */

    intptr_t i;
    const char *id;
    char *str;
    DocNode *doc_node;

#line 240 "SCDoc.tab.cpp" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE scdoclval;
extern YYLTYPE scdoclloc;
int scdocparse (void);

#endif /* !YY_SCDOC_SCDOC_TAB_HPP_INCLUDED  */

/* Second part of user prologue.  */
#line 100 "SCDoc.y" /* yacc.c:354  */

//int scdoclex (YYSTYPE * yylval_param, struct YYLTYPE * yylloc_param );
int scdoclex (void);

#line 275 "SCDoc.tab.cpp" /* yacc.c:354  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   434

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  193

#define YYUNDEFTOK  2
#define YYMAXUTOK   311

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   108,   111,   117,   121,   129,   130,   133,
     134,   137,   138,   139,   142,   143,   144,   145,   148,   149,
     150,   151,   154,   155,   158,   159,   160,   163,   163,   164,
     167,   168,   171,   172,   173,   176,   179,   180,   183,   184,
     185,   188,   195,   207,   212,   213,   224,   235,   236,   239,
     248,   249,   252,   253,   256,   257,   260,   261,   264,   265,
     268,   269,   277,   278,   281,   282,   283,   286,   287,   290,
     291,   292,   293,   294,   295,   296,   299,   300,   303,   304,
     307,   308,   309,   310,   311,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   325,   326,   329,   330,   331,   334,
     335,   338,   339,   342,   345,   346,   349,   350,   353,   354,
     357,   364,   365,   368,   369,   372,   373,   376,   377,   380,
     381,   384,   385,   388,   389,   392,   393,   396,   397,   400,
     401,   402,   403,   406,   407
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "CLASS", "TITLE", "SUMMARY",
  "RELATED", "CATEGORIES", "REDIRECT", "CLASSTREE", "COPYMETHOD",
  "KEYWORD", "PRIVATE", "SECTION", "SUBSECTION", "METHOD", "ARGUMENT",
  "DESCRIPTION", "CLASSMETHODS", "INSTANCEMETHODS", "EXAMPLES", "RETURNS",
  "DISCUSSION", "LIST", "TREE", "NUMBEREDLIST", "DEFINITIONLIST", "TABLE",
  "FOOTNOTE", "NOTE", "WARNING", "CODE", "LINK", "ANCHOR", "SOFT", "IMAGE",
  "TELETYPE", "STRONG", "EMPHASIS", "SUPERSCRIPT", "SUBSCRIPT",
  "\"CODE block\"", "\"TELETYPE block\"", "\"::\"", "\"||\"", "\"##\"",
  "\"text\"", "URL", "COMMA", "\"method name\"", "\"arguments string\"",
  "\"newline\"", "\"empty lines\"", "\"bad method name\"", "START_FULL",
  "START_PARTIAL", "START_METADATA", "$accept", "start", "document",
  "eateol", "dochead", "headline", "headtag", "sectiontag", "optsections",
  "sections", "section", "$@1", "optsubsections", "subsections",
  "subsection", "optsubsubsections", "subsubsections", "subsubsection",
  "optMETHODARGS", "methodname", "methnames", "methodbody", "optbody",
  "optargs", "args", "arg", "optreturns", "optdiscussion", "body",
  "blockA", "blockB", "bodyelem", "prose", "proseelem", "inlinetag",
  "blocktag", "listtag", "rangetag", "listbody", "tablerow", "tablebody",
  "tablecells", "defterms", "deflistrow", "deflistbody", "anywordurl",
  "anyword", "words", "words2", "eol", "eoleof", "anywordnl", "wordsnl",
  "nocommawords", "commalist", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

#define YYPACT_NINF -125

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-125)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,    95,   226,   150,    19,   161,  -125,  -125,   150,  -125,
     -35,   -35,   104,   104,  -125,   -21,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,   -10,    -6,   348,  -125,  -125,  -125,  -125,
    -125,  -125,    54,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,   270,   125,  -125,    30,  -125,
    -125,   348,   382,  -125,    58,  -125,   -35,    25,    -2,   348,
    -125,  -125,  -125,  -125,   104,   104,  -125,   182,  -125,    54,
    -125,  -125,   182,  -125,     7,    25,  -125,  -125,   118,    16,
      16,    54,  -125,  -125,   -23,   348,   122,  -125,    83,   348,
    -125,    86,    32,  -125,  -125,  -125,    35,    54,  -125,    79,
    -125,    30,  -125,  -125,  -125,    58,  -125,  -125,   -31,  -125,
    -125,  -125,   -22,   348,    94,    42,    71,    71,  -125,  -125,
     125,   -15,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
     104,  -125,  -125,   -15,   -21,  -125,    95,  -125,   348,   348,
    -125,  -125,  -125,  -125,    63,  -125,  -125,  -125,  -125,  -125,
     -15,  -125,  -125,  -125,  -125,  -125,  -125,   348,  -125,  -125,
    -125,  -125,   118,   270,  -125,   348,  -125,  -125,   348,   314,
    -125,  -125,  -125,    98,  -125,  -125,    30,    25,    89,    98,
    -125,    25,   348,   348,   108,  -125,   348,  -125,  -125,   348,
    -125,  -125,  -125
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,     0,     0,     0,     0,   121,   122,     0,     7,
       0,     0,     0,     0,    27,     0,    20,    18,    19,    21,
      96,    97,    98,     0,     0,     0,   100,    99,    89,    85,
      91,    87,     0,    90,    86,    88,    93,    92,    94,    95,
     115,    81,   116,    84,    76,    31,     5,    25,    26,    39,
      40,    62,    63,    66,    68,    79,     0,     0,     0,     0,
      80,    14,    15,    16,     0,     0,    17,    23,    10,     0,
       1,     3,    23,   118,     0,     0,   131,   132,   134,     0,
       0,     0,    46,    48,    44,     0,     0,   112,     0,    51,
     105,     0,     0,   114,   120,   113,     0,     0,    29,    30,
      33,    34,    24,    38,    65,    67,    64,    78,     0,   125,
     126,   128,     0,     0,     0,     0,     0,     0,     9,     6,
      22,     0,     4,   124,   117,   123,    74,    42,   129,   130,
       0,    75,    43,     0,     0,    45,     0,   109,    51,     0,
      72,   111,   107,    50,   103,    71,   104,    83,    77,   119,
       0,    32,    82,    73,   127,   102,    70,     0,    69,    13,
      12,    11,   133,    31,    47,    51,   110,   108,    51,    37,
     101,    28,    41,    53,   106,    35,    36,     0,    59,    52,
      55,     0,     0,     0,    61,    54,    51,    57,    58,     0,
      49,    56,    60
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,  -125,   109,    46,  -125,  -125,    53,   138,
     -41,  -125,     6,  -125,    49,  -125,   -42,   -40,  -125,    37,
    -125,  -125,  -124,  -125,  -125,   -20,  -125,  -125,    -5,  -125,
    -125,   123,   128,   -48,  -125,  -125,  -125,  -125,  -125,    82,
    -125,  -125,  -125,   110,  -125,   -87,    -9,    -7,   -59,    -1,
     103,    84,  -125,    73,     5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     8,    67,    68,    69,    45,   119,   120,
      47,    81,    98,    99,   100,   175,    48,    49,   136,    83,
      84,   172,   142,   178,   179,   180,   184,   190,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,   114,    90,
      91,   144,    86,    87,    88,    94,    60,    74,    96,   125,
     126,   111,   112,    78,    79
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    73,    73,   101,    75,   102,   107,   123,   103,   149,
     121,    40,   152,    42,   166,    40,   123,    42,    80,    70,
      92,   153,   133,    95,    40,   134,    42,   135,    82,     6,
       7,    40,    93,    42,   149,    85,     6,     7,   150,    89,
      11,   173,    13,   113,   174,    15,   149,    73,   109,   108,
       1,     2,     3,    40,   115,    42,   110,   107,     6,     7,
      95,   103,   191,   149,   130,   124,   124,     6,     7,   116,
     117,    40,    95,    42,   127,   147,     6,     7,   148,   102,
     137,    40,    93,    42,   143,   158,    25,    95,    95,    28,
      29,    30,    31,    97,    33,    34,    35,    36,    37,   124,
      40,    93,    42,   109,    40,    41,    42,   168,   155,    43,
     183,   110,    95,   118,   177,   159,   160,    72,   118,   130,
     161,   101,     6,     7,    95,   122,   140,   176,    85,   145,
     189,    89,   163,   143,   167,   165,   103,   156,    14,   157,
      46,    95,    16,    17,    18,    19,     6,     7,   151,   169,
      76,    77,   170,    61,    62,    63,    64,    65,    66,   185,
     143,    -2,    71,   143,   128,   129,   138,   139,    73,   171,
     181,   164,   124,   146,   104,   106,   182,   187,   188,   105,
     186,   143,   131,   132,   192,    61,    62,    63,    64,    65,
      66,    10,    11,    12,    13,    14,   154,    15,   141,    16,
      17,    18,    19,   162,     0,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,     0,     0,     0,    40,    41,
      42,     0,     0,    43,    44,    10,    11,    12,    13,    14,
       0,    15,     0,    16,    17,    18,    19,     0,     0,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,     0,
       0,     0,    40,    41,    42,     0,     0,    43,    44,    10,
      11,    12,    13,     0,    97,    15,     0,     0,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,     0,     0,     0,    40,    41,    42,     0,
       0,    43,    44,    10,    11,    12,    13,     0,     0,    15,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    10,     0,    12,
      40,    41,    42,     0,     0,    43,    44,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    10,     0,    12,    40,    41,    42,     0,     0,    43,
      44,     0,     0,     0,     0,    20,    21,    22,    23,    24,
       0,    26,    27,     0,     0,     0,     0,    32,     0,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44
};

static const yytype_int16 yycheck[] =
{
       1,    10,    11,    45,    11,    46,    54,     0,    48,    96,
      69,    46,    43,    48,   138,    46,     0,    48,    13,     0,
      25,    43,    81,    32,    46,    48,    48,    50,    49,    51,
      52,    46,    47,    48,   121,    45,    51,    52,    97,    45,
      10,   165,    12,    45,   168,    15,   133,    56,    57,    56,
      54,    55,    56,    46,    59,    48,    57,   105,    51,    52,
      69,   101,   186,   150,    48,    74,    75,    51,    52,    64,
      65,    46,    81,    48,    75,    43,    51,    52,    43,   120,
      85,    46,    47,    48,    89,    43,    28,    96,    97,    31,
      32,    33,    34,    14,    36,    37,    38,    39,    40,   108,
      46,    47,    48,   112,    46,    47,    48,    44,   113,    51,
      21,   112,   121,    67,    16,   116,   117,     8,    72,    48,
     121,   163,    51,    52,   133,    72,    43,   169,    45,    43,
      22,    45,   133,   138,   139,   136,   176,    43,    13,    45,
       2,   150,    17,    18,    19,    20,    51,    52,    99,   150,
      46,    47,   157,     3,     4,     5,     6,     7,     8,   179,
     165,     0,     1,   168,    46,    47,    44,    45,   177,   163,
     177,   134,   181,    91,    51,    52,   177,   182,   183,    51,
     181,   186,    79,    80,   189,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   112,    15,    88,    17,
      18,    19,    20,   130,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    46,    47,
      48,    -1,    -1,    51,    52,     9,    10,    11,    12,    13,
      -1,    15,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    46,    47,    48,    -1,    -1,    51,    52,     9,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    46,    47,    48,    -1,
      -1,    51,    52,     9,    10,    11,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     9,    -1,    11,
      46,    47,    48,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     9,    -1,    11,    46,    47,    48,    -1,    -1,    51,
      52,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      -1,    29,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    55,    56,    58,    59,    51,    52,    60,   106,
       9,    10,    11,    12,    13,    15,    17,    18,    19,    20,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      46,    47,    48,    51,    52,    64,    66,    67,    73,    74,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
     103,     3,     4,     5,     6,     7,     8,    61,    62,    63,
       0,     1,    61,   103,   104,   104,    46,    47,   110,   111,
     111,    68,    49,    76,    77,    45,    99,   100,   101,    45,
      96,    97,    85,    47,   102,   103,   105,    14,    69,    70,
      71,    73,    67,    74,    88,    89,    88,    90,   104,   103,
     106,   108,   109,    45,    95,    85,   111,   111,    62,    65,
      66,   105,    65,     0,   103,   106,   107,   106,    46,    47,
      48,   107,   107,   105,    48,    50,    75,    85,    44,    45,
      43,   100,    79,    85,    98,    43,    96,    43,    43,   102,
     105,    71,    43,    43,   108,    85,    43,    45,    43,   106,
     106,   106,   110,   106,    76,   106,    79,    85,    44,   106,
      85,    69,    78,    79,    79,    72,    73,    16,    80,    81,
      82,   104,   106,    21,    83,    82,   106,    85,    85,    22,
      84,    79,    85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    59,    59,    59,    60,    60,    61,
      61,    62,    62,    62,    63,    63,    63,    63,    64,    64,
      64,    64,    65,    65,    66,    66,    66,    68,    67,    67,
      69,    69,    70,    70,    70,    71,    72,    72,    73,    73,
      73,    74,    74,    74,    75,    75,    76,    77,    77,    78,
      79,    79,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    86,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    89,    89,
      90,    90,    90,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    92,    93,    93,    93,    94,
      94,    95,    95,    96,    97,    97,    98,    98,    99,    99,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   110,   110,   111,   111
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     4,     2,     3,     1,     0,     2,
       1,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     0,     5,     2,
       1,     0,     2,     1,     1,     4,     1,     0,     2,     1,
       1,     5,     3,     3,     0,     1,     1,     3,     1,     4,
       1,     0,     1,     0,     2,     1,     4,     3,     2,     0,
       2,     0,     1,     1,     2,     2,     1,     2,     1,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     2,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     2,     1,     3,     1,     3,     2,
       3,     2,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       2,     1,     1,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 46: /* "text"  */
#line 98 "SCDoc.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1376 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 47: /* URL  */
#line 98 "SCDoc.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1382 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 48: /* COMMA  */
#line 98 "SCDoc.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1388 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 49: /* "method name"  */
#line 98 "SCDoc.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1394 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 50: /* "arguments string"  */
#line 98 "SCDoc.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1400 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 59: /* document  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1406 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 61: /* dochead  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1412 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 62: /* headline  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1418 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 65: /* optsections  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1424 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 66: /* sections  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1430 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 67: /* section  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1436 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 69: /* optsubsections  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1442 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 70: /* subsections  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1448 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 71: /* subsection  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1454 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 72: /* optsubsubsections  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1460 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 73: /* subsubsections  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1466 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 74: /* subsubsection  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1472 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 75: /* optMETHODARGS  */
#line 98 "SCDoc.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1478 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 76: /* methodname  */
#line 98 "SCDoc.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1484 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 77: /* methnames  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1490 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 78: /* methodbody  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1496 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 79: /* optbody  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1502 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 80: /* optargs  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1508 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 81: /* args  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1514 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 82: /* arg  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1520 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 83: /* optreturns  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1526 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 84: /* optdiscussion  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1532 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 85: /* body  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1538 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 86: /* blockA  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1544 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 87: /* blockB  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1550 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 88: /* bodyelem  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1556 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 89: /* prose  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1562 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 90: /* proseelem  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1568 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 95: /* listbody  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1574 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 96: /* tablerow  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1580 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 97: /* tablebody  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1586 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 98: /* tablecells  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1592 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 99: /* defterms  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1598 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 100: /* deflistrow  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1604 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 101: /* deflistbody  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1610 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 102: /* anywordurl  */
#line 98 "SCDoc.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1616 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 103: /* anyword  */
#line 98 "SCDoc.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1622 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 104: /* words  */
#line 98 "SCDoc.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1628 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 105: /* words2  */
#line 98 "SCDoc.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1634 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 108: /* anywordnl  */
#line 98 "SCDoc.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1640 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 109: /* wordsnl  */
#line 98 "SCDoc.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1646 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 110: /* nocommawords  */
#line 98 "SCDoc.y" /* yacc.c:1257  */
      { free(((*yyvaluep).str)); }
#line 1652 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

    case 111: /* commalist  */
#line 97 "SCDoc.y" /* yacc.c:1257  */
      { doc_node_free_tree(((*yyvaluep).doc_node)); }
#line 1658 "SCDoc.tab.cpp" /* yacc.c:1257  */
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 107 "SCDoc.y" /* yacc.c:1667  */
    { topnode = (yyvsp[0].doc_node); }
#line 1950 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 3:
#line 108 "SCDoc.y" /* yacc.c:1667  */
    { topnode = NULL; doc_node_free_tree((yyvsp[-1].doc_node)); }
#line 1956 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 4:
#line 112 "SCDoc.y" /* yacc.c:1667  */
    {
        (yyval.doc_node) = doc_node_create("DOCUMENT");
        doc_node_add_child((yyval.doc_node), (yyvsp[-1].doc_node));
        doc_node_add_child((yyval.doc_node), (yyvsp[0].doc_node));
    }
#line 1966 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 5:
#line 118 "SCDoc.y" /* yacc.c:1667  */
    {
        (yyval.doc_node) = doc_node_make_take_children("BODY",NULL,(yyvsp[0].doc_node));
    }
#line 1974 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 6:
#line 122 "SCDoc.y" /* yacc.c:1667  */
    {
        (yyval.doc_node) = doc_node_create("DOCUMENT");
        doc_node_add_child((yyval.doc_node), (yyvsp[-1].doc_node));
        doc_node_add_child((yyval.doc_node), (yyvsp[0].doc_node));
    }
#line 1984 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 9:
#line 133 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 1990 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 10:
#line 134 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("HEADER",NULL,(yyvsp[0].doc_node)); }
#line 1996 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 11:
#line 137 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make((yyvsp[-2].id),(yyvsp[-1].str),NULL); }
#line 2002 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 12:
#line 138 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children("CATEGORIES",NULL,(yyvsp[-1].doc_node)); }
#line 2008 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 13:
#line 139 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children("RELATED",NULL,(yyvsp[-1].doc_node)); }
#line 2014 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 14:
#line 142 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "TITLE"; }
#line 2020 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 15:
#line 143 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "TITLE"; }
#line 2026 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 16:
#line 144 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "SUMMARY"; }
#line 2032 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 17:
#line 145 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "REDIRECT"; }
#line 2038 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 18:
#line 148 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "CLASSMETHODS"; method_type = "CMETHOD"; }
#line 2044 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 19:
#line 149 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "INSTANCEMETHODS"; method_type = "IMETHOD"; }
#line 2050 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 20:
#line 150 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "DESCRIPTION"; method_type = "METHOD"; }
#line 2056 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 21:
#line 151 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "EXAMPLES"; method_type = "METHOD"; }
#line 2062 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 23:
#line 155 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("BODY",NULL,NULL); }
#line 2068 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 24:
#line 158 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2074 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 25:
#line 159 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("BODY",NULL,(yyvsp[0].doc_node)); }
#line 2080 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 26:
#line 160 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children("BODY",NULL,(yyvsp[0].doc_node)); }
#line 2086 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 27:
#line 163 "SCDoc.y" /* yacc.c:1667  */
    { method_type = "METHOD"; }
#line 2092 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 28:
#line 163 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children("SECTION",(yyvsp[-2].str),(yyvsp[0].doc_node)); }
#line 2098 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 29:
#line 164 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children((yyvsp[-1].id), NULL,(yyvsp[0].doc_node)); }
#line 2104 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 31:
#line 168 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = NULL; }
#line 2110 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 32:
#line 171 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2116 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 33:
#line 172 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("(SUBSECTIONS)",NULL,(yyvsp[0].doc_node)); }
#line 2122 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 35:
#line 176 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children("SUBSECTION", (yyvsp[-2].str), (yyvsp[0].doc_node)); }
#line 2128 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 37:
#line 180 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = NULL; }
#line 2134 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 38:
#line 183 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2140 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 39:
#line 184 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("(SUBSUBSECTIONS)",NULL,(yyvsp[0].doc_node)); }
#line 2146 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 40:
#line 185 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children("(SUBSUBSECTIONS)",NULL,(yyvsp[0].doc_node)); }
#line 2152 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 41:
#line 189 "SCDoc.y" /* yacc.c:1667  */
    {
        (yyvsp[-3].doc_node)->id = "METHODNAMES";
        (yyval.doc_node) = doc_node_make(method_type,(yyvsp[-2].str),(yyvsp[-3].doc_node));
        doc_node_add_child((yyval.doc_node), (yyvsp[0].doc_node));
//        doc_node_add_child($2, $3);
    }
#line 2163 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 42:
#line 195 "SCDoc.y" /* yacc.c:1667  */
    {
                if ( !(strchr((yyvsp[-1].str), ' ')) ) {
                  yyerror("COPYMETHOD requires 2 arguments (class name and method name)");
                  YYERROR;
                }

                (yyval.doc_node) = doc_node_make(
                stringEqual(method_type, "CMETHOD") ? "CCOPYMETHOD"
                                                    : (stringEqual(method_type, "IMETHOD") ? "ICOPYMETHOD"
                                                                                           : "COPYMETHOD"),
                (yyvsp[-1].str), NULL
                ); }
#line 2180 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 43:
#line 207 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children( stringEqual(method_type, "CMETHOD") ? "CPRIVATE"
                                                                                                                : "IPRIVATE",
                NULL, (yyvsp[-1].doc_node)); }
#line 2188 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 44:
#line 212 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.str) = NULL; }
#line 2194 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 45:
#line 214 "SCDoc.y" /* yacc.c:1667  */
    {
//        $$ = doc_node_make("ARGSTRING",$1,NULL);
        (yyval.str) = (yyvsp[0].str);
        if(!stringEqual(method_type, "METHOD")) {
            yyerror("METHOD argument string is not allowed inside CLASSMETHODS or INSTANCEMETHODS");
            YYERROR;
        }
    }
#line 2207 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 46:
#line 225 "SCDoc.y" /* yacc.c:1667  */
    {
        char *p = (yyvsp[0].str)+strlen((yyvsp[0].str))-1;
        if(*p=='_') {
            post("WARNING: SCDoc: In %s\n  Property setter %s should be documented without underscore.\n", scdoc_current_file, (yyvsp[0].str));
            *p = '\0';
        };
        (yyval.str) = (yyvsp[0].str);
    }
#line 2220 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 47:
#line 235 "SCDoc.y" /* yacc.c:1667  */
    { free((yyvsp[-1].str)); (yyvsp[-1].str) = NULL; (yyval.doc_node) = doc_node_add_child((yyvsp[-2].doc_node), doc_node_make("STRING",(yyvsp[0].str),NULL)); }
#line 2226 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 48:
#line 236 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("(METHODNAMES)",NULL,doc_node_make("STRING",(yyvsp[0].str),NULL)); }
#line 2232 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 49:
#line 240 "SCDoc.y" /* yacc.c:1667  */
    {
        (yyval.doc_node) = doc_node_make_take_children("METHODBODY",NULL,(yyvsp[-3].doc_node));
        doc_node_add_child((yyval.doc_node), (yyvsp[-2].doc_node));
        doc_node_add_child((yyval.doc_node), (yyvsp[-1].doc_node));
        doc_node_add_child((yyval.doc_node), (yyvsp[0].doc_node));
    }
#line 2243 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 51:
#line 249 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = NULL; }
#line 2249 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 53:
#line 253 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = NULL; }
#line 2255 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 54:
#line 256 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2261 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 55:
#line 257 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("ARGUMENTS",NULL,(yyvsp[0].doc_node)); }
#line 2267 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 56:
#line 260 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children("ARGUMENT", (yyvsp[-2].str), (yyvsp[0].doc_node)); }
#line 2273 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 57:
#line 261 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children("ARGUMENT", NULL, (yyvsp[0].doc_node)); }
#line 2279 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 58:
#line 264 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children("RETURNS",NULL,(yyvsp[0].doc_node)); }
#line 2285 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 59:
#line 265 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = NULL; }
#line 2291 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 60:
#line 268 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children("DISCUSSION",NULL,(yyvsp[0].doc_node)); }
#line 2297 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 61:
#line 269 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = NULL; }
#line 2303 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 64:
#line 281 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2309 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 65:
#line 282 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2315 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 66:
#line 283 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("(SECTIONBODY)",NULL,(yyvsp[0].doc_node)); }
#line 2321 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 67:
#line 286 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2327 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 68:
#line 287 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("(SECTIONBODY)",NULL,(yyvsp[0].doc_node)); }
#line 2333 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 69:
#line 290 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children((yyvsp[-2].id),NULL,(yyvsp[-1].doc_node)); }
#line 2339 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 70:
#line 291 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children((yyvsp[-2].id),NULL,(yyvsp[-1].doc_node)); }
#line 2345 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 71:
#line 292 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children("TABLE",NULL,(yyvsp[-1].doc_node)); }
#line 2351 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 72:
#line 293 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children("DEFINITIONLIST",NULL,(yyvsp[-1].doc_node)); }
#line 2357 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 73:
#line 294 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make((yyvsp[-2].id),(yyvsp[-1].str),NULL); }
#line 2363 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 74:
#line 295 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("CLASSTREE",(yyvsp[-1].str),NULL); }
#line 2369 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 75:
#line 296 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children("KEYWORD",NULL,(yyvsp[-1].doc_node));
//            printf("keyword '%s'\n",$2->children[0]->text);
        }
#line 2377 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 76:
#line 299 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = NULL; }
#line 2383 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 77:
#line 300 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("IMAGE",(yyvsp[-1].str),NULL); }
#line 2389 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 78:
#line 303 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node), (yyvsp[0].doc_node)); }
#line 2395 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 79:
#line 304 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("PROSE",NULL,(yyvsp[0].doc_node)); }
#line 2401 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 80:
#line 307 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make(NODE_TEXT,(yyvsp[0].str),NULL); }
#line 2407 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 81:
#line 308 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("LINK",(yyvsp[0].str),NULL); }
#line 2413 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 82:
#line 309 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make((yyvsp[-2].id),(yyvsp[-1].str),NULL); }
#line 2419 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 83:
#line 310 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children("FOOTNOTE",NULL,(yyvsp[-1].doc_node)); }
#line 2425 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 84:
#line 311 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_create(NODE_NL); }
#line 2431 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 85:
#line 314 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "LINK"; }
#line 2437 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 86:
#line 315 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "STRONG"; }
#line 2443 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 87:
#line 316 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "SOFT"; }
#line 2449 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 88:
#line 317 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "EMPHASIS"; }
#line 2455 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 89:
#line 318 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "CODE"; }
#line 2461 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 90:
#line 319 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "TELETYPE"; }
#line 2467 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 91:
#line 320 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "ANCHOR"; }
#line 2473 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 92:
#line 321 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "SUBSCRIPT"; }
#line 2479 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 93:
#line 322 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "SUPERSCRIPT"; }
#line 2485 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 94:
#line 325 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "CODEBLOCK"; }
#line 2491 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 95:
#line 326 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "TELETYPEBLOCK"; }
#line 2497 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 96:
#line 329 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "LIST"; }
#line 2503 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 97:
#line 330 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "TREE"; }
#line 2509 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 98:
#line 331 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "NUMBEREDLIST"; }
#line 2515 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 99:
#line 334 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "WARNING"; }
#line 2521 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 100:
#line 335 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.id) = "NOTE"; }
#line 2527 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 101:
#line 338 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_add_child((yyvsp[-2].doc_node), doc_node_make_take_children("ITEM",NULL,(yyvsp[0].doc_node))); }
#line 2533 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 102:
#line 339 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("(LISTBODY)",NULL, doc_node_make_take_children("ITEM",NULL,(yyvsp[0].doc_node))); }
#line 2539 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 103:
#line 342 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make_take_children("TABROW",NULL,(yyvsp[0].doc_node)); }
#line 2545 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 104:
#line 345 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2551 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 105:
#line 346 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("(TABLEBODY)",NULL,(yyvsp[0].doc_node)); }
#line 2557 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 106:
#line 349 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_add_child((yyvsp[-2].doc_node), doc_node_make_take_children("TABCOL",NULL,(yyvsp[0].doc_node))); }
#line 2563 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 107:
#line 350 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("(TABLECELLS)",NULL, doc_node_make_take_children("TABCOL",NULL,(yyvsp[0].doc_node))); }
#line 2569 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 108:
#line 353 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_add_child((yyvsp[-2].doc_node),doc_node_make_take_children("TERM",NULL,(yyvsp[0].doc_node))); }
#line 2575 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 109:
#line 354 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("(TERMS)",NULL,doc_node_make_take_children("TERM",NULL,(yyvsp[0].doc_node))); }
#line 2581 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 110:
#line 358 "SCDoc.y" /* yacc.c:1667  */
    {
        (yyval.doc_node) = doc_node_make_take_children("DEFLISTITEM", NULL, (yyvsp[-2].doc_node));
        doc_node_add_child((yyval.doc_node), doc_node_make_take_children("DEFINITION", NULL, (yyvsp[0].doc_node)));
    }
#line 2590 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 111:
#line 364 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_add_child((yyvsp[-1].doc_node),(yyvsp[0].doc_node)); }
#line 2596 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 112:
#line 365 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("(DEFLISTBODY)",NULL,(yyvsp[0].doc_node)); }
#line 2602 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 117:
#line 376 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.str) = strmerge((yyvsp[-1].str),(yyvsp[0].str)); }
#line 2608 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 119:
#line 380 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.str) = strmerge((yyvsp[-1].str),(yyvsp[0].str)); }
#line 2614 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 126:
#line 393 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.str) = strdup("\n"); }
#line 2620 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 127:
#line 396 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.str) = strmerge((yyvsp[-1].str),(yyvsp[0].str)); }
#line 2626 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 129:
#line 400 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.str) = strmerge((yyvsp[-1].str),(yyvsp[0].str)); }
#line 2632 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 130:
#line 401 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.str) = strmerge((yyvsp[-1].str),(yyvsp[0].str)); }
#line 2638 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 133:
#line 406 "SCDoc.y" /* yacc.c:1667  */
    { free((yyvsp[-1].str)); (yyvsp[-1].str)=NULL; (yyval.doc_node) = doc_node_add_child((yyvsp[-2].doc_node),doc_node_make("STRING",(yyvsp[0].str),NULL)); }
#line 2644 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;

  case 134:
#line 407 "SCDoc.y" /* yacc.c:1667  */
    { (yyval.doc_node) = doc_node_make("(COMMALIST)",NULL,doc_node_make("STRING",(yyvsp[0].str),NULL)); }
#line 2650 "SCDoc.tab.cpp" /* yacc.c:1667  */
    break;


#line 2654 "SCDoc.tab.cpp" /* yacc.c:1667  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 410 "SCDoc.y" /* yacc.c:1918  */


DocNode * scdoc_parse_run(int mode) {
    int modes[] = {START_FULL, START_PARTIAL, START_METADATA};
    if(mode<0 || mode>=sizeof(modes)) {
        error("scdoc_parse_run(): unknown mode: %d\n",mode);
    }
    scdoc_start_token = modes[mode];
/*    scdoc_start_token = START_FULL;
    scdoc_metadata_mode = 0;
    if(mode==SCDOC_PARSE_PARTIAL) {
        scdoc_start_token = START_PARTIAL;
    } else
    if(mode==SCDOC_PARSE_METADATA) {
        scdoc_metadata_mode = 1;
    }*/
    topnode = NULL;
    method_type = "METHOD";
    if(scdocparse()!=0) {
        return NULL;
    }
    return topnode;
}

void scdocerror(const char *str)
{
    error("In %s:\n  At line %d: %s\n\n",scdoc_current_file,scdoclineno,str);

/*  FIXME: this does not work well, since the reported linenumber is often *after* the actual error line
    fseek(scdocin, 0, SEEK_SET);
    int line = 1;
    char buf[256],*txt;
    while(line!=scdoclineno && !feof(scdocin)) {
        int c = fgetc(scdocin);
        if(c=='\n') line++;
    }
    txt = fgets(buf, 256, scdocin);
    if(txt)
        fprintf(stderr,"  %s\n-------------------\n", txt);
*/
}

