/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 16 "lang11d.y" /* yacc.c:339  */


#include <stdlib.h>
#include <string.h>
#include "PyrLexer.h"
#include "PyrParseNode.h"
#include "SC_Constants.h"
#include "SC_InlineUnaryOp.h"
#include "SC_InlineBinaryOp.h"
#include "InitAlloc.h"
#include "PredefinedSymbols.h"
#include "SimpleStack.h"

void bcopy(void *src, void *dst, size_t size) ;
int yyparse();
extern bool compilingCmdLine;
extern LongStack generatorStack;



#line 87 "lang11d_tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "lang11d_tab.h".  */
#ifndef YY_YY_LANG11D_TAB_H_INCLUDED
# define YY_YY_LANG11D_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NAME = 258,
    INTEGER = 259,
    SC_FLOAT = 260,
    ACCIDENTAL = 261,
    SYMBOL = 262,
    STRING = 263,
    ASCII = 264,
    PRIMITIVENAME = 265,
    CLASSNAME = 266,
    CURRYARG = 267,
    VAR = 268,
    ARG = 269,
    CLASSVAR = 270,
    SC_CONST = 271,
    NILOBJ = 272,
    TRUEOBJ = 273,
    FALSEOBJ = 274,
    PSEUDOVAR = 275,
    ELLIPSIS = 276,
    DOTDOT = 277,
    PIE = 278,
    BEGINCLOSEDFUNC = 279,
    BADTOKEN = 280,
    INTERPRET = 281,
    BEGINGENERATOR = 282,
    LEFTARROW = 283,
    WHILE = 284,
    BINOP = 285,
    KEYBINOP = 286,
    READWRITEVAR = 287,
    UMINUS = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LANG11D_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 172 "lang11d_tab.cpp" /* yacc.c:358  */

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
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
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
#  define YYSIZE_T unsigned int
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1957

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  293
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  535

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    54,     2,     2,     2,     2,
      50,    51,    37,    38,    49,    34,    41,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,    48,
      35,    31,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,    52,     2,    42,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,    39,    45,    53,     2,     2,     2,
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
      25,    26,    27,    28,    29,    32,    33,    40,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    41,    43,    47,    48,    52,    53,    57,
      61,    68,    74,    75,    78,    79,    83,    84,    88,    90,
      92,    96,    97,   101,   104,   107,   110,   115,   116,   119,
     120,   123,   124,   127,   128,   132,   134,   136,   140,   141,
     145,   146,   151,   152,   157,   158,   162,   163,   169,   170,
     173,   174,   177,   181,   185,   189,   194,   198,   203,   221,
     234,   236,   247,   258,   269,   282,   303,   312,   321,   326,
     339,   359,   363,   369,   387,   393,   393,   403,   403,   410,
     431,   435,   469,   507,   521,   532,   536,   561,   562,   563,
     564,   565,   566,   567,   573,   583,   585,   587,   589,   591,
     593,   606,   609,   636,   654,   681,   709,   728,   756,   783,
     801,   826,   854,   873,   901,   920,   939,   956,   970,   991,
    1010,  1028,  1045,  1061,  1077,  1078,  1079,  1080,  1081,  1094,
    1108,  1113,  1117,  1128,  1133,  1143,  1148,  1162,  1178,  1179,
    1180,  1181,  1184,  1185,  1191,  1194,  1195,  1199,  1200,  1202,
    1207,  1209,  1216,  1224,  1225,  1229,  1231,  1235,  1236,  1240,
    1244,  1245,  1248,  1250,  1254,  1255,  1260,  1261,  1262,  1263,
    1264,  1265,  1266,  1267,  1268,  1269,  1272,  1275,  1278,  1279,
    1280,  1281,  1282,  1283,  1284,  1285,  1286,  1289,  1290,  1291,
    1292,  1293,  1294,  1295,  1296,  1297,  1298,  1299,  1302,  1305,
    1310,  1311,  1315,  1316,  1320,  1324,  1325,  1329,  1333,  1337,
    1343,  1344,  1348,  1352,  1353,  1356,  1357,  1361,  1363,  1365,
    1373,  1374,  1377,  1378,  1382,  1384,  1386,  1394,  1396,  1403,
    1404,  1408,  1409,  1412,  1413,  1417,  1419,  1423,  1427,  1429,
    1436,  1437,  1441,  1442,  1447,  1449,  1453,  1455,  1459,  1460,
    1463,  1464,  1468,  1469,  1471,  1473,  1477,  1478,  1482,  1483,
    1492,  1493,  1502,  1503,  1514,  1517,  1518,  1519,  1525,  1533,
    1540,  1549,  1550,  1553,  1556,  1559,  1562,  1565,  1568,  1571,
    1574,  1577,  1580,  1581,  1582,  1583,  1584,  1585,  1586,  1587,
    1590,  1593,  1594,  1597
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "INTEGER", "SC_FLOAT",
  "ACCIDENTAL", "SYMBOL", "STRING", "ASCII", "PRIMITIVENAME", "CLASSNAME",
  "CURRYARG", "VAR", "ARG", "CLASSVAR", "SC_CONST", "NILOBJ", "TRUEOBJ",
  "FALSEOBJ", "PSEUDOVAR", "ELLIPSIS", "DOTDOT", "PIE", "BEGINCLOSEDFUNC",
  "BADTOKEN", "INTERPRET", "BEGINGENERATOR", "LEFTARROW", "WHILE", "':'",
  "'='", "BINOP", "KEYBINOP", "'-'", "'<'", "'>'", "'*'", "'+'", "'|'",
  "READWRITEVAR", "'.'", "'`'", "UMINUS", "'{'", "'}'", "'['", "']'",
  "';'", "','", "'('", "')'", "'^'", "'~'", "'#'", "$accept", "root",
  "classes", "classextensions", "classdef", "classextension", "optname",
  "superclass", "classvardecls", "classvardecl", "methods", "methoddef",
  "optsemi", "optcomma", "optequal", "funcbody", "cmdlinecode", "methbody",
  "primitive", "retval", "funretval", "blocklist1", "blocklistitem",
  "blocklist", "msgsend", "generator", "$@1", "$@2", "nextqual", "qual",
  "expr1", "valrangex1", "valrangeassign", "valrangexd", "valrange2",
  "valrange3", "expr", "adverb", "exprn", "exprseq", "arrayelems",
  "arrayelems1", "arglist1", "arglistv1", "keyarglist1", "keyarg",
  "optkeyarglist", "mavars", "mavarlist", "slotliteral", "blockliteral",
  "pushname", "pushliteral", "listliteral", "block", "funcvardecls",
  "funcvardecls1", "funcvardecl", "argdecls", "constdeflist", "constdef",
  "slotdeflist0", "slotdeflist", "slotdef", "vardeflist0", "vardeflist",
  "vardef", "dictslotdef", "dictslotlist1", "dictslotlist",
  "rwslotdeflist", "rwslotdef", "dictlit2", "litdictslotdef",
  "litdictslotlist1", "litdictslotlist", "listlit", "listlit2",
  "literallistc", "literallist1", "rwspec", "rspec", "integer", "floatr",
  "accidental", "pie", "floatp", "name", "classname", "primname",
  "trueobj", "falseobj", "nilobj", "ascii", "symbol", "string",
  "pseudovar", "binop", "keybinop", "binop2", "curryarg", YY_NULLPTR
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
      58,    61,   285,   286,    45,    60,    62,    42,    43,   124,
     287,    46,    96,   288,   123,   125,    91,    93,    59,    44,
      40,    41,    94,   126,    35
};
# endif

#define YYPACT_NINF -444

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-444)))

#define YYTABLE_NINF -218

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      60,  1063,    29,    87,    29,    59,  -444,  -444,  -444,  -444,
    -444,  -444,  -444,  -444,  -444,  -444,    13,  -444,  -444,  -444,
    -444,  -444,   113,  -444,   306,  1739,    45,  1375,   855,  1739,
      13,    26,  -444,  -444,  -444,  -444,  -444,   102,  -444,  -444,
    -444,  1916,   111,   130,  -444,  -444,  -444,  -444,  1115,  -444,
    -444,   166,   166,  -444,  -444,  -444,     8,    50,  -444,  -444,
    -444,  -444,  -444,  -444,  -444,  -444,   150,  -444,  -444,    58,
    -444,    -4,  -444,    97,    13,    13,  -444,  -444,  -444,  -444,
    -444,   907,  -444,  1739,  1739,  -444,  -444,   173,   160,   163,
    1739,  1739,  1427,  -444,   306,  -444,  -444,  -444,  -444,  -444,
    -444,   168,    84,  1115,  -444,   181,   171,  -444,  1739,   190,
    1899,   220,  1857,   223,    22,  -444,   219,  1479,  -444,    27,
    -444,   226,  1739,  -444,  -444,  -444,  -444,  -444,  -444,  1739,
    1167,    61,  -444,  -444,  -444,  1375,   720,    61,  -444,    29,
      13,   224,  -444,    13,  1739,  1739,   251,   144,   252,    71,
    -444,    92,  1115,  -444,  -444,  1115,  1739,  -444,  1375,  -444,
    -444,  -444,  1739,   229,     0,  -444,  1739,  1739,  1739,  -444,
     234,  1375,  -444,  -444,  -444,   106,  -444,  -444,  1739,  1857,
    1823,  -444,  -444,  -444,   228,   242,   166,  -444,  -444,   250,
    -444,  -444,  -444,  -444,  -444,  -444,  1739,    13,    13,  1857,
    1739,  -444,   141,  1531,   959,   174,   192,  1739,  1916,  1916,
    1739,    61,   244,   256,  -444,   253,    61,   244,   256,   258,
    -444,  1739,   670,  -444,   261,  -444,  -444,  -444,  1916,   262,
      13,  -444,    13,  -444,  -444,    13,  -444,   777,   264,  -444,
     265,   266,   271,  -444,   288,  1739,  -444,  -444,  1739,  1739,
    -444,  -444,   297,  -444,   290,  -444,  1739,  1219,    61,  1916,
     274,   292,  -444,   275,   282,  1857,  -444,  1857,  -444,  1857,
    1916,  -444,  -444,   289,   293,  1583,   304,  1739,  1739,   178,
      61,   244,   256,   258,  1739,  1011,    61,  -444,   333,  1739,
    -444,  -444,   298,  -444,    61,  1271,  -444,   300,   311,   302,
    -444,  -444,   303,   307,   311,   309,  -444,  1890,  -444,  -444,
     317,   319,   318,   237,  -444,   316,   326,  -444,  1739,    14,
    -444,  -444,   166,  -444,  -444,  -444,  -444,  -444,  -444,  -444,
    -444,  -444,  1323,  1323,  -444,  1739,  -444,  -444,   349,  1739,
      61,   244,   256,  -444,  1857,  1823,  -444,  -444,  -444,  -444,
     308,  -444,   337,   342,   327,  1739,  -444,   328,  1635,   345,
    -444,   329,   330,   331,  1916,    61,   244,   256,   258,   334,
    1739,   258,   205,  -444,    61,  -444,  -444,    61,   350,   351,
     113,   113,   352,   203,   203,   358,  -444,   800,  -444,  -444,
     353,    13,   186,   360,   354,   299,   361,  -444,  1739,  -444,
      61,   359,   363,  -444,  -444,  -444,  1739,  1739,   378,  1916,
     385,   386,   371,  1739,    61,  -444,    61,  -444,   372,   373,
     380,  -444,  -444,  -444,  1739,  -444,  -444,  -444,   113,   113,
    -444,  -444,  -444,  -444,  -444,  -444,   197,  -444,    13,   211,
    -444,   214,  -444,    13,  -444,  -444,   391,  1739,  1739,  -444,
    1323,  -444,  1739,   404,  -444,  -444,    61,  -444,  1916,  1916,
    1739,  1739,  1739,   402,  1916,  -444,  -444,    61,  -444,    61,
    1916,  -444,  -444,    25,    25,   237,  -444,   203,   406,  -444,
    -444,   358,   409,  1739,   354,   354,  -444,   354,  1739,  -444,
    1916,  1916,  1916,  1739,  -444,  -444,    25,    25,  -444,  1687,
     387,  1687,  1876,  -444,  1791,  -444,  1791,   354,  -444,  -444,
    -444,   354,  1916,  1687,  1687,  1739,   397,  -444,   392,  -444,
     403,  -444,  -444,  -444,  -444,  -444,   407,   408,  1899,  -444,
    -444,  -444,  -444,  -444,  -444
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,    44,     0,     0,     2,     3,     7,   271,   258,   260,
     262,   279,   280,   278,   273,   293,     0,   277,   275,   276,
     281,   264,   205,   272,     0,     0,   205,   145,   231,     0,
       0,     0,    37,     4,    33,    92,    89,   124,   101,   126,
     125,   142,    27,    44,    88,    90,    87,   176,    44,   202,
     186,   178,   265,   266,   269,   179,   177,   127,   183,   184,
     185,   180,   182,   181,    99,    91,     0,     1,     6,    14,
       8,     0,   222,   224,   220,   213,   200,   259,   261,   263,
     270,   231,   129,     0,     0,   200,   290,   147,     0,    29,
       0,     0,     0,   282,   286,   284,   285,   287,   288,   289,
     283,     0,     0,    44,   229,    29,     0,   291,   292,     0,
      27,    94,   248,     0,   162,   164,     0,     0,   286,     0,
     292,   138,    28,   144,    34,    36,   203,   268,   267,     0,
       0,    52,    46,    49,    48,   145,     0,    61,    21,     0,
      12,     0,   204,     0,     0,     0,     0,   221,     0,    29,
     215,    31,    44,    75,    77,    44,     0,    95,    30,   146,
     149,   115,     0,     0,     0,    96,   114,     0,     0,    93,
       0,    30,   232,    98,   228,     0,    28,    45,     0,   248,
     242,   250,   197,   196,     0,    29,   187,   188,   192,     0,
     193,   194,   195,   189,   191,   190,     0,     0,     0,   248,
       0,   153,     0,     0,     0,    50,     0,     0,   143,   131,
       0,     0,    29,    29,    47,     0,    50,    29,    29,    29,
     157,     0,     0,    15,     0,    13,    16,   223,   225,     0,
       0,   206,     0,   208,    30,     0,    32,     0,     0,   201,
       0,     0,     0,   148,   150,     0,   119,    97,   120,     0,
     116,   227,     0,    35,     0,   230,     0,     0,    53,   132,
       0,     0,   240,    29,     0,     0,   244,    30,   249,   248,
     135,   163,   165,     0,     0,     0,   100,     0,     0,     0,
      50,    29,    29,    29,     0,     0,    51,    74,     0,     0,
     140,   139,   130,   155,    54,    30,   160,     0,    30,     0,
      60,    62,     0,     0,    30,     0,   159,   287,    11,    22,
       0,     0,    14,    21,   226,     0,     0,   216,     0,     0,
     218,   174,   166,   167,   175,   171,   172,   173,   168,   170,
     169,   199,     0,     0,   198,     0,   151,   121,     0,   118,
       0,    29,    29,   246,     0,    30,   243,   237,   239,   251,
       0,   245,   103,   102,     0,     0,   154,     0,     0,   128,
      66,     0,     0,     0,   133,    50,    29,    29,    29,     0,
       0,    29,    50,    58,    50,    65,   158,    50,     0,     0,
     205,   205,     0,   252,   252,   256,    17,     0,   207,   209,
       0,     0,     0,     0,    79,   177,     0,   152,   122,   117,
      56,     0,     0,   238,   241,   247,     0,     0,   104,   136,
     109,   108,     0,     0,    50,    70,    50,    71,     0,     0,
       0,   141,   156,   161,     0,    55,    64,    63,   205,   205,
     200,   200,    16,   253,   255,   254,     0,   233,     0,     0,
     257,    29,   210,     0,     9,   219,     0,     0,     0,    76,
       0,    84,     0,     0,    78,   123,    50,    59,   106,   105,
       0,     0,     0,   110,   137,    69,    67,    50,    73,    50,
     134,   200,   200,    40,    40,    21,    19,   252,   235,    18,
      20,   256,     0,     0,    79,    79,    80,    79,     0,    57,
     107,   112,   111,     0,    72,    68,    40,    40,   274,    42,
      27,    42,     0,   234,     0,   211,     0,    79,    86,    85,
      81,    79,   113,    42,    42,     0,     0,    38,    42,    41,
       0,    10,   236,   212,    83,    82,     0,     0,    27,    23,
      39,    25,    24,    26,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -444,  -444,  -444,  -444,  -444,   449,  -444,   147,    28,  -444,
    -295,  -444,  -108,   -82,  -444,   -40,  -444,  -330,  -443,   -57,
     419,   -53,  -122,   247,  -444,    12,  -444,  -444,  -250,  -321,
    -444,  -444,  -444,  -444,  -444,  -444,    -5,  -444,  -444,    -1,
     332,  -444,  -125,   -88,  -123,   165,  -156,  -444,  -444,  -364,
     225,  -444,  -444,  -166,  -444,   -84,   436,    18,    10,  -444,
     -10,  -444,  -444,   235,  -444,   399,   335,   305,  -444,  -444,
      90,    -2,  -444,   151,  -444,  -444,  -209,  -444,  -158,  -444,
    -444,  -444,   -61,  -444,  -444,   -18,   146,    34,   368,  -444,
     286,   315,   322,   338,   346,   377,  -444,  -212,   465,   -11,
    -444
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    68,     6,   224,   141,   313,   386,
     222,   309,   123,   296,   237,    32,    33,   516,   499,   517,
      34,   286,   132,   287,    35,    36,   240,   241,   451,   393,
      37,    38,    39,    40,   101,   163,    41,   207,    42,   201,
      88,    89,   202,   213,   371,   220,   297,   113,   114,   320,
      44,    45,    46,   181,    47,   152,    48,   239,    76,   441,
     442,   148,   149,   150,   146,    71,    72,   104,   105,   106,
     436,   437,   182,   262,   263,   264,    50,   183,   184,   185,
     438,   443,    51,    52,    53,    54,    55,    56,    57,   500,
      58,    59,    60,    61,    62,    63,    64,   107,   120,   121,
      65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,   155,   177,   131,   137,   212,    80,   159,   125,   214,
     311,   217,   396,   219,   261,   214,     7,   109,   387,    49,
      82,   260,   248,   172,   110,    14,    87,   102,   321,     7,
       7,   501,    22,   127,   128,   498,    85,    14,    16,   129,
      14,   273,    23,   197,   142,   143,    49,    43,   218,   249,
      73,   186,    26,   513,   514,    23,    23,   299,   130,    74,
     112,   302,   303,   170,   111,   115,   126,   235,   133,   133,
     109,   198,   112,   203,    22,    83,    80,   204,   279,   281,
     102,   283,   153,   154,    75,    22,     1,    67,   139,   160,
     161,   164,  -214,    84,    26,   379,   135,     2,     2,   348,
     136,   349,    43,   268,   140,    26,   166,   174,    73,   151,
     233,   350,   238,  -217,   167,   242,   282,   208,   186,   186,
     234,   126,   258,   236,   209,   361,   362,    74,   144,   486,
      22,  -217,   341,   168,    87,   169,   214,   305,   186,   228,
     522,  -217,   523,   133,   229,   290,   188,   145,   117,   133,
      26,    43,    75,   205,    43,   243,   257,   244,   294,   122,
     366,   246,   368,   275,   214,   250,   251,   252,   127,   342,
     254,   520,   214,   259,   225,   311,   322,    73,   403,   261,
     502,   346,    29,   526,   527,   401,   402,   133,   276,    21,
     277,   270,   231,   143,   138,     7,     8,   367,    22,   274,
     358,   363,   292,   156,   186,   284,   186,   157,   186,   293,
     418,   419,   158,   188,   188,   447,   448,   133,    26,   165,
     306,    23,   173,   133,   285,   359,   288,   277,   133,    22,
     171,   271,   272,   188,   508,   509,   424,   510,   433,   434,
     291,   175,   289,   435,   336,   476,   477,   337,   338,    26,
     383,   178,   384,   385,   196,   174,   310,   524,   187,   479,
     477,   525,   480,   234,   315,   199,   316,   206,   226,   151,
     133,   324,   230,   232,   354,   266,   356,   357,   214,   364,
     247,   134,   134,   186,   186,   253,   420,   400,   369,   423,
     311,   267,   133,   295,   356,   321,   269,   321,   133,   188,
     300,   188,     7,   188,   127,   298,   133,   304,   312,   331,
      77,    78,    79,   314,   332,   333,   334,   390,   335,   339,
     167,   343,   344,    22,   345,   187,   187,   452,    23,    21,
     129,   394,   394,   347,   397,   355,   351,    77,   399,   119,
     352,   378,   131,    26,    86,   187,   473,   474,   139,   130,
     409,   372,   133,   373,   374,   405,   134,   412,   375,   481,
     377,   380,   134,   381,   388,   389,   395,   395,   406,   422,
      66,   398,    69,   407,   408,   410,   413,   133,   188,   188,
     414,   415,   416,   323,   133,   421,   133,   496,   497,   133,
     430,   431,   519,   440,   428,   429,   432,   455,   190,   116,
     134,   458,   459,   450,   445,   449,   454,   133,   464,   460,
     456,   187,   133,   187,   457,   187,   461,   462,   463,   470,
     534,   310,   483,   467,   468,   446,   133,   191,   133,   453,
     134,   469,   488,   493,   192,   176,   134,   504,   471,   472,
     506,   134,   529,   322,   515,   322,   484,   485,   531,   394,
     193,   487,   532,   533,    70,   490,   491,   492,   194,   382,
     475,   530,   124,   301,   103,   190,   190,   215,   133,   376,
     317,   505,   478,   147,   439,   503,   255,   482,   227,   133,
     189,   133,   507,   134,   395,   190,     0,   511,   512,   195,
     187,   187,    90,   108,   191,   191,   404,     0,   518,     0,
     518,   192,   192,     0,     0,   134,     0,   223,     0,     0,
     528,   134,   518,   518,   191,     0,     0,   193,   193,   134,
       0,   192,     0,   325,     0,   194,   194,   360,     0,     0,
       0,     0,     0,     0,     0,     0,   310,   193,   324,     0,
     324,     0,     0,     0,     0,   194,   108,   189,   189,     0,
       0,   190,   326,   190,     0,   190,   195,   195,     0,   327,
       0,     0,     0,     0,     0,   134,     0,   189,     0,     0,
       0,     0,     0,     0,     0,   328,   195,     0,     0,     0,
     191,     0,   191,   329,   191,     0,     0,   192,     0,   192,
     134,   192,     0,     0,     0,     0,     0,   134,     0,   134,
      90,   221,   134,   193,     0,   193,     0,   193,     0,     0,
       0,   194,   417,   194,   330,   194,     0,     0,     0,   425,
     134,   426,     0,   245,   427,   134,     0,     0,     0,     0,
     190,   190,     0,   189,     0,   189,   256,   189,     0,   134,
       0,   134,   195,     0,   195,   265,   195,     0,     0,     0,
     323,     0,   323,     0,     0,     0,     0,     0,     0,   191,
     191,   465,     0,   466,     0,     0,   192,   192,     0,   221,
       0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
       0,   134,   193,   193,     0,     0,     0,   116,     0,     0,
     194,   194,   134,     0,   134,     0,     0,     0,     0,    23,
       0,     0,    93,   489,   118,    95,    96,   307,    98,    99,
     100,     0,   189,   189,   494,   308,   495,     0,     0,     0,
       0,   195,   195,     7,     8,     9,    10,    11,    12,    13,
       0,    14,    15,     0,     0,     0,     0,    17,    18,    19,
      20,     0,     0,    21,    22,     0,     0,     0,     0,    23,
     221,     0,     0,    86,    24,     0,     0,   210,     0,     0,
     221,     0,    25,   221,    26,     0,    27,     0,     0,   221,
      81,   216,     0,    30,    31,     0,     0,     0,     0,     0,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
     325,     0,   325,     0,    17,    18,    19,     0,     0,     0,
      21,     0,     0,     7,     0,     0,    23,     0,     0,     0,
     265,    24,     0,     0,     0,     0,     0,     0,     0,   326,
       0,   326,     0,     0,     0,     0,   327,   318,   327,    23,
       0,   319,    93,     0,   118,    95,    96,   307,    98,    99,
     100,     0,   328,     0,   328,   444,     0,     0,     0,     0,
     329,     0,   329,     0,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    15,    16,     0,
       0,     0,    17,    18,    19,    20,     0,    91,    21,    22,
       0,   330,     0,   330,    23,    92,     0,    93,    86,    94,
      95,    96,    97,    98,    99,   100,     0,    25,     0,    26,
       0,    27,     0,     0,     0,    81,     0,     0,    30,    31,
       7,     8,     9,    10,    11,    12,    13,     0,    14,    15,
       0,     0,     0,     0,    17,    18,    19,    20,     0,    91,
      21,    22,     0,     0,     0,     0,    23,    92,     0,    93,
      86,    94,    95,    96,    97,    98,    99,   100,     0,    25,
       0,    26,     0,    27,     0,     0,     0,    81,     0,     0,
      30,    31,     7,     8,     9,    10,    11,    12,    13,     0,
      14,    15,     0,     0,     0,     0,    17,    18,    19,    20,
       0,     0,    21,    22,     0,     0,     0,     0,    23,     0,
       0,     0,    86,    24,     0,     0,   210,     0,     0,     0,
       0,    25,     0,    26,     0,    27,     0,     0,     0,    81,
     280,     0,    30,    31,     7,     8,     9,    10,    11,    12,
      13,     0,    14,    15,     0,     0,     0,     0,    17,    18,
      19,    20,     0,     0,    21,    22,     0,     0,     0,     0,
      23,     0,     0,     0,    86,    24,     0,     0,   210,     0,
       0,     0,     0,    25,     0,    26,     0,    27,     0,     0,
       0,    81,   365,     0,    30,    31,     7,     8,     9,    10,
      11,    12,    13,     0,    14,    15,    16,     0,     0,     0,
      17,    18,    19,    20,     0,     0,    21,    22,     0,     0,
       0,     0,    23,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    26,     0,    27,
       0,     0,     0,    28,     0,    29,    30,    31,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    15,    16,     0,
       0,     0,    17,    18,    19,    20,     0,     0,    21,    22,
       0,     0,     0,     0,    23,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
       0,    27,     0,     0,     0,    81,     0,    29,    30,    31,
       7,     8,     9,    10,    11,    12,    13,     0,    14,    15,
       0,     0,     0,     0,    17,    18,    19,    20,     0,     0,
      21,    22,     0,     0,     0,     0,    23,     0,     0,     0,
       0,    24,     0,     0,   210,     0,     0,     0,     0,    25,
       0,    26,     0,    27,     0,     0,     0,    81,   211,     0,
      30,    31,     7,     8,     9,    10,    11,    12,    13,     0,
      14,    15,     0,     0,     0,     0,    17,    18,    19,    20,
       0,     0,    21,    22,     0,     0,     0,     0,    23,     0,
       0,     0,     0,    24,     0,     0,   210,     0,     0,     0,
       0,    25,     0,    26,     0,    27,     0,     0,     0,    81,
     340,     0,    30,    31,     7,     8,     9,    10,    11,    12,
      13,     0,    14,    15,     0,     0,     0,     0,    17,    18,
      19,    20,     0,     0,    21,    22,     0,     0,     0,     0,
      23,     0,     0,     0,    86,    24,     0,     0,   370,     0,
       0,     0,     0,    25,     0,    26,     0,    27,     0,     0,
       0,    81,     0,     0,    30,    31,     7,     8,     9,    10,
      11,    12,    13,     0,    14,    15,   391,     0,     0,     0,
      17,    18,    19,    20,     0,     0,    21,    22,     0,     0,
       0,     0,    23,   392,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    26,     0,    27,
       0,     0,     0,    81,     0,     0,    30,    31,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    15,     0,     0,
       0,     0,    17,    18,    19,    20,     0,     0,    21,    22,
       0,     0,     0,     0,    23,     0,     0,     0,    86,    24,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
       0,    27,     0,     0,     0,    81,     0,     0,    30,    31,
       7,     8,     9,    10,    11,    12,    13,     0,    14,    15,
       0,     0,     0,     0,    17,    18,    19,    20,     0,   162,
      21,    22,     0,     0,     0,     0,    23,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,    25,
       0,    26,     0,    27,     0,     0,     0,    81,     0,     0,
      30,    31,     7,     8,     9,    10,    11,    12,    13,     0,
      14,    15,     0,     0,     0,     0,    17,    18,    19,    20,
       0,   200,    21,    22,     0,     0,     0,     0,    23,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    26,     0,    27,     0,     0,     0,    81,
       0,     0,    30,    31,     7,     8,     9,    10,    11,    12,
      13,     0,    14,    15,     0,     0,     0,     0,    17,    18,
      19,    20,     0,   278,    21,    22,     0,     0,     0,     0,
      23,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,     0,    27,     0,     0,
       0,    81,     0,     0,    30,    31,     7,     8,     9,    10,
      11,    12,    13,     0,    14,    15,     0,     0,     0,     0,
      17,    18,    19,    20,     0,     0,    21,    22,     0,     0,
       0,     0,    23,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    26,     0,    27,
     353,     0,     0,    81,     0,     0,    30,    31,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    15,     0,     0,
       0,     0,    17,    18,    19,    20,     0,     0,    21,    22,
       0,     0,     0,     0,    23,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
       0,    27,   411,     0,     0,    81,     0,     0,    30,    31,
       7,     8,     9,    10,    11,    12,    13,     0,    14,    15,
       0,     0,     0,     0,    17,    18,    19,    20,     0,     0,
      21,    22,     0,     0,     0,     0,    23,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,    25,
       0,    26,     0,    27,     0,     0,     0,    81,     0,   515,
      30,    31,     7,     8,     9,    10,    11,    12,    13,     0,
      14,    15,     0,     0,     0,     0,    17,    18,    19,    20,
       0,     0,    21,    22,     0,     0,     0,     0,    23,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    26,     0,    27,     0,     0,     0,    81,
       0,     0,    30,    31,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,    17,    18,
      19,     0,     0,     0,    21,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,    24,     7,     8,     9,    10,
      11,    12,    13,     0,    14,     0,     0,     0,     0,     0,
      17,    18,    19,     0,     0,   319,    21,     0,     0,     0,
       0,     0,    23,     0,     0,     0,    86,    24,     0,     0,
       7,     8,     9,    10,    11,    12,    13,     0,    14,   179,
       0,     0,     0,   180,    17,    18,    19,     0,     0,     7,
      21,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,    24,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,     0,    23,     0,   180,    93,     0,
     118,    95,    96,   307,    98,    99,   100,     0,     0,    23,
       0,   521,    93,     0,   118,    95,    96,    97,    98,    99,
     100,    93,    86,   118,    95,    96,    97,    98,    99,   100,
     119,     0,     0,     0,     0,     0,     0,   176,    93,    86,
     118,    95,    96,    97,    98,    99,   100,   119
};

static const yytype_int16 yycheck[] =
{
       1,    85,   110,    56,    57,   130,    24,    89,    48,   131,
     222,   136,   333,   136,   180,   137,     3,    28,   313,     1,
      25,   179,    22,   105,    29,    11,    27,    28,   237,     3,
       3,   474,    24,    51,    52,    10,    26,    11,    13,    31,
      11,   199,    29,    21,    48,    49,    28,    48,   136,    49,
      16,   112,    44,   496,   497,    29,    29,   213,    50,    14,
      46,   217,   218,   103,    30,    31,    48,   149,    56,    57,
      81,    49,    46,    46,    24,    30,    94,    50,   203,   204,
      81,   204,    83,    84,    39,    24,    26,     0,    30,    90,
      91,    92,    21,    48,    44,   307,    46,    38,    38,   265,
      50,   267,   103,   185,    46,    44,    22,   108,    74,    75,
      39,   269,   152,    21,    30,   155,   204,   122,   179,   180,
      49,   103,   175,    31,   129,   281,   282,    14,    31,   450,
      24,    39,   257,    49,   135,    51,   258,   219,   199,   144,
     504,    49,   506,   131,   145,   206,   112,    50,    46,   137,
      44,   152,    39,   119,   155,   156,    50,   158,   211,    48,
     285,   162,   285,    22,   286,   166,   167,   168,   186,   257,
     171,   501,   294,   178,   140,   387,   237,   143,   344,   345,
     475,   263,    52,   513,   514,   341,   342,   175,    47,    23,
      49,   196,    48,    49,    44,     3,     4,   285,    24,   200,
      22,   283,   207,    30,   265,    31,   267,    47,   269,   210,
     366,   367,    49,   179,   180,    29,    30,   205,    44,    51,
     221,    29,    51,   211,    50,    47,    34,    49,   216,    24,
      49,   197,   198,   199,   484,   485,    31,   487,    35,    36,
     206,    51,    50,    40,   245,    48,    49,   248,   249,    44,
      13,    31,    15,    16,    31,   256,   222,   507,   112,    48,
      49,   511,    48,    49,   230,    46,   232,    41,    44,   235,
     258,   237,    21,    21,   275,    47,   277,   278,   400,   284,
      51,    56,    57,   344,   345,    51,   368,   340,   289,   371,
     502,    49,   280,    49,   295,   504,    46,   506,   286,   265,
      47,   267,     3,   269,   322,    49,   294,    49,    47,    45,
       4,     5,     6,    51,    49,    49,    45,   318,    30,    22,
      30,    47,    30,    24,    49,   179,   180,    28,    29,    23,
      31,   332,   333,    51,   335,    31,    47,     4,   339,    41,
      47,   307,   395,    44,    33,   199,   430,   431,    30,    50,
     355,    51,   340,    51,    51,    47,   131,   358,    51,   441,
      51,    44,   137,    44,    48,    39,   332,   333,    31,   370,
       2,    22,     4,    31,    47,    47,    31,   365,   344,   345,
      51,    51,    51,   237,   372,    51,   374,   471,   472,   377,
     380,   381,   500,    35,    44,    44,    44,   398,   112,    31,
     175,   406,   407,    49,    51,    45,    45,   395,   413,    31,
      51,   265,   400,   267,    51,   269,    31,    31,    47,   424,
     528,   387,    31,    51,    51,   391,   414,   112,   416,   395,
     205,    51,    28,    31,   112,    48,   211,    31,   428,   429,
      31,   216,    45,   504,    52,   506,   447,   448,    45,   450,
     112,   452,    45,    45,     5,   460,   461,   462,   112,   312,
     432,   518,    43,   216,    28,   179,   180,   135,   456,   304,
     235,   481,   438,    74,   384,   477,   171,   443,   143,   467,
     112,   469,   483,   258,   450,   199,    -1,   488,   493,   112,
     344,   345,    27,    28,   179,   180,   345,    -1,   499,    -1,
     501,   179,   180,    -1,    -1,   280,    -1,   139,    -1,    -1,
     515,   286,   513,   514,   199,    -1,    -1,   179,   180,   294,
      -1,   199,    -1,   237,    -1,   179,   180,   280,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   502,   199,   504,    -1,
     506,    -1,    -1,    -1,    -1,   199,    81,   179,   180,    -1,
      -1,   265,   237,   267,    -1,   269,   179,   180,    -1,   237,
      -1,    -1,    -1,    -1,    -1,   340,    -1,   199,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   237,   199,    -1,    -1,    -1,
     265,    -1,   267,   237,   269,    -1,    -1,   265,    -1,   267,
     365,   269,    -1,    -1,    -1,    -1,    -1,   372,    -1,   374,
     135,   136,   377,   265,    -1,   267,    -1,   269,    -1,    -1,
      -1,   265,   365,   267,   237,   269,    -1,    -1,    -1,   372,
     395,   374,    -1,   158,   377,   400,    -1,    -1,    -1,    -1,
     344,   345,    -1,   265,    -1,   267,   171,   269,    -1,   414,
      -1,   416,   265,    -1,   267,   180,   269,    -1,    -1,    -1,
     504,    -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,   344,
     345,   414,    -1,   416,    -1,    -1,   344,   345,    -1,   204,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   456,   344,   345,    -1,    -1,    -1,   319,    -1,    -1,
     344,   345,   467,    -1,   469,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    32,   456,    34,    35,    36,    37,    38,    39,
      40,    -1,   344,   345,   467,    45,   469,    -1,    -1,    -1,
      -1,   344,   345,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    29,
     285,    -1,    -1,    33,    34,    -1,    -1,    37,    -1,    -1,
     295,    -1,    42,   298,    44,    -1,    46,    -1,    -1,   304,
      50,    51,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
     504,    -1,   506,    -1,    17,    18,    19,    -1,    -1,    -1,
      23,    -1,    -1,     3,    -1,    -1,    29,    -1,    -1,    -1,
     345,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   504,
      -1,   506,    -1,    -1,    -1,    -1,   504,    50,   506,    29,
      -1,    54,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    -1,   504,    -1,   506,    45,    -1,    -1,    -1,    -1,
     504,    -1,   506,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    22,    23,    24,
      -1,   504,    -1,   506,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    -1,    44,
      -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,    54,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      -1,    44,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,
      53,    54,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    33,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    42,    -1,    44,    -1,    46,    -1,    -1,    -1,    50,
      51,    -1,    53,    54,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    42,    -1,    44,    -1,    46,    -1,    -1,
      -1,    50,    51,    -1,    53,    54,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      -1,    46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    46,    -1,    -1,    -1,    50,    51,    -1,
      53,    54,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    42,    -1,    44,    -1,    46,    -1,    -1,    -1,    50,
      51,    -1,    53,    54,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    42,    -1,    44,    -1,    46,    -1,    -1,
      -1,    50,    -1,    -1,    53,    54,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    29,    30,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      -1,    -1,    -1,    50,    -1,    -1,    53,    54,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,    54,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,
      53,    54,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    -1,    46,    -1,    -1,    -1,    50,
      -1,    -1,    53,    54,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    44,    -1,    46,    -1,    -1,
      -1,    50,    -1,    -1,    53,    54,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      47,    -1,    -1,    50,    -1,    -1,    53,    54,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      -1,    46,    47,    -1,    -1,    50,    -1,    -1,    53,    54,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    46,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    -1,    46,    -1,    -1,    -1,    50,
      -1,    -1,    53,    54,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    34,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    -1,    54,    23,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    33,    34,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    46,
      -1,    -1,    -1,    50,    17,    18,    19,    -1,    -1,     3,
      23,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    34,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    29,    -1,    50,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    29,
      -1,    45,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    48,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    38,    56,    57,    58,    60,     3,     4,     5,
       6,     7,     8,     9,    11,    12,    13,    17,    18,    19,
      20,    23,    24,    29,    34,    42,    44,    46,    50,    52,
      53,    54,    70,    71,    75,    79,    80,    85,    86,    87,
      88,    91,    93,    94,   105,   106,   107,   109,   111,   112,
     131,   137,   138,   139,   140,   141,   142,   143,   145,   146,
     147,   148,   149,   150,   151,   155,   143,     0,    59,   143,
      60,   120,   121,   142,    14,    39,   113,     4,     5,     6,
     140,    50,    91,    30,    48,   113,    33,    94,    95,    96,
     153,    22,    30,    32,    34,    35,    36,    37,    38,    39,
      40,    89,    94,   111,   122,   123,   124,   152,   153,   154,
      91,   142,    46,   102,   103,   142,   143,    46,    34,    41,
     153,   154,    48,    67,    75,    70,   112,   140,   140,    31,
      50,    76,    77,    80,   105,    46,    50,    76,    44,    30,
      46,    62,    48,    49,    31,    50,   119,   120,   116,   117,
     118,   142,   110,    94,    94,   110,    30,    47,    49,    68,
      94,    94,    22,    90,    94,    51,    22,    30,    49,    51,
      70,    49,    68,    51,    94,    51,    48,    67,    31,    46,
      50,   108,   127,   132,   133,   134,   137,   141,   142,   143,
     145,   146,   147,   148,   149,   150,    31,    21,    49,    46,
      22,    94,    97,    46,    50,   142,    41,    92,    91,    91,
      37,    51,    97,    98,    77,    95,    51,    97,    98,    99,
     100,   153,    65,   143,    61,   142,    44,   121,    91,    94,
      21,    48,    21,    39,    49,    68,    31,    69,    70,   112,
      81,    82,    70,    94,    94,   153,    94,    51,    22,    49,
      94,    94,    94,    51,    94,   122,   153,    50,    76,    91,
     133,   108,   128,   129,   130,   153,    47,    49,    68,    46,
      91,   142,   142,   133,    94,    22,    47,    49,    22,    97,
      51,    97,    98,    99,    31,    50,    76,    78,    34,    50,
     137,   142,    91,    94,    76,    49,    68,   101,    49,   101,
      47,    78,   101,   101,    49,    68,    94,    37,    45,    66,
     142,   152,    47,    63,    51,   142,   142,   118,    50,    54,
     104,   131,   137,   141,   142,   145,   146,   147,   148,   149,
     150,    45,    49,    49,    45,    30,    94,    94,    94,    22,
      51,    97,    98,    47,    30,    49,    68,    51,   108,   108,
     133,    47,    47,    47,    94,    31,    94,    94,    22,    47,
      78,   101,   101,    68,    91,    51,    97,    98,    99,    94,
      37,    99,    51,    51,    51,    51,   100,    51,   142,   152,
      44,    44,    62,    13,    15,    16,    64,    65,    48,    39,
      94,    13,    30,    84,    94,   142,    84,    94,    22,    94,
      76,   101,   101,   108,   128,    47,    31,    31,    47,    91,
      47,    47,    94,    31,    51,    51,    51,    78,   101,   101,
      68,    51,    94,    68,    31,    78,    78,    78,    44,    44,
     113,   113,    44,    35,    36,    40,   125,   126,   135,   125,
      35,   114,   115,   136,    45,    51,   142,    29,    30,    45,
      49,    83,    28,   142,    45,    94,    51,    51,    91,    91,
      31,    31,    31,    47,    91,    78,    78,    51,    51,    51,
      91,   113,   113,   110,   110,    63,    48,    49,   142,    48,
      48,    68,   142,    31,    94,    94,    84,    94,    28,    78,
      91,    91,    91,    31,    78,    78,   110,   110,    10,    73,
     144,    73,    65,   126,    31,   115,    31,    94,    83,    83,
      83,    94,    91,    73,    73,    52,    72,    74,    94,    67,
      72,    45,   104,   104,    83,    83,    72,    72,    91,    45,
      74,    45,    45,    45,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    56,    57,    57,    58,    58,    59,
      59,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      64,    65,    65,    66,    66,    66,    66,    67,    67,    68,
      68,    69,    69,    70,    70,    71,    71,    71,    72,    72,
      73,    73,    74,    74,    75,    75,    76,    76,    77,    77,
      78,    78,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    81,    80,    82,    80,    83,
      83,    84,    84,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    86,    86,    86,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    89,    89,    89,    89,    89,    90,
      90,    90,    90,    90,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    92,
      92,    92,    93,    93,    94,    95,    95,    96,    96,    96,
      96,    96,    96,    97,    97,    98,    98,    99,    99,   100,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   105,   106,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   113,   113,   113,   113,   113,
     114,   114,   115,   116,   116,   117,   117,   118,   118,   118,
     119,   119,   120,   120,   121,   121,   121,   122,   122,   123,
     123,   124,   124,   125,   125,   126,   126,   127,   128,   128,
     129,   129,   130,   130,   131,   131,   132,   132,   133,   133,
     134,   134,   135,   135,   135,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   141,   141,   141,   141,   141,
     141,   142,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   152,   152,   152,   152,   152,   152,   152,
     153,   154,   154,   155
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     0,     2,     1,     2,     6,
       9,     5,     0,     1,     0,     2,     0,     2,     3,     3,
       3,     0,     2,     7,     8,     7,     8,     0,     1,     0,
       1,     0,     1,     1,     2,     4,     2,     1,     1,     2,
       0,     2,     0,     3,     0,     3,     1,     2,     1,     1,
       0,     1,     2,     4,     4,     6,     6,     8,     5,     7,
       4,     2,     4,     6,     6,     5,     5,     7,     8,     7,
       6,     6,     8,     7,     4,     0,     7,     0,     7,     0,
       2,     4,     5,     5,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     3,     2,     3,     3,     4,     3,     1,
       4,     1,     5,     5,     6,     7,     7,     8,     6,     6,
       7,     8,     8,     9,     2,     2,     3,     5,     4,     2,
       2,     3,     4,     5,     1,     1,     1,     1,     5,     2,
       4,     3,     4,     5,     7,     4,     6,     7,     0,     2,
       2,     4,     1,     3,     2,     0,     2,     1,     3,     2,
       3,     4,     5,     1,     3,     2,     4,     1,     3,     2,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     5,
       0,     2,     1,     2,     3,     0,     3,     5,     3,     5,
       1,     3,     4,     0,     1,     1,     3,     1,     3,     5,
       0,     1,     1,     3,     1,     3,     4,     3,     2,     1,
       3,     0,     2,     1,     3,     2,     4,     3,     3,     2,
       1,     3,     0,     2,     4,     5,     3,     4,     0,     2,
       1,     3,     0,     1,     1,     1,     0,     1,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
            /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
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
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

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
| yyreduce -- Do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 40 "lang11d.y" /* yacc.c:1661  */
    { gRootParseNode = (PyrParseNode*)(yyvsp[0]); gParserResult = 1; }
#line 1926 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 3:
#line 42 "lang11d.y" /* yacc.c:1661  */
    { gRootParseNode = (PyrParseNode*)(yyvsp[0]); gParserResult = 1; }
#line 1932 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 4:
#line 44 "lang11d.y" /* yacc.c:1661  */
    { gRootParseNode = (PyrParseNode*)(yyvsp[0]); gParserResult = 2; }
#line 1938 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 5:
#line 47 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 1944 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 6:
#line 49 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 1950 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 8:
#line 54 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 1956 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 9:
#line 58 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrClassNode((PyrSlotNode*)(yyvsp[-5]), (PyrSlotNode*)(yyvsp[-4]),
					(PyrVarListNode*)(yyvsp[-2]), (PyrMethodNode*)(yyvsp[-1]), 0);
				}
#line 1964 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 10:
#line 62 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrClassNode((PyrSlotNode*)(yyvsp[-8]), (PyrSlotNode*)(yyvsp[-4]),
					(PyrVarListNode*)(yyvsp[-2]), (PyrMethodNode*)(yyvsp[-1]),
					(PyrSlotNode*)(yyvsp[-6]));
				}
#line 1973 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 11:
#line 69 "lang11d.y" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)newPyrClassExtNode((PyrSlotNode*)(yyvsp[-3]), (PyrMethodNode*)(yyvsp[-1]));
				}
#line 1981 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 12:
#line 74 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 1987 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 14:
#line 78 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 1993 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 15:
#line 80 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[0]); }
#line 1999 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 16:
#line 83 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 2005 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 17:
#line 85 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 2011 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 18:
#line 89 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarListNode((PyrVarDefNode*)(yyvsp[-1]), varClass); }
#line 2017 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 19:
#line 91 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarListNode((PyrVarDefNode*)(yyvsp[-1]), varInst); }
#line 2023 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 20:
#line 93 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarListNode((PyrVarDefNode*)(yyvsp[-1]), varConst); }
#line 2029 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 21:
#line 96 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 2035 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 22:
#line 98 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 2041 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 23:
#line 102 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMethodNode((PyrSlotNode*)(yyvsp[-6]), (PyrSlotNode*)(yyvsp[-2]),
					(PyrArgListNode*)(yyvsp[-4]), (PyrVarListNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1]), 0); }
#line 2048 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 24:
#line 105 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMethodNode((PyrSlotNode*)(yyvsp[-6]), (PyrSlotNode*)(yyvsp[-2]),
					(PyrArgListNode*)(yyvsp[-4]), (PyrVarListNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1]), 1); }
#line 2055 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 25:
#line 108 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMethodNode((PyrSlotNode*)(yyvsp[-6]), (PyrSlotNode*)(yyvsp[-2]),
					(PyrArgListNode*)(yyvsp[-4]), (PyrVarListNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1]), 0); }
#line 2062 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 26:
#line 111 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMethodNode((PyrSlotNode*)(yyvsp[-6]), (PyrSlotNode*)(yyvsp[-2]),
					(PyrArgListNode*)(yyvsp[-4]), (PyrVarListNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1]), 1); }
#line 2069 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 34:
#line 129 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrDropNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 2075 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 35:
#line 133 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockNode(NULL, (PyrVarListNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[-1]), false); }
#line 2081 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 36:
#line 135 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockNode(NULL, (PyrVarListNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0]), false); }
#line 2087 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 37:
#line 137 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockNode(NULL, NULL, (PyrParseNode*)(yyvsp[0]), false); }
#line 2093 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 39:
#line 142 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrDropNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 2099 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 40:
#line 145 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 2105 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 41:
#line 147 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 2111 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 42:
#line 151 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrReturnNode(NULL); }
#line 2117 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 43:
#line 153 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrReturnNode((PyrParseNode*)(yyvsp[-1])); }
#line 2123 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 44:
#line 157 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockReturnNode(); }
#line 2129 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 45:
#line 159 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrReturnNode((PyrParseNode*)(yyvsp[-1])); }
#line 2135 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 47:
#line 164 "lang11d.y" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0]));
				}
#line 2143 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 50:
#line 173 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 2149 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 52:
#line 178 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0]), 0, 0);
			}
#line 2157 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 53:
#line 182 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), 0, 0);
			}
#line 2165 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 54:
#line 186 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-3]), NULL, NULL, (PyrParseNode*)(yyvsp[0]));
			}
#line 2173 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 55:
#line 190 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-5]), (PyrParseNode*)(yyvsp[-3]),
						(PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2182 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 56:
#line 195 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-4]), NULL, NULL, (PyrParseNode*)(yyvsp[0]));
			}
#line 2190 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 57:
#line 199 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-6]), (PyrParseNode*)(yyvsp[-3]),
						(PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2199 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 58:
#line 204 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;
				PyrParseNode* args;

				if (isSuperObjNode((PyrParseNode*)(yyvsp[-2]))) {
					SetRaw(&((PyrPushNameNode*)(yyvsp[-2]))->mSlot, s_this);
					SetSymbol(&slot, s_superPerformList);
				} else {
					SetSymbol(&slot, s_performList);
				}
				selectornode = newPyrSlotNode(&slot);
				args = linkAfterHead(
					(PyrParseNode*)(yyvsp[-2]),
					newPyrPushLitNode((PyrSlotNode*)(yyvsp[-4]), NULL));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, (PyrParseNode*)(yyvsp[-1]), 0);
			}
#line 2221 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 59:
#line 222 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;
				PyrParseNode* args;

				SetSymbol(&slot, s_performList);
				selectornode = newPyrSlotNode(&slot);
				args = linkAfterHead(
					(PyrParseNode*)(yyvsp[-2]),
					newPyrPushLitNode((PyrSlotNode*)(yyvsp[-5]), NULL));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, (PyrParseNode*)(yyvsp[-1]), 0);
			}
#line 2238 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 60:
#line 235 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrDynListNode((PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1])); }
#line 2244 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 61:
#line 237 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;
				PyrParseNode* args;

				SetSymbol(&slot, s_new);
				selectornode = newPyrSlotNode(&slot);
				args = (PyrParseNode*)newPyrPushNameNode((PyrSlotNode*)(yyvsp[-1]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, (PyrParseNode*)(yyvsp[0]));
			}
#line 2259 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 62:
#line 248 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;
				PyrParseNode* args;

				SetSymbol(&slot, s_new);
				selectornode = newPyrSlotNode(&slot);
				args = (PyrParseNode*)newPyrPushNameNode((PyrSlotNode*)(yyvsp[-3]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, NULL, (PyrParseNode*)(yyvsp[0]));
			}
#line 2274 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 63:
#line 259 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;
				PyrParseNode* args;

				SetSymbol(&slot, s_new);
				selectornode = newPyrSlotNode(&slot);
				args = (PyrParseNode*)newPyrPushNameNode((PyrSlotNode*)(yyvsp[-5]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, (PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2289 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 64:
#line 270 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;
				PyrParseNode* args;

				SetSymbol(&slot, s_new);
				selectornode = newPyrSlotNode(&slot);
				args = linkNextNode(
					(PyrParseNode*)newPyrPushNameNode((PyrSlotNode*)(yyvsp[-5])),
					(PyrParseNode*)(yyvsp[-3]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, (PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2306 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 65:
#line 283 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode, *selectornode2;
				PyrSlot slot, slot2;
				PyrParseNode* args;

				if (isSuperObjNode((PyrParseNode*)(yyvsp[-4]))) {
					SetRaw(&((PyrPushNameNode*)(yyvsp[-4]))->mSlot, s_this);
					SetSymbol(&slot, s_superPerformList);
				} else {
					SetSymbol(&slot, s_performList);
				}
				SetSymbol(&slot2, s_new);
				selectornode = newPyrSlotNode(&slot);
				selectornode2 = newPyrSlotNode(&slot2);
				args = linkNextNode(
					(PyrParseNode*)newPyrPushNameNode((PyrSlotNode*)(yyvsp[-4])),
					newPyrPushLitNode(selectornode2, NULL));
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[-2]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, (PyrParseNode*)(yyvsp[0]), 0);
			}
#line 2331 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 66:
#line 304 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;

				SetSymbol(&slot, s_value);
				selectornode = newPyrSlotNode(&slot);
				(yyval) = (intptr_t)newPyrCallNode(selectornode, (PyrParseNode*)(yyvsp[-4]), NULL, (PyrParseNode*)(yyvsp[0]));
			}
#line 2344 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 67:
#line 313 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;

				SetSymbol(&slot, s_value);
				selectornode = newPyrSlotNode(&slot);
				(yyval) = (intptr_t)newPyrCallNode(selectornode, (PyrParseNode*)(yyvsp[-6]), (PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2357 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 68:
#line 322 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-5]), (PyrParseNode*)(yyvsp[-7]),
					(PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2366 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 69:
#line 327 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;
				PyrParseNode* args;

				SetSymbol(&slot, s_value);
				selectornode = newPyrSlotNode(&slot);
				args = linkNextNode(
					(PyrParseNode*)(yyvsp[-6]),
					(PyrParseNode*)(yyvsp[-3]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, (PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2383 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 70:
#line 340 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot, slot2;
				PyrParseNode* args;

				if (isSuperObjNode((PyrParseNode*)(yyvsp[-5]))) {
					SetRaw(&((PyrPushNameNode*)(yyvsp[-5]))->mSlot, s_this);
					SetSymbol(&slot, s_superPerformList);
				} else {
					SetSymbol(&slot, s_performList);
				}
				SetSymbol(&slot2, s_value);
				selectornode = newPyrSlotNode(&slot);
				args = linkNextNode(
					(PyrParseNode*)(yyvsp[-5]),
					newPyrPushLitNode(newPyrSlotNode(&slot2), NULL));
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[-2]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, (PyrParseNode*)(yyvsp[-1]), 0);
			}
#line 2407 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 71:
#line 360 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-5]), NULL, (PyrParseNode*)(yyvsp[0]));
			}
#line 2415 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 72:
#line 364 "lang11d.y" /* yacc.c:1661  */
    {
				PyrParseNode* args;
				args = linkNextNode((PyrParseNode*)(yyvsp[-7]), (PyrParseNode*)(yyvsp[-3]));
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-5]), args, (PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2425 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 73:
#line 370 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;
				PyrParseNode* args;

				if (isSuperObjNode((PyrParseNode*)(yyvsp[-6]))) {
					SetRaw(&((PyrPushNameNode*)(yyvsp[-6]))->mSlot, s_this);
					SetSymbol(&slot, s_superPerformList);
				} else {
					SetSymbol(&slot, s_performList);
				}
				selectornode = newPyrSlotNode(&slot);

				args = linkNextNode((PyrParseNode*)(yyvsp[-6]), newPyrPushLitNode((PyrSlotNode*)(yyvsp[-4]), NULL));
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[-2]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, (PyrParseNode*)(yyvsp[-1]), 0);
			}
#line 2447 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 74:
#line 388 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[-3]), 0, (PyrParseNode*)(yyvsp[0]));
			}
#line 2455 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 75:
#line 393 "lang11d.y" /* yacc.c:1661  */
    { pushls(&generatorStack, (yyvsp[0])); pushls(&generatorStack, 1); }
#line 2461 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 76:
#line 394 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlot slot;
				SetSymbol(&slot, getsym("r"));
				PyrSlotNode* selectornode = newPyrSlotNode(&slot);

				PyrParseNode *block = (PyrParseNode*)newPyrBlockNode(0, 0, (PyrParseNode*)(yyvsp[-1]), false);
				PyrParseNode *blocklit = (PyrParseNode*)newPyrPushLitNode(NULL, block);
				(yyval) = (intptr_t)newPyrCallNode(selectornode, (PyrParseNode*)blocklit, 0, 0);
			}
#line 2475 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 77:
#line 403 "lang11d.y" /* yacc.c:1661  */
    { pushls(&generatorStack, (yyvsp[0])); pushls(&generatorStack, 2); }
#line 2481 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 78:
#line 404 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (yyvsp[-1]);
			}
#line 2489 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 79:
#line 410 "lang11d.y" /* yacc.c:1661  */
    {
					// innermost part
					int action = popls(&generatorStack);
					PyrParseNode* expr = (PyrParseNode*)popls(&generatorStack);

					switch (action)
					{
						case 1 :
						{
							PyrSlot slot;
							SetSymbol(&slot, getsym("yield"));
							PyrSlotNode* selectornode = newPyrSlotNode(&slot);

							(yyval) = (intptr_t)newPyrCallNode(selectornode, expr, 0, 0);
						} break;
						case 2 :
						{
							(yyval) = (intptr_t)expr;
						} break;
					}
				}
#line 2515 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 80:
#line 432 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[0]); }
#line 2521 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 81:
#line 436 "lang11d.y" /* yacc.c:1661  */
    {
				// later should check if exprseq is a series and optimize it to for loop
				PyrParseNode *exprseq = (PyrParseNode*)(yyvsp[-1]);
				if (exprseq->mClassno == pn_CallNode) {
					PyrCallNode *callnode = (PyrCallNode*)exprseq;
					if (slotRawSymbol(&callnode->mSelector->mSlot) == s_series)
					{
						SetSymbol(&callnode->mSelector->mSlot, getsym("forSeries"));

						PyrVarDefNode* var = newPyrVarDefNode((PyrSlotNode*)(yyvsp[-3]), NULL, 0);
						PyrArgListNode* args = newPyrArgListNode(var, NULL);
						PyrParseNode *block = (PyrParseNode*)newPyrBlockNode(args, 0, (PyrParseNode*)(yyvsp[0]), false);
						PyrParseNode *blocklit = (PyrParseNode*)newPyrPushLitNode(NULL, block);

						callnode->mArglist = linkNextNode(callnode->mArglist, blocklit);
						(yyval) = (intptr_t)callnode;

					} else goto notoptimized1;
				} else {
					notoptimized1:
					PyrSlot slot;
					SetSymbol(&slot, getsym("do"));
					PyrSlotNode* selectornode = newPyrSlotNode(&slot);

					PyrVarDefNode* var = newPyrVarDefNode((PyrSlotNode*)(yyvsp[-3]), NULL, 0);
					PyrArgListNode* args = newPyrArgListNode(var, NULL);
					PyrParseNode *block = (PyrParseNode*)newPyrBlockNode(args, 0, (PyrParseNode*)(yyvsp[0]), false);
					PyrParseNode *blocklit = (PyrParseNode*)newPyrPushLitNode(NULL, block);

					PyrParseNode* args2 = linkNextNode(exprseq, blocklit);
					(yyval) = (intptr_t)newPyrCallNode(selectornode, args2, 0, 0);
				}
			}
#line 2559 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 82:
#line 470 "lang11d.y" /* yacc.c:1661  */
    {
				// later should check if exprseq is a series and optimize it to for loop
				PyrParseNode *exprseq = (PyrParseNode*)(yyvsp[-1]);
				if (exprseq->mClassno == pn_CallNode) {
					PyrCallNode *callnode = (PyrCallNode*)exprseq;
					if (slotRawSymbol(&callnode->mSelector->mSlot) == s_series)
					{
						SetSymbol(&callnode->mSelector->mSlot, getsym("forSeries"));

						PyrVarDefNode* var1 = newPyrVarDefNode((PyrSlotNode*)(yyvsp[-4]), NULL, 0);
						PyrVarDefNode* var2 = newPyrVarDefNode((PyrSlotNode*)(yyvsp[-3]), NULL, 0);
						PyrVarDefNode* vars = (PyrVarDefNode*)linkNextNode(var1, var2);
						PyrArgListNode* args = newPyrArgListNode(vars, NULL);
						PyrParseNode *block = (PyrParseNode*)newPyrBlockNode(args, 0, (PyrParseNode*)(yyvsp[0]), false);
						PyrParseNode *blocklit = (PyrParseNode*)newPyrPushLitNode(NULL, block);

						callnode->mArglist = linkNextNode(callnode->mArglist, blocklit);
						(yyval) = (intptr_t)callnode;

					} else goto notoptimized2;
				} else {
					notoptimized2:
					PyrSlot slot;
					SetSymbol(&slot, getsym("do"));
					PyrSlotNode* selectornode = newPyrSlotNode(&slot);

					PyrVarDefNode* var1 = newPyrVarDefNode((PyrSlotNode*)(yyvsp[-4]), NULL, 0);
					PyrVarDefNode* var2 = newPyrVarDefNode((PyrSlotNode*)(yyvsp[-3]), NULL, 0);
					PyrVarDefNode* vars = (PyrVarDefNode*)linkNextNode(var1, var2);
					PyrArgListNode* args = newPyrArgListNode(vars, NULL);
					PyrParseNode *block = (PyrParseNode*)newPyrBlockNode(args, 0, (PyrParseNode*)(yyvsp[0]), false);
					PyrParseNode *blocklit = (PyrParseNode*)newPyrPushLitNode(NULL, block);

					PyrParseNode* args2 = linkNextNode(exprseq, blocklit);
					(yyval) = (intptr_t)newPyrCallNode(selectornode, args2, 0, 0);
				}
			}
#line 2601 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 83:
#line 508 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlot slot;
				SetSymbol(&slot, s_value);
				PyrSlotNode* selectornode = newPyrSlotNode(&slot);

				PyrVarDefNode* var = newPyrVarDefNode((PyrSlotNode*)(yyvsp[-3]), NULL, 0);
				PyrArgListNode* args = newPyrArgListNode(var, NULL);
				PyrParseNode *block = (PyrParseNode*)newPyrBlockNode(args, 0, (PyrParseNode*)(yyvsp[0]), false);
				PyrParseNode *blocklit = (PyrParseNode*)newPyrPushLitNode(NULL, block);
				PyrParseNode* args2 = (PyrParseNode*)linkNextNode(blocklit, (PyrParseNode*)(yyvsp[-1]));

				(yyval) = (intptr_t)newPyrCallNode(selectornode, args2, 0, 0);
			}
#line 2619 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 84:
#line 522 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlot slot;
				SetSymbol(&slot, getsym("if"));
				PyrSlotNode* selectornode = newPyrSlotNode(&slot);
				PyrParseNode *block = (PyrParseNode*)newPyrBlockNode(0, 0, (PyrParseNode*)(yyvsp[0]), false);
				PyrParseNode *blocklit = (PyrParseNode*)newPyrPushLitNode(NULL, block);
				PyrParseNode* args2 = (PyrParseNode*)linkNextNode((PyrParseNode*)(yyvsp[-1]), blocklit);

				(yyval) = (intptr_t)newPyrCallNode(selectornode, args2, 0, 0);
			}
#line 2634 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 85:
#line 533 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrDropNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2642 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 86:
#line 537 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlot slot;
				SetSymbol(&slot, getsym("alwaysYield"));
				PyrSlotNode* selectornode1 = newPyrSlotNode(&slot);

				SetSymbol(&slot, getsym("if"));
				PyrSlotNode* selectornode2 = newPyrSlotNode(&slot);

				SetNil(&slot);
				PyrParseNode *pushnil = (PyrParseNode*)newPyrPushLitNode(newPyrSlotNode(&slot), NULL);

				PyrParseNode *yieldNil = (PyrParseNode*)newPyrCallNode(selectornode1, pushnil, 0, 0);

				PyrParseNode *block1 = (PyrParseNode*)newPyrBlockNode(0, 0, yieldNil, false);
				PyrParseNode *blocklit1 = (PyrParseNode*)newPyrPushLitNode(NULL, block1);
				PyrParseNode *block2 = (PyrParseNode*)newPyrBlockNode(0, 0, (PyrParseNode*)(yyvsp[0]), false);
				PyrParseNode *blocklit2 = (PyrParseNode*)newPyrPushLitNode(NULL, block2);
				PyrParseNode* args2 = (PyrParseNode*)linkNextNode((PyrParseNode*)(yyvsp[-1]), blocklit2);
				PyrParseNode* args3 = (PyrParseNode*)linkNextNode(args2, blocklit1);

				(yyval) = (intptr_t)newPyrCallNode(selectornode2, args3, 0, 0);
			}
#line 2669 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 93:
#line 568 "lang11d.y" /* yacc.c:1661  */
    {
				PyrParseNode* node = (PyrParseNode*)(yyvsp[-1]);
				node->mParens = 1;
				(yyval) = (yyvsp[-1]);
			}
#line 2679 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 94:
#line 574 "lang11d.y" /* yacc.c:1661  */
    {
				PyrParseNode* argnode;
				PyrSlotNode* selectornode;
				PyrSlot slot;
				argnode = (PyrParseNode*)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL);
				SetSymbol(&slot, s_envirGet);
				selectornode = newPyrSlotNode(&slot);
				(yyval) = (intptr_t)newPyrCallNode(selectornode, argnode, 0, 0);
			}
#line 2693 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 95:
#line 584 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrDynListNode(0, (PyrParseNode*)(yyvsp[-1])); }
#line 2699 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 96:
#line 586 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 2705 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 97:
#line 588 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 2711 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 98:
#line 590 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrDynDictNode((PyrParseNode*)(yyvsp[-1])); }
#line 2717 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 99:
#line 592 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushNameNode((PyrSlotNode*)(yyvsp[0])); }
#line 2723 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 100:
#line 594 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;
				PyrParseNode* args;

				SetSymbol(&slot, s_at);
				selectornode = newPyrSlotNode(&slot);
				args = linkNextNode(
					(PyrParseNode*)(yyvsp[-3]),
					(PyrParseNode*)(yyvsp[-1]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 2740 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 102:
#line 610 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode1, *nilnode2;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				int arglen = nodeListLength((PyrParseNode*)(yyvsp[-2]));
				if (arglen > 2) {
					error("ArrayedCollection subrange has too many arguments.\n");
					nodePostErrorLine((PyrParseNode*)(yyvsp[-2]));
					compileErrors++;
				}

				SetNil(&nilSlot);
				nilnode2 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);

				SetSymbol(&selectorSlot, s_copyseries);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-4]), (PyrParseNode*)(yyvsp[-2]));
				if (arglen < 2) {
					nilnode1 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
					args = linkNextNode(args, nilnode1);
				}
				args = linkNextNode(args, nilnode2);
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 2771 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 103:
#line 637 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode1, *nilnode2;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				SetNil(&nilSlot);
				nilnode1 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
				nilnode2 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);

				SetSymbol(&selectorSlot, s_copyseries);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-4]), nilnode1);
				args = linkNextNode(args, nilnode2);
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[-1]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 2793 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 104:
#line 655 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode1;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				int arglen = nodeListLength((PyrParseNode*)(yyvsp[-3]));
				if (arglen > 2) {
					error("ArrayedCollection subrange has too many arguments.\n");
					nodePostErrorLine((PyrParseNode*)(yyvsp[-3]));
					compileErrors++;
				}

				SetSymbol(&selectorSlot, s_copyseries);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-5]), (PyrParseNode*)(yyvsp[-3]));
				if (arglen < 2) {
					SetNil(&nilSlot);
					nilnode1 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
					args = linkNextNode(args, nilnode1);
				}
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[-1]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 2822 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 105:
#line 682 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode1, *nilnode2;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				int arglen = nodeListLength((PyrParseNode*)(yyvsp[-4]));
				if (arglen > 2) {
					error("ArrayedCollection subrange has too many arguments.\n");
					nodePostErrorLine((PyrParseNode*)(yyvsp[-4]));
					compileErrors++;
				}

				SetNil(&nilSlot);
				nilnode2 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);

				SetSymbol(&selectorSlot, s_putseries);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-6]), (PyrParseNode*)(yyvsp[-4]));
				if (arglen < 2) {
					nilnode1 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
					args = linkNextNode(args, nilnode1);
				}
				args = linkNextNode(args, nilnode2);
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[0]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 2854 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 106:
#line 710 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode1, *nilnode2;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				SetNil(&nilSlot);
				nilnode1 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
				nilnode2 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);

				SetSymbol(&selectorSlot, s_putseries);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-6]), nilnode1);
				args = linkNextNode(args, nilnode2);
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[-3]));
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[0]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 2877 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 107:
#line 729 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode1;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				int arglen = nodeListLength((PyrParseNode*)(yyvsp[-5]));
				if (arglen > 2) {
					error("ArrayedCollection subrange has too many arguments.\n");
					nodePostErrorLine((PyrParseNode*)(yyvsp[-5]));
					compileErrors++;
				}

				SetSymbol(&selectorSlot, s_putseries);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-7]), (PyrParseNode*)(yyvsp[-5]));
				if (arglen < 2) {
					SetNil(&nilSlot);
					nilnode1 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
					args = linkNextNode(args, nilnode1);
				}
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[-3]));
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[0]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 2907 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 108:
#line 757 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode1, *nilnode2;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				int arglen = nodeListLength((PyrParseNode*)(yyvsp[-2]));
				if (arglen > 2) {
					error("ArrayedCollection subrange has too many arguments.\n");
					nodePostErrorLine((PyrParseNode*)(yyvsp[-3]));
					compileErrors++;
				}

				SetNil(&nilSlot);
				nilnode2 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);

				SetSymbol(&selectorSlot, s_copyseries);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-5]), (PyrParseNode*)(yyvsp[-2]));
				if (arglen < 2) {
					nilnode1 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
					args = linkNextNode(args, nilnode1);
				}
				args = linkNextNode(args, nilnode2);
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 2938 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 109:
#line 784 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode1, *nilnode2;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				SetNil(&nilSlot);
				nilnode1 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
				nilnode2 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);

				SetSymbol(&selectorSlot, s_copyseries);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-5]), nilnode1);
				args = linkNextNode(args, nilnode2);
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[-1]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 2960 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 110:
#line 802 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode1;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				int arglen = nodeListLength((PyrParseNode*)(yyvsp[-3]));
				if (arglen > 2) {
					error("ArrayedCollection subrange has too many arguments.\n");
					nodePostErrorLine((PyrParseNode*)(yyvsp[-4]));
					compileErrors++;
				}

				SetSymbol(&selectorSlot, s_copyseries);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-6]), (PyrParseNode*)(yyvsp[-3]));
				if (arglen < 2) {
					SetNil(&nilSlot);
					nilnode1 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
					args = linkNextNode(args, nilnode1);
				}
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[-1]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 2989 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 111:
#line 827 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode1, *nilnode2;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				int arglen = nodeListLength((PyrParseNode*)(yyvsp[-4]));
				if (arglen > 2) {
					error("ArrayedCollection subrange has too many arguments.\n");
					nodePostErrorLine((PyrParseNode*)(yyvsp[-5]));
					compileErrors++;
				}

				SetNil(&nilSlot);
				nilnode2 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);

				SetSymbol(&selectorSlot, s_putseries);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-7]), (PyrParseNode*)(yyvsp[-4]));
				if (arglen < 2) {
					nilnode1 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
					args = linkNextNode(args, nilnode1);
				}
				args = linkNextNode(args, nilnode2);
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[0]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3021 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 112:
#line 855 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode1, *nilnode2;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				SetNil(&nilSlot);
				nilnode1 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
				nilnode2 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);

				SetSymbol(&selectorSlot, s_putseries);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-7]), nilnode1);
				args = linkNextNode(args, nilnode2);
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[-3]));
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[0]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3044 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 113:
#line 874 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode1;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				int arglen = nodeListLength((PyrParseNode*)(yyvsp[-5]));
				if (arglen > 2) {
					error("ArrayedCollection subrange has too many arguments.\n");
					nodePostErrorLine((PyrParseNode*)(yyvsp[-6]));
					compileErrors++;
				}

				SetSymbol(&selectorSlot, s_putseries);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-8]), (PyrParseNode*)(yyvsp[-5]));
				if (arglen < 2) {
					SetNil(&nilSlot);
					nilnode1 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
					args = linkNextNode(args, nilnode1);
				}
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[-3]));
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[0]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3074 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 114:
#line 902 "lang11d.y" /* yacc.c:1661  */
    {
				// if this is not used in a 'do' or list comprehension, then should return an error.
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode, *nilnode2;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				SetNil(&nilSlot);
				nilnode = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
				nilnode2 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);

				SetSymbol(&selectorSlot, s_series);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-1]), nilnode);
				args = linkNextNode(args, nilnode2);
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3096 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 115:
#line 921 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode, *zeronode;
				PyrSlot selectorSlot, nilSlot, zeroSlot;
				PyrParseNode* args;

				SetInt(&zeroSlot, 0);
				SetNil(&nilSlot);
				nilnode = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
				zeronode = newPyrPushLitNode(newPyrSlotNode(&zeroSlot), NULL);

				SetSymbol(&selectorSlot, s_series);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode(zeronode, nilnode);
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[0]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3118 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 116:
#line 940 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				SetNil(&nilSlot);
				nilnode = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);

				SetSymbol(&selectorSlot, s_series);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-2]), nilnode);
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[0]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3138 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 117:
#line 957 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot selectorSlot;
				PyrParseNode* args;

				SetSymbol(&selectorSlot, s_series);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode(
					(PyrParseNode*)(yyvsp[-4]),
					(PyrParseNode*)(yyvsp[-2]));
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[0]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3156 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 118:
#line 971 "lang11d.y" /* yacc.c:1661  */
    {
				// if this is not used in a 'do' or list comprehension, then should return an error.
				PyrSlotNode *selectornode;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;
				PyrPushLitNode *nilnode;

				SetNil(&nilSlot);
				nilnode = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);

				SetSymbol(&selectorSlot, s_series);
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode(
					(PyrParseNode*)(yyvsp[-3]),
					(PyrParseNode*)(yyvsp[-1]));
				args = linkNextNode(args, nilnode);
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3179 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 119:
#line 992 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode, *zeronode;
				PyrSlot selectorSlot, nilSlot, zeroSlot;
				PyrParseNode* args;

				SetInt(&zeroSlot, 0);
				SetNil(&nilSlot);
				nilnode = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
				zeronode = newPyrPushLitNode(newPyrSlotNode(&zeroSlot), NULL);

				SetSymbol(&selectorSlot, getsym("seriesIter"));
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode(zeronode, nilnode);
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[0]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3201 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 120:
#line 1011 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode, *nilnode2;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				SetNil(&nilSlot);
				nilnode = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);
				nilnode2 = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);

				SetSymbol(&selectorSlot, getsym("seriesIter"));
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-1]), nilnode);
				args = linkNextNode(args, nilnode2);
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3222 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 121:
#line 1029 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				SetNil(&nilSlot);
				nilnode = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);

				SetSymbol(&selectorSlot, getsym("seriesIter"));
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-2]), nilnode);
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[0]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3242 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 122:
#line 1046 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrPushLitNode *nilnode;
				PyrSlot selectorSlot, nilSlot;
				PyrParseNode* args;

				SetNil(&nilSlot);
				nilnode = newPyrPushLitNode(newPyrSlotNode(&nilSlot), NULL);

				SetSymbol(&selectorSlot, getsym("seriesIter"));
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode((PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1]));
				args = linkNextNode(args, nilnode);
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3262 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 123:
#line 1062 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot selectorSlot;
				PyrParseNode* args;

				SetSymbol(&selectorSlot, getsym("seriesIter"));
				selectornode = newPyrSlotNode(&selectorSlot);
				args = linkNextNode(
					(PyrParseNode*)(yyvsp[-4]),
					(PyrParseNode*)(yyvsp[-2]));
				args = linkNextNode(args, (PyrParseNode*)(yyvsp[0]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3280 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 127:
#line 1080 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushNameNode((PyrSlotNode*)(yyvsp[0])); }
#line 3286 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 128:
#line 1082 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;
				PyrParseNode* args;

				SetSymbol(&slot, s_at);
				selectornode = newPyrSlotNode(&slot);
				args = linkNextNode(
					(PyrParseNode*)(yyvsp[-4]),
					(PyrParseNode*)(yyvsp[-1]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3303 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 129:
#line 1095 "lang11d.y" /* yacc.c:1661  */
    {
				PyrParseNode *node, *args;
				PyrSlotNode *slotnode;
				PyrSlot slot;

				SetSymbol(&slot, s_ref);
				slotnode = newPyrSlotNode(&slot);
				node = (PyrParseNode*)newPyrPushNameNode(slotnode);
				args = linkNextNode(node, (PyrParseNode*)(yyvsp[0]));
				SetSymbol(&slot, s_new);
				slotnode = newPyrSlotNode(&slot);
				(yyval) = (intptr_t)newPyrCallNode(slotnode, args, 0, 0);
			}
#line 3321 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 130:
#line 1109 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrBinopCallNode((PyrSlotNode*)(yyvsp[-2]),
						(PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[0]), (PyrParseNode*)(yyvsp[-1]));
			}
#line 3330 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 131:
#line 1114 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrAssignNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), 0);
			}
#line 3338 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 132:
#line 1118 "lang11d.y" /* yacc.c:1661  */
    {
				PyrParseNode *argnode, *args;
				PyrSlotNode* selectornode;
				PyrSlot slot;
				argnode = (PyrParseNode*)newPyrPushLitNode((PyrSlotNode*)(yyvsp[-2]), NULL);
				args = linkNextNode(argnode, (PyrParseNode*)(yyvsp[0]));
				SetSymbol(&slot, s_envirPut);
				selectornode = newPyrSlotNode(&slot);
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3353 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 133:
#line 1129 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrSetterNode((PyrSlotNode*)(yyvsp[-2]),
						(PyrParseNode*)(yyvsp[-4]), (PyrParseNode*)(yyvsp[0]));
			}
#line 3362 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 134:
#line 1134 "lang11d.y" /* yacc.c:1661  */
    {
				if ((yyvsp[-3]) != 0) {
					error("Setter method called with keyword arguments.\n");
					nodePostErrorLine((PyrParseNode*)(yyvsp[-3]));
					compileErrors++;
				}
				(yyval) = (intptr_t)newPyrSetterNode((PyrSlotNode*)(yyvsp[-6]),
						(PyrParseNode*)(yyvsp[-4]), (PyrParseNode*)(yyvsp[0]));
			}
#line 3376 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 135:
#line 1144 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrMultiAssignNode((PyrMultiAssignVarListNode*)(yyvsp[-2]),
					(PyrParseNode*)(yyvsp[0]), 0);
			}
#line 3385 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 136:
#line 1149 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;
				PyrParseNode* args;

				SetSymbol(&slot, s_put);
				selectornode = newPyrSlotNode(&slot);
				args = linkNextNode(
					(PyrParseNode*)(yyvsp[-5]),
					(PyrParseNode*)(yyvsp[-3]));
				args = linkNextNode( args, (PyrParseNode*)(yyvsp[0]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3403 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 137:
#line 1163 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;
				PyrParseNode* args;

				SetSymbol(&slot, s_put);
				selectornode = newPyrSlotNode(&slot);
				args = linkNextNode(
					(PyrParseNode*)(yyvsp[-6]),
					(PyrParseNode*)(yyvsp[-3]));
				args = linkNextNode( args, (PyrParseNode*)(yyvsp[0]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, 0);
			}
#line 3421 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 138:
#line 1178 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3427 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 139:
#line 1179 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3433 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 140:
#line 1180 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3439 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 141:
#line 1181 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 3445 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 143:
#line 1186 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrDropNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
			}
#line 3453 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 145:
#line 1194 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3459 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 146:
#line 1196 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 3465 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 148:
#line 1201 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3471 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 149:
#line 1203 "lang11d.y" /* yacc.c:1661  */
    {
					PyrParseNode* key = newPyrPushLitNode((PyrSlotNode*)(yyvsp[-1]), NULL);
					(yyval) = (intptr_t)linkNextNode(key, (PyrParseNode*)(yyvsp[0]));
				}
#line 3480 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 150:
#line 1208 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3486 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 151:
#line 1210 "lang11d.y" /* yacc.c:1661  */
    {
					PyrParseNode* elems;
					PyrParseNode* key = newPyrPushLitNode((PyrSlotNode*)(yyvsp[-1]), NULL);
					elems = (PyrParseNode*)linkNextNode(key, (PyrParseNode*)(yyvsp[0]));
					(yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-3]), elems);
				}
#line 3497 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 152:
#line 1217 "lang11d.y" /* yacc.c:1661  */
    {
					PyrParseNode* elems;
					elems = (PyrParseNode*)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
					(yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-4]), elems);
				}
#line 3507 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 154:
#line 1226 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3513 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 155:
#line 1230 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[0]); }
#line 3519 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 156:
#line 1232 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[0])); }
#line 3525 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 158:
#line 1237 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3531 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 159:
#line 1241 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushKeyArgNode((PyrSlotNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 3537 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 160:
#line 1244 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3543 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 161:
#line 1245 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 3549 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 162:
#line 1249 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMultiAssignVarListNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3555 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 163:
#line 1251 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMultiAssignVarListNode((PyrSlotNode*)(yyvsp[-2]), (PyrSlotNode*)(yyvsp[0])); }
#line 3561 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 165:
#line 1256 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3567 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 166:
#line 1260 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3573 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 167:
#line 1261 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3579 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 168:
#line 1262 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3585 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 169:
#line 1263 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3591 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 170:
#line 1264 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3597 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 171:
#line 1265 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3603 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 172:
#line 1266 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3609 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 173:
#line 1267 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3615 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 174:
#line 1268 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3621 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 175:
#line 1269 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3627 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 176:
#line 1272 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3633 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 177:
#line 1275 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushNameNode((PyrSlotNode*)(yyvsp[0])); }
#line 3639 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 178:
#line 1278 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3645 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 179:
#line 1279 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3651 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 180:
#line 1280 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3657 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 181:
#line 1281 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3663 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 182:
#line 1282 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3669 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 183:
#line 1283 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3675 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 184:
#line 1284 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3681 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 185:
#line 1285 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3687 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 186:
#line 1286 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3693 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 187:
#line 1289 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3699 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 188:
#line 1290 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3705 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 189:
#line 1291 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3711 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 190:
#line 1292 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3717 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 191:
#line 1293 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3723 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 192:
#line 1294 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3729 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 193:
#line 1295 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3735 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 194:
#line 1296 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3741 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 195:
#line 1297 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3747 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 196:
#line 1298 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3753 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 197:
#line 1299 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3759 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 198:
#line 1303 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockNode((PyrArgListNode*)(yyvsp[-3]), (PyrVarListNode*)(yyvsp[-2]),
					(PyrParseNode*)(yyvsp[-1]), false); }
#line 3766 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 199:
#line 1306 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockNode((PyrArgListNode*)(yyvsp[-3]), (PyrVarListNode*)(yyvsp[-2]),
					(PyrParseNode*)(yyvsp[-1]), true); }
#line 3773 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 200:
#line 1310 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3779 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 201:
#line 1312 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 3785 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 203:
#line 1317 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 3791 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 204:
#line 1321 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarListNode((PyrVarDefNode*)(yyvsp[-1]), varLocal); }
#line 3797 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 205:
#line 1324 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3803 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 206:
#line 1326 "lang11d.y" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)newPyrArgListNode((PyrVarDefNode*)(yyvsp[-1]), NULL);
				}
#line 3811 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 207:
#line 1330 "lang11d.y" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)newPyrArgListNode((PyrVarDefNode*)(yyvsp[-3]), (PyrSlotNode*)(yyvsp[-1]));
				}
#line 3819 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 208:
#line 1334 "lang11d.y" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)newPyrArgListNode((PyrVarDefNode*)(yyvsp[-1]), NULL);
				}
#line 3827 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 209:
#line 1338 "lang11d.y" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)newPyrArgListNode((PyrVarDefNode*)(yyvsp[-3]), (PyrSlotNode*)(yyvsp[-1]));
				}
#line 3835 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 211:
#line 1345 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3841 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 212:
#line 1349 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), (yyvsp[-3])); }
#line 3847 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 213:
#line 1352 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3853 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 216:
#line 1358 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3859 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 217:
#line 1362 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[0]), NULL, 0); }
#line 3865 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 218:
#line 1364 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), 0); }
#line 3871 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 219:
#line 1366 "lang11d.y" /* yacc.c:1661  */
    {
					PyrParseNode* node = (PyrParseNode*)(yyvsp[-1]);
					node->mParens = 1;
					(yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-4]), node, 0);
				}
#line 3881 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 220:
#line 1373 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3887 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 223:
#line 1379 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3893 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 224:
#line 1383 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[0]), NULL, 0); }
#line 3899 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 225:
#line 1385 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), 0); }
#line 3905 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 226:
#line 1387 "lang11d.y" /* yacc.c:1661  */
    {
									PyrParseNode* node = (PyrParseNode*)(yyvsp[-1]);
									node->mParens = 1;
									(yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-3]), node, 0);
								}
#line 3915 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 227:
#line 1395 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3921 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 228:
#line 1397 "lang11d.y" /* yacc.c:1661  */
    {
					PyrParseNode* key = newPyrPushLitNode((PyrSlotNode*)(yyvsp[-1]), NULL);
					(yyval) = (intptr_t)linkNextNode(key, (PyrParseNode*)(yyvsp[0]));
				}
#line 3930 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 230:
#line 1405 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3936 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 231:
#line 1408 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3942 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 234:
#line 1414 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3948 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 235:
#line 1418 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[0]), NULL, (yyvsp[-1])); }
#line 3954 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 236:
#line 1420 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), (yyvsp[-3])); }
#line 3960 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 237:
#line 1424 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLitDictNode((PyrParseNode*)(yyvsp[-1])); }
#line 3966 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 238:
#line 1428 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3972 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 239:
#line 1430 "lang11d.y" /* yacc.c:1661  */
    {
					PyrParseNode* key = newPyrPushLitNode((PyrSlotNode*)(yyvsp[-1]), NULL);
					(yyval) = (intptr_t)linkNextNode(key, (PyrParseNode*)(yyvsp[0]));
				}
#line 3981 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 241:
#line 1438 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3987 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 242:
#line 1441 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3993 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 244:
#line 1448 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLitListNode(0, (PyrParseNode*)(yyvsp[-1])); }
#line 3999 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 245:
#line 1450 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLitListNode((PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1])); }
#line 4005 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 246:
#line 1454 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLitListNode(0, (PyrParseNode*)(yyvsp[-1])); }
#line 4011 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 247:
#line 1456 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLitListNode((PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1])); }
#line 4017 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 248:
#line 1459 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 4023 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 251:
#line 1465 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 4029 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 252:
#line 1468 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = rwPrivate; }
#line 4035 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 253:
#line 1470 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = rwReadOnly; }
#line 4041 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 254:
#line 1472 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = rwReadWrite; }
#line 4047 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 255:
#line 1474 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = rwWriteOnly; }
#line 4053 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 256:
#line 1477 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = rwPrivate; }
#line 4059 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 257:
#line 1479 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = rwReadOnly; }
#line 4065 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 258:
#line 1482 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4071 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 259:
#line 1484 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				node = (PyrSlotNode*)zzval;
				SetRaw(&node->mSlot, -slotRawInt(&node->mSlot));
				(yyval) = zzval;
			}
#line 4082 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 260:
#line 1492 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4088 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 261:
#line 1494 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				node = (PyrSlotNode*)zzval;
				SetRaw(&node->mSlot, -slotRawFloat(&node->mSlot));
				(yyval) = zzval;
			}
#line 4099 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 262:
#line 1502 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4105 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 263:
#line 1504 "lang11d.y" /* yacc.c:1661  */
    {
					PyrSlotNode *node;
					double intval, fracval;
					node = (PyrSlotNode*)zzval;
					intval = floor(slotRawFloat(&node->mSlot) + 0.5);
					fracval = slotRawFloat(&node->mSlot) - intval;
					SetRaw(&node->mSlot, -intval + fracval);
					(yyval) = zzval;
				}
#line 4119 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 264:
#line 1514 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4125 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 267:
#line 1520 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				node = (PyrSlotNode*)(yyvsp[-1]);
				SetRaw(&node->mSlot, slotRawFloat(&node->mSlot) * pi);
			}
#line 4135 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 268:
#line 1526 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				double ival;
				node = (PyrSlotNode*)(yyvsp[-1]);
				ival = slotRawInt(&node->mSlot);
				SetFloat(&node->mSlot, ival * pi);
			}
#line 4147 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 269:
#line 1534 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				node = (PyrSlotNode*)zzval;
				SetFloat(&node->mSlot, pi);
				(yyval) = zzval;
			}
#line 4158 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 270:
#line 1541 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				node = (PyrSlotNode*)zzval;
				SetFloat(&node->mSlot, -pi);
				(yyval) = zzval;
			}
#line 4169 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 271:
#line 1549 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4175 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 272:
#line 1550 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4181 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 273:
#line 1553 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4187 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 274:
#line 1556 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4193 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 275:
#line 1559 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4199 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 276:
#line 1562 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4205 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 277:
#line 1565 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4211 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 278:
#line 1568 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4217 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 279:
#line 1571 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4223 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 280:
#line 1574 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4229 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 281:
#line 1577 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4235 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 282:
#line 1580 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4241 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 283:
#line 1581 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4247 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 284:
#line 1582 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4253 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 285:
#line 1583 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4259 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 286:
#line 1584 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4265 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 287:
#line 1585 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4271 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 288:
#line 1586 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4277 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 289:
#line 1587 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4283 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 290:
#line 1590 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4289 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 293:
#line 1597 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4295 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;


#line 4299 "lang11d_tab.cpp" /* yacc.c:1661  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
                      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
