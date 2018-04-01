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
#line 16 "lang11d" /* yacc.c:339  */


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
   by #include "lang11d_tab.hpp".  */
#ifndef YY_YY_LANG11D_TAB_HPP_INCLUDED
# define YY_YY_LANG11D_TAB_HPP_INCLUDED
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

#endif /* !YY_YY_LANG11D_TAB_HPP_INCLUDED  */

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
#define YYLAST   1898

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  292
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  534

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
    1264,  1265,  1266,  1267,  1268,  1271,  1274,  1277,  1278,  1279,
    1280,  1281,  1282,  1283,  1284,  1285,  1288,  1289,  1290,  1291,
    1292,  1293,  1294,  1295,  1296,  1297,  1298,  1301,  1304,  1309,
    1310,  1314,  1315,  1319,  1323,  1324,  1328,  1332,  1336,  1342,
    1343,  1347,  1351,  1352,  1355,  1356,  1360,  1362,  1364,  1372,
    1373,  1376,  1377,  1381,  1383,  1385,  1393,  1395,  1402,  1403,
    1407,  1408,  1411,  1412,  1416,  1418,  1422,  1426,  1428,  1435,
    1436,  1440,  1441,  1446,  1448,  1452,  1454,  1458,  1459,  1462,
    1463,  1467,  1468,  1470,  1472,  1476,  1477,  1481,  1482,  1491,
    1492,  1501,  1502,  1513,  1516,  1517,  1518,  1524,  1532,  1539,
    1548,  1549,  1552,  1555,  1558,  1561,  1564,  1567,  1570,  1573,
    1576,  1579,  1580,  1581,  1582,  1583,  1584,  1585,  1586,  1589,
    1592,  1593,  1596
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

#define YYPACT_NINF -369

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-369)))

#define YYTABLE_NINF -217

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     214,  1065,    10,    67,    10,    94,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,    30,  -369,  -369,  -369,
    -369,  -369,    87,  -369,   256,  1741,    18,  1377,   733,  1741,
      30,   181,  -369,  -369,  -369,  -369,  -369,    58,  -369,  -369,
    -369,  1851,    81,   101,  -369,  -369,  -369,  -369,  1117,  -369,
    -369,   116,   116,  -369,  -369,  -369,   251,   161,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,   112,  -369,  -369,   -17,
    -369,    25,  -369,    66,    30,    30,  -369,  -369,  -369,  -369,
    -369,   857,  -369,  1741,  1741,  -369,  -369,   134,   140,   148,
    1741,  1741,  1429,  -369,   256,  -369,  -369,  -369,  -369,  -369,
    -369,   138,   194,  1117,  -369,   153,   166,  -369,  1741,   170,
     629,   192,  1848,   199,    19,  -369,   179,  1481,  -369,    59,
    -369,   171,  1741,  -369,  -369,  -369,  -369,  -369,  -369,  1741,
    1169,    54,  -369,  -369,  -369,  1377,   909,    54,  -369,    10,
      30,   205,  -369,    30,  1741,  1741,   217,   266,   220,    -3,
    -369,    92,  1117,  -369,  -369,  1117,  1741,  -369,  1377,  -369,
    -369,  -369,  1741,   203,    36,  -369,  1741,  1741,  1741,  -369,
     206,  1377,  -369,  -369,  -369,    20,  -369,  -369,  1741,  1848,
    1814,  -369,  -369,  -369,   221,   215,   116,  -369,  -369,   232,
    -369,  -369,  -369,  -369,  -369,  -369,  1741,    30,    30,  1848,
    1741,  -369,    47,  1533,   961,   268,    50,  1741,  1851,  1851,
    1741,    54,   231,   249,  -369,   253,    54,   231,   249,   262,
    -369,  1741,   197,  -369,   257,  -369,  -369,  -369,  1851,   265,
      30,  -369,    30,  -369,  -369,    30,  -369,   794,   284,  -369,
     283,   285,   294,  -369,   314,  1741,  -369,  -369,  1741,  1741,
    -369,  -369,   326,  -369,   321,  -369,  1741,  1221,    54,  1851,
     307,   325,  -369,   315,   318,  1848,  -369,  1848,  -369,  1848,
    1851,  -369,  -369,   323,   328,  1585,   334,  1741,  1741,    89,
      54,   231,   249,   262,  1741,  1013,    54,  -369,   369,  1741,
    -369,  -369,   331,  -369,    54,  1273,  -369,   327,   349,   332,
    -369,  -369,   333,   337,   349,   338,  -369,   756,  -369,  -369,
     348,   350,   365,   130,  -369,   351,   358,  -369,  1741,    14,
    -369,  -369,   116,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  1325,  1325,  -369,  1741,  -369,  -369,   376,  1741,    54,
     231,   249,  -369,  1848,  1814,  -369,  -369,  -369,  -369,   354,
    -369,   377,   379,   360,  1741,  -369,   370,  1637,   381,  -369,
     371,   372,   373,  1851,    54,   231,   249,   262,   374,  1741,
     262,    62,  -369,    54,  -369,  -369,    54,   375,   382,    87,
      87,   384,   270,   270,   385,  -369,   685,  -369,  -369,   378,
      30,   290,   386,   387,    21,   388,  -369,  1741,  -369,    54,
     392,   393,  -369,  -369,  -369,  1741,  1741,   406,  1851,   408,
     416,   402,  1741,    54,  -369,    54,  -369,   401,   405,   407,
    -369,  -369,  -369,  1741,  -369,  -369,  -369,    87,    87,  -369,
    -369,  -369,  -369,  -369,  -369,   273,  -369,    30,   277,  -369,
     279,  -369,    30,  -369,  -369,   422,  1741,  1741,  -369,  1325,
    -369,  1741,   429,  -369,  -369,    54,  -369,  1851,  1851,  1741,
    1741,  1741,   428,  1851,  -369,  -369,    54,  -369,    54,  1851,
    -369,  -369,    24,    24,   130,  -369,   270,   430,  -369,  -369,
     385,   432,  1741,   387,   387,  -369,   387,  1741,  -369,  1851,
    1851,  1851,  1741,  -369,  -369,    24,    24,  -369,  1689,   412,
    1689,   802,  -369,  1792,  -369,  1792,   387,  -369,  -369,  -369,
     387,  1851,  1689,  1689,  1741,   424,  -369,   419,  -369,   427,
    -369,  -369,  -369,  -369,  -369,   433,   437,   629,  -369,  -369,
    -369,  -369,  -369,  -369
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,    44,     0,     0,     2,     3,     7,   270,   257,   259,
     261,   278,   279,   277,   272,   292,     0,   276,   274,   275,
     280,   263,   204,   271,     0,     0,   204,   145,   230,     0,
       0,     0,    37,     4,    33,    92,    89,   124,   101,   126,
     125,   142,    27,    44,    88,    90,    87,   175,    44,   201,
     185,   177,   264,   265,   268,   178,   176,   127,   182,   183,
     184,   179,   181,   180,    99,    91,     0,     1,     6,    14,
       8,     0,   221,   223,   219,   212,   199,   258,   260,   262,
     269,   230,   129,     0,     0,   199,   289,   147,     0,    29,
       0,     0,     0,   281,   285,   283,   284,   286,   287,   288,
     282,     0,     0,    44,   228,    29,     0,   290,   291,     0,
      27,    94,   247,     0,   162,   164,     0,     0,   285,     0,
     291,   138,    28,   144,    34,    36,   202,   267,   266,     0,
       0,    52,    46,    49,    48,   145,     0,    61,    21,     0,
      12,     0,   203,     0,     0,     0,     0,   220,     0,    29,
     214,    31,    44,    75,    77,    44,     0,    95,    30,   146,
     149,   115,     0,     0,     0,    96,   114,     0,     0,    93,
       0,    30,   231,    98,   227,     0,    28,    45,     0,   247,
     241,   249,   196,   195,     0,    29,   186,   187,   191,     0,
     192,   193,   194,   188,   190,   189,     0,     0,     0,   247,
       0,   153,     0,     0,     0,    50,     0,     0,   143,   131,
       0,     0,    29,    29,    47,     0,    50,    29,    29,    29,
     157,     0,     0,    15,     0,    13,    16,   222,   224,     0,
       0,   205,     0,   207,    30,     0,    32,     0,     0,   200,
       0,     0,     0,   148,   150,     0,   119,    97,   120,     0,
     116,   226,     0,    35,     0,   229,     0,     0,    53,   132,
       0,     0,   239,    29,     0,     0,   243,    30,   248,   247,
     135,   163,   165,     0,     0,     0,   100,     0,     0,     0,
      50,    29,    29,    29,     0,     0,    51,    74,     0,     0,
     140,   139,   130,   155,    54,    30,   160,     0,    30,     0,
      60,    62,     0,     0,    30,     0,   159,   286,    11,    22,
       0,     0,    14,    21,   225,     0,     0,   215,     0,     0,
     217,   174,   166,   167,   171,   172,   173,   168,   170,   169,
     198,     0,     0,   197,     0,   151,   121,     0,   118,     0,
      29,    29,   245,     0,    30,   242,   236,   238,   250,     0,
     244,   103,   102,     0,     0,   154,     0,     0,   128,    66,
       0,     0,     0,   133,    50,    29,    29,    29,     0,     0,
      29,    50,    58,    50,    65,   158,    50,     0,     0,   204,
     204,     0,   251,   251,   255,    17,     0,   206,   208,     0,
       0,     0,     0,    79,   176,     0,   152,   122,   117,    56,
       0,     0,   237,   240,   246,     0,     0,   104,   136,   109,
     108,     0,     0,    50,    70,    50,    71,     0,     0,     0,
     141,   156,   161,     0,    55,    64,    63,   204,   204,   199,
     199,    16,   252,   254,   253,     0,   232,     0,     0,   256,
      29,   209,     0,     9,   218,     0,     0,     0,    76,     0,
      84,     0,     0,    78,   123,    50,    59,   106,   105,     0,
       0,     0,   110,   137,    69,    67,    50,    73,    50,   134,
     199,   199,    40,    40,    21,    19,   251,   234,    18,    20,
     255,     0,     0,    79,    79,    80,    79,     0,    57,   107,
     112,   111,     0,    72,    68,    40,    40,   273,    42,    27,
      42,     0,   233,     0,   210,     0,    79,    86,    85,    81,
      79,   113,    42,    42,     0,     0,    38,    42,    41,     0,
      10,   235,   211,    83,    82,     0,     0,    27,    23,    39,
      25,    24,    26,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -369,  -369,  -369,  -369,  -369,   472,  -369,   177,    60,  -369,
    -311,  -369,  -109,   -77,  -369,   -28,  -369,  -254,  -282,   -24,
     451,   -42,   -96,   263,  -369,    91,  -369,  -369,  -334,  -327,
    -369,  -369,  -369,  -369,  -369,  -369,   -19,  -369,  -369,    -1,
     363,  -369,  -127,  -117,  -105,   196,  -162,  -369,  -369,  -368,
     216,  -369,  -369,  -150,  -369,   -68,   473,    15,   -22,  -369,
      28,  -369,  -369,   274,  -369,   440,   380,   345,  -369,  -369,
     135,    41,  -369,   182,  -369,  -369,  -214,  -369,  -157,  -369,
    -369,  -369,     2,  -369,  -369,   -13,    16,   144,   511,  -369,
      71,   201,   255,   304,   353,   368,  -369,  -215,   523,   -20,
    -369
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    68,     6,   224,   141,   313,   385,
     222,   309,   123,   296,   237,    32,    33,   515,   498,   516,
      34,   286,   132,   287,    35,    36,   240,   241,   450,   392,
      37,    38,    39,    40,   101,   163,    41,   207,    42,   201,
      88,    89,   202,   213,   370,   220,   297,   113,   114,   320,
      44,    45,    46,   181,    47,   152,    48,   239,    76,   440,
     441,   148,   149,   150,   146,    71,    72,   104,   105,   106,
     435,   436,   182,   262,   263,   264,    50,   183,   184,   185,
     437,   442,    51,    52,    53,    54,    55,    56,    57,   499,
      58,    59,    60,    61,    62,    63,    64,   107,   120,   121,
      65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,   177,   386,   212,    85,   395,    82,   311,   109,   217,
     110,    80,   159,   139,   131,   137,    49,   155,  -213,   218,
     125,    14,   260,   321,     7,    14,    87,   102,   172,   140,
     261,   219,    74,     7,   497,   214,   233,    16,   127,   128,
     197,   214,   273,    49,    22,    22,   234,    43,    83,   451,
      23,   299,   129,     7,     8,   302,   303,    75,   248,    23,
     112,   109,     7,   126,    26,    26,    84,    67,   198,   275,
     257,   130,   235,   142,   143,   170,   279,   281,    22,    23,
     102,    80,   153,   154,   288,   249,    22,   282,    23,   160,
     161,   164,   378,   423,   276,  -216,   277,   144,    26,   283,
     289,    74,    43,   208,   117,   203,    26,   174,   268,   204,
     209,   357,   349,  -216,   186,   347,   145,   348,   126,   360,
     361,  -216,   485,   236,   238,   228,    75,   242,   187,   122,
     340,  -216,     2,   258,    87,   521,   358,   522,   277,    21,
     341,  -216,   305,   382,   229,   383,   384,   133,   133,   507,
     508,    43,   509,    29,    43,   243,   138,   244,   365,   259,
      73,   246,   214,   501,   156,   250,   251,   252,   366,   294,
     254,   311,   523,   127,   111,   115,   524,   270,   400,   401,
     367,   186,   186,   190,     7,    22,   345,   157,   292,   165,
     214,   500,    14,   402,   261,   187,   187,   158,   214,   274,
       7,   186,   171,   417,   418,    26,   362,   135,   290,   293,
      23,   136,   206,   512,   513,   187,   166,   173,    73,   151,
     306,   175,   133,   178,   167,   199,    23,   112,   133,    93,
     196,   118,    95,    96,   307,    98,    99,   100,   230,   322,
       1,   232,   308,   168,   335,   169,   519,   336,   337,   226,
     190,   190,     2,   323,   247,   174,   188,   253,   525,   526,
      77,    78,    79,   205,   267,   363,   133,   186,   266,   186,
     190,   186,   134,   134,   353,    22,   355,   356,   269,    21,
     295,   187,   129,   187,   225,   187,   311,    73,   368,   321,
     419,   321,    22,   422,   355,    26,   133,   399,   298,   284,
     300,   130,   133,   214,   312,   432,   433,   133,   324,   127,
     434,   304,    26,   191,   231,   143,   314,   389,   285,   446,
     447,   475,   476,   188,   188,   478,   476,   479,   234,   330,
     393,   393,   331,   396,   332,   408,   190,   398,   190,   333,
     190,   271,   272,   188,   334,   186,   186,   134,   338,   133,
     291,   167,   131,   134,   342,   343,   411,   429,   430,   187,
     187,   472,   473,   480,   344,   354,   310,   192,   421,   346,
     350,   133,   119,    77,   315,   351,   316,   133,   371,   151,
     191,   191,    86,   372,   373,   133,   457,   458,   374,   376,
     518,   134,   379,   463,   380,   139,   454,   388,   397,   387,
     191,   404,   495,   496,   469,   470,   471,   407,   405,   188,
     406,   188,   412,   188,   190,   190,   193,   409,   533,   427,
     439,   134,   413,   414,   415,   420,   428,   134,   431,   444,
     133,   448,   134,   453,   192,   192,   449,   459,   325,   460,
     489,   490,   491,   455,   456,   483,   484,   461,   393,   462,
     486,   377,   466,   482,   192,   133,   467,   487,   468,   492,
     176,   503,   133,   505,   133,   194,   191,   133,   191,   528,
     191,   514,   530,   511,   134,   394,   394,    70,   531,   301,
     195,   506,   532,   193,   193,   133,   510,   188,   188,   381,
     133,   474,   326,   529,   124,   527,   134,   517,   215,   517,
     375,   103,   134,   193,   133,   322,   133,   322,   504,   317,
     134,   517,   517,    66,   147,    69,   255,   502,   438,   323,
     192,   323,   192,   227,   192,     0,   403,     0,     0,     0,
     310,     0,   194,   194,   445,     0,     0,     0,   452,     0,
       0,   327,   116,   359,   191,   191,   133,   195,   195,     0,
      90,   108,   194,     0,     0,   134,     0,   133,     0,   133,
       0,     0,     0,     0,     0,     0,     0,   195,     0,   193,
       0,   193,     0,   193,   324,     0,   324,     0,     0,     0,
     134,   477,     0,     0,     0,     0,   481,   134,     0,   134,
     328,     0,   134,   394,     0,     0,     0,     0,   192,   192,
       0,     0,     0,     0,   108,   329,     0,     0,     0,     0,
     134,     0,     0,     0,     0,   134,     0,     0,   194,     0,
     194,     0,   194,   189,     0,     0,     0,   416,     0,   134,
       0,   134,     0,   195,   424,   195,   425,   195,     0,   426,
       0,     0,     0,     0,     0,   310,     0,   193,   193,     0,
     223,     0,     0,     0,     0,     0,     0,     0,    90,   221,
       0,    93,    86,   118,    95,    96,    97,    98,    99,   100,
     119,   134,     0,     0,     0,     0,   464,   176,   465,     0,
       0,   245,   134,     0,   134,     0,     0,     0,     7,     0,
     189,   189,     0,     0,   256,     0,   194,   194,     0,     0,
       0,     0,     0,   265,   325,     0,   325,     0,     0,     0,
     189,   195,   195,     0,    23,     0,     0,    93,   488,   118,
      95,    96,   307,    98,    99,   100,     0,   221,     0,   493,
     443,   494,     0,     0,     0,     0,     7,     8,     9,    10,
      11,    12,    13,     0,    14,    15,    16,     0,     0,     0,
      17,    18,    19,    20,     0,    91,    21,    22,   326,     7,
     326,     0,    23,    92,     0,    93,    86,    94,    95,    96,
      97,    98,    99,   100,     0,    25,   189,    26,   189,    27,
     189,     0,     0,    81,     0,    23,    30,    31,    93,     0,
     118,    95,    96,    97,    98,    99,   100,     0,     8,     9,
      10,    11,    12,    13,     0,     7,     0,   327,   221,   327,
       0,    17,    18,    19,     0,     0,     0,    21,   221,     0,
       0,   221,     0,     0,     0,     0,     0,   221,    24,     0,
     116,    23,     0,     0,    93,     0,   118,    95,    96,   307,
      98,    99,   100,     0,   318,     0,     0,   520,   319,     0,
       0,     0,     0,     0,   189,   189,   328,     0,   328,     0,
       7,     8,     9,    10,    11,    12,    13,   265,    14,    15,
       0,   329,     0,   329,    17,    18,    19,    20,     0,    91,
      21,    22,     0,     0,     0,     0,    23,    92,     0,    93,
      86,    94,    95,    96,    97,    98,    99,   100,     0,    25,
       0,    26,     0,    27,     0,     0,     0,    81,     0,     0,
      30,    31,     7,     8,     9,    10,    11,    12,    13,     0,
      14,    15,     0,     0,     0,     0,    17,    18,    19,    20,
       0,     0,    21,    22,     0,     0,     0,     0,    23,     0,
       0,     0,    86,    24,     0,     0,   210,     0,     0,     0,
       0,    25,     0,    26,     0,    27,     0,     0,     0,    81,
     216,     0,    30,    31,     7,     8,     9,    10,    11,    12,
      13,     0,    14,    15,     0,     0,     0,     0,    17,    18,
      19,    20,     0,     0,    21,    22,     0,     0,     0,     0,
      23,     0,     0,     0,    86,    24,     0,     0,   210,     0,
       0,     0,     0,    25,     0,    26,     0,    27,     0,     0,
       0,    81,   280,     0,    30,    31,     7,     8,     9,    10,
      11,    12,    13,     0,    14,    15,     0,     0,     0,     0,
      17,    18,    19,    20,     0,     0,    21,    22,     0,     0,
       0,     0,    23,     0,     0,     0,    86,    24,     0,     0,
     210,     0,     0,     0,     0,    25,     0,    26,     0,    27,
       0,     0,     0,    81,   364,     0,    30,    31,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    15,    16,     0,
       0,     0,    17,    18,    19,    20,     0,     0,    21,    22,
       0,     0,     0,     0,    23,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
       0,    27,     0,     0,     0,    28,     0,    29,    30,    31,
       7,     8,     9,    10,    11,    12,    13,     0,    14,    15,
      16,     0,     0,     0,    17,    18,    19,    20,     0,     0,
      21,    22,     0,     0,     0,     0,    23,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,    25,
       0,    26,     0,    27,     0,     0,     0,    81,     0,    29,
      30,    31,     7,     8,     9,    10,    11,    12,    13,     0,
      14,    15,     0,     0,     0,     0,    17,    18,    19,    20,
       0,     0,    21,    22,     0,     0,     0,     0,    23,     0,
       0,     0,     0,    24,     0,     0,   210,     0,     0,     0,
       0,    25,     0,    26,     0,    27,     0,     0,     0,    81,
     211,     0,    30,    31,     7,     8,     9,    10,    11,    12,
      13,     0,    14,    15,     0,     0,     0,     0,    17,    18,
      19,    20,     0,     0,    21,    22,     0,     0,     0,     0,
      23,     0,     0,     0,     0,    24,     0,     0,   210,     0,
       0,     0,     0,    25,     0,    26,     0,    27,     0,     0,
       0,    81,   339,     0,    30,    31,     7,     8,     9,    10,
      11,    12,    13,     0,    14,    15,     0,     0,     0,     0,
      17,    18,    19,    20,     0,     0,    21,    22,     0,     0,
       0,     0,    23,     0,     0,     0,    86,    24,     0,     0,
     369,     0,     0,     0,     0,    25,     0,    26,     0,    27,
       0,     0,     0,    81,     0,     0,    30,    31,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    15,   390,     0,
       0,     0,    17,    18,    19,    20,     0,     0,    21,    22,
       0,     0,     0,     0,    23,   391,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
       0,    27,     0,     0,     0,    81,     0,     0,    30,    31,
       7,     8,     9,    10,    11,    12,    13,     0,    14,    15,
       0,     0,     0,     0,    17,    18,    19,    20,     0,     0,
      21,    22,     0,     0,     0,     0,    23,     0,     0,     0,
      86,    24,     0,     0,     0,     0,     0,     0,     0,    25,
       0,    26,     0,    27,     0,     0,     0,    81,     0,     0,
      30,    31,     7,     8,     9,    10,    11,    12,    13,     0,
      14,    15,     0,     0,     0,     0,    17,    18,    19,    20,
       0,   162,    21,    22,     0,     0,     0,     0,    23,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    26,     0,    27,     0,     0,     0,    81,
       0,     0,    30,    31,     7,     8,     9,    10,    11,    12,
      13,     0,    14,    15,     0,     0,     0,     0,    17,    18,
      19,    20,     0,   200,    21,    22,     0,     0,     0,     0,
      23,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,     0,    27,     0,     0,
       0,    81,     0,     0,    30,    31,     7,     8,     9,    10,
      11,    12,    13,     0,    14,    15,     0,     0,     0,     0,
      17,    18,    19,    20,     0,   278,    21,    22,     0,     0,
       0,     0,    23,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    26,     0,    27,
       0,     0,     0,    81,     0,     0,    30,    31,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    15,     0,     0,
       0,     0,    17,    18,    19,    20,     0,     0,    21,    22,
       0,     0,     0,     0,    23,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
       0,    27,   352,     0,     0,    81,     0,     0,    30,    31,
       7,     8,     9,    10,    11,    12,    13,     0,    14,    15,
       0,     0,     0,     0,    17,    18,    19,    20,     0,     0,
      21,    22,     0,     0,     0,     0,    23,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,    25,
       0,    26,     0,    27,   410,     0,     0,    81,     0,     0,
      30,    31,     7,     8,     9,    10,    11,    12,    13,     0,
      14,    15,     0,     0,     0,     0,    17,    18,    19,    20,
       0,     0,    21,    22,     0,     0,     0,     0,    23,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    26,     0,    27,     0,     0,     0,    81,
       0,   514,    30,    31,     7,     8,     9,    10,    11,    12,
      13,     0,    14,    15,     0,     0,     0,     0,    17,    18,
      19,    20,     0,     0,    21,    22,     0,     0,     0,     0,
      23,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,     0,    27,     0,     0,
       0,    81,     0,     0,    30,    31,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,    17,
      18,    19,     0,     0,     0,    21,     0,     7,     8,     9,
      10,    11,    12,    13,     0,    14,    24,     0,     0,     0,
       0,    17,    18,    19,     0,     0,     0,    21,     0,     0,
       0,     0,     0,    23,     0,     0,   319,    86,    24,     0,
       0,     7,     8,     9,    10,    11,    12,    13,     0,    14,
     179,     0,     0,     0,   180,    17,    18,    19,     0,     0,
       0,    21,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,    24,    93,    86,   118,    95,    96,    97,    98,
      99,   100,   119,     0,   179,     0,     0,     0,   180
};

static const yytype_int16 yycheck[] =
{
       1,   110,   313,   130,    26,   332,    25,   222,    28,   136,
      29,    24,    89,    30,    56,    57,     1,    85,    21,   136,
      48,    11,   179,   237,     3,    11,    27,    28,   105,    46,
     180,   136,    14,     3,    10,   131,    39,    13,    51,    52,
      21,   137,   199,    28,    24,    24,    49,    48,    30,    28,
      29,   213,    31,     3,     4,   217,   218,    39,    22,    29,
      46,    81,     3,    48,    44,    44,    48,     0,    49,    22,
      50,    50,   149,    48,    49,   103,   203,   204,    24,    29,
      81,    94,    83,    84,    34,    49,    24,   204,    29,    90,
      91,    92,   307,    31,    47,     3,    49,    31,    44,   204,
      50,    14,   103,   122,    46,    46,    44,   108,   185,    50,
     129,    22,   269,    21,   112,   265,    50,   267,   103,   281,
     282,    29,   449,    31,   152,   144,    39,   155,   112,    48,
     257,    39,    38,   175,   135,   503,    47,   505,    49,    23,
     257,    49,   219,    13,   145,    15,    16,    56,    57,   483,
     484,   152,   486,    52,   155,   156,    44,   158,   285,   178,
      16,   162,   258,   474,    30,   166,   167,   168,   285,   211,
     171,   386,   506,   186,    30,    31,   510,   196,   340,   341,
     285,   179,   180,   112,     3,    24,   263,    47,   207,    51,
     286,   473,    11,   343,   344,   179,   180,    49,   294,   200,
       3,   199,    49,   365,   366,    44,   283,    46,   206,   210,
      29,    50,    41,   495,   496,   199,    22,    51,    74,    75,
     221,    51,   131,    31,    30,    46,    29,    46,   137,    32,
      31,    34,    35,    36,    37,    38,    39,    40,    21,   237,
      26,    21,    45,    49,   245,    51,   500,   248,   249,    44,
     179,   180,    38,   237,    51,   256,   112,    51,   512,   513,
       4,     5,     6,   119,    49,   284,   175,   265,    47,   267,
     199,   269,    56,    57,   275,    24,   277,   278,    46,    23,
      49,   265,    31,   267,   140,   269,   501,   143,   289,   503,
     367,   505,    24,   370,   295,    44,   205,   339,    49,    31,
      47,    50,   211,   399,    47,    35,    36,   216,   237,   322,
      40,    49,    44,   112,    48,    49,    51,   318,    50,    29,
      30,    48,    49,   179,   180,    48,    49,    48,    49,    45,
     331,   332,    49,   334,    49,   354,   265,   338,   267,    45,
     269,   197,   198,   199,    30,   343,   344,   131,    22,   258,
     206,    30,   394,   137,    47,    30,   357,   379,   380,   343,
     344,   429,   430,   440,    49,    31,   222,   112,   369,    51,
      47,   280,    41,     4,   230,    47,   232,   286,    51,   235,
     179,   180,    33,    51,    51,   294,   405,   406,    51,    51,
     499,   175,    44,   412,    44,    30,   397,    39,    22,    48,
     199,    47,   470,   471,   423,   427,   428,    47,    31,   265,
      31,   267,    31,   269,   343,   344,   112,    47,   527,    44,
      35,   205,    51,    51,    51,    51,    44,   211,    44,    51,
     339,    45,   216,    45,   179,   180,    49,    31,   237,    31,
     459,   460,   461,    51,    51,   446,   447,    31,   449,    47,
     451,   307,    51,    31,   199,   364,    51,    28,    51,    31,
      48,    31,   371,    31,   373,   112,   265,   376,   267,    45,
     269,    52,    45,   492,   258,   331,   332,     5,    45,   216,
     112,   482,    45,   179,   180,   394,   487,   343,   344,   312,
     399,   431,   237,   517,    43,   514,   280,   498,   135,   500,
     304,    28,   286,   199,   413,   503,   415,   505,   480,   235,
     294,   512,   513,     2,    74,     4,   171,   476,   383,   503,
     265,   505,   267,   143,   269,    -1,   344,    -1,    -1,    -1,
     386,    -1,   179,   180,   390,    -1,    -1,    -1,   394,    -1,
      -1,   237,    31,   280,   343,   344,   455,   179,   180,    -1,
      27,    28,   199,    -1,    -1,   339,    -1,   466,    -1,   468,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,    -1,   265,
      -1,   267,    -1,   269,   503,    -1,   505,    -1,    -1,    -1,
     364,   437,    -1,    -1,    -1,    -1,   442,   371,    -1,   373,
     237,    -1,   376,   449,    -1,    -1,    -1,    -1,   343,   344,
      -1,    -1,    -1,    -1,    81,   237,    -1,    -1,    -1,    -1,
     394,    -1,    -1,    -1,    -1,   399,    -1,    -1,   265,    -1,
     267,    -1,   269,   112,    -1,    -1,    -1,   364,    -1,   413,
      -1,   415,    -1,   265,   371,   267,   373,   269,    -1,   376,
      -1,    -1,    -1,    -1,    -1,   501,    -1,   343,   344,    -1,
     139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,   455,    -1,    -1,    -1,    -1,   413,    48,   415,    -1,
      -1,   158,   466,    -1,   468,    -1,    -1,    -1,     3,    -1,
     179,   180,    -1,    -1,   171,    -1,   343,   344,    -1,    -1,
      -1,    -1,    -1,   180,   503,    -1,   505,    -1,    -1,    -1,
     199,   343,   344,    -1,    29,    -1,    -1,    32,   455,    34,
      35,    36,    37,    38,    39,    40,    -1,   204,    -1,   466,
      45,   468,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    22,    23,    24,   503,     3,
     505,    -1,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,   265,    44,   267,    46,
     269,    -1,    -1,    50,    -1,    29,    53,    54,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,     4,     5,
       6,     7,     8,     9,    -1,     3,    -1,   503,   285,   505,
      -1,    17,    18,    19,    -1,    -1,    -1,    23,   295,    -1,
      -1,   298,    -1,    -1,    -1,    -1,    -1,   304,    34,    -1,
     319,    29,    -1,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    50,    -1,    -1,    45,    54,    -1,
      -1,    -1,    -1,    -1,   343,   344,   503,    -1,   505,    -1,
       3,     4,     5,     6,     7,     8,     9,   344,    11,    12,
      -1,   503,    -1,   505,    17,    18,    19,    20,    -1,    22,
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
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    33,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      -1,    -1,    -1,    50,    51,    -1,    53,    54,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      -1,    46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    46,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    42,    -1,    44,    -1,    46,    -1,    -1,    -1,    50,
      51,    -1,    53,    54,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    42,    -1,    44,    -1,    46,    -1,    -1,
      -1,    50,    51,    -1,    53,    54,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    33,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      -1,    -1,    -1,    50,    -1,    -1,    53,    54,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,    54,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
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
      17,    18,    19,    20,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      -1,    -1,    -1,    50,    -1,    -1,    53,    54,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      -1,    46,    47,    -1,    -1,    50,    -1,    -1,    53,    54,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    46,    47,    -1,    -1,    50,    -1,    -1,
      53,    54,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    -1,    46,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    44,    -1,    46,    -1,    -1,
      -1,    50,    -1,    -1,    53,    54,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    -1,    -1,    -1,    23,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    34,    -1,    -1,    -1,
      -1,    17,    18,    19,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    54,    33,    34,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      46,    -1,    -1,    -1,    50,    17,    18,    19,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    34,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    46,    -1,    -1,    -1,    50
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
     104,   131,   137,   141,   145,   146,   147,   148,   149,   150,
      45,    49,    49,    45,    30,    94,    94,    94,    22,    51,
      97,    98,    47,    30,    49,    68,    51,   108,   108,   133,
      47,    47,    47,    94,    31,    94,    94,    22,    47,    78,
     101,   101,    68,    91,    51,    97,    98,    99,    94,    37,
      99,    51,    51,    51,    51,   100,    51,   142,   152,    44,
      44,    62,    13,    15,    16,    64,    65,    48,    39,    94,
      13,    30,    84,    94,   142,    84,    94,    22,    94,    76,
     101,   101,   108,   128,    47,    31,    31,    47,    91,    47,
      47,    94,    31,    51,    51,    51,    78,   101,   101,    68,
      51,    94,    68,    31,    78,    78,    78,    44,    44,   113,
     113,    44,    35,    36,    40,   125,   126,   135,   125,    35,
     114,   115,   136,    45,    51,   142,    29,    30,    45,    49,
      83,    28,   142,    45,    94,    51,    51,    91,    91,    31,
      31,    31,    47,    91,    78,    78,    51,    51,    51,    91,
     113,   113,   110,   110,    63,    48,    49,   142,    48,    48,
      68,   142,    31,    94,    94,    84,    94,    28,    78,    91,
      91,    91,    31,    78,    78,   110,   110,    10,    73,   144,
      73,    65,   126,    31,   115,    31,    94,    83,    83,    83,
      94,    91,    73,    73,    52,    72,    74,    94,    67,    72,
      45,   104,   104,    83,    83,    72,    72,    91,    45,    74,
      45,    45,    45,    67
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
     104,   104,   104,   104,   104,   105,   106,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   113,   113,   113,   113,   113,   114,
     114,   115,   116,   116,   117,   117,   118,   118,   118,   119,
     119,   120,   120,   121,   121,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   127,   128,   128,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   135,   135,   136,   136,   137,   137,   138,
     138,   139,   139,   140,   141,   141,   141,   141,   141,   141,
     142,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   152,   152,   152,   152,   152,   152,   152,   153,
     154,   154,   155
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
       1,     1,     1,     1,     1,     1,     1,     5,     5,     0,
       2,     1,     2,     3,     0,     3,     5,     3,     5,     1,
       3,     4,     0,     1,     1,     3,     1,     3,     5,     0,
       1,     1,     3,     1,     3,     4,     3,     2,     1,     3,
       0,     2,     1,     3,     2,     4,     3,     3,     2,     1,
       3,     0,     2,     4,     5,     3,     4,     0,     2,     1,
       3,     0,     1,     1,     1,     0,     1,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
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
#line 40 "lang11d" /* yacc.c:1661  */
    { gRootParseNode = (PyrParseNode*)(yyvsp[0]); gParserResult = 1; }
#line 1914 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 3:
#line 42 "lang11d" /* yacc.c:1661  */
    { gRootParseNode = (PyrParseNode*)(yyvsp[0]); gParserResult = 1; }
#line 1920 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 4:
#line 44 "lang11d" /* yacc.c:1661  */
    { gRootParseNode = (PyrParseNode*)(yyvsp[0]); gParserResult = 2; }
#line 1926 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 5:
#line 47 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 1932 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 6:
#line 49 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 1938 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 8:
#line 54 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 1944 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 9:
#line 58 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrClassNode((PyrSlotNode*)(yyvsp[-5]), (PyrSlotNode*)(yyvsp[-4]),
					(PyrVarListNode*)(yyvsp[-2]), (PyrMethodNode*)(yyvsp[-1]), 0);
				}
#line 1952 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 10:
#line 62 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrClassNode((PyrSlotNode*)(yyvsp[-8]), (PyrSlotNode*)(yyvsp[-4]),
					(PyrVarListNode*)(yyvsp[-2]), (PyrMethodNode*)(yyvsp[-1]),
					(PyrSlotNode*)(yyvsp[-6]));
				}
#line 1961 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 11:
#line 69 "lang11d" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)newPyrClassExtNode((PyrSlotNode*)(yyvsp[-3]), (PyrMethodNode*)(yyvsp[-1]));
				}
#line 1969 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 12:
#line 74 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 1975 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 14:
#line 78 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 1981 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 15:
#line 80 "lang11d" /* yacc.c:1661  */
    { (yyval) = (yyvsp[0]); }
#line 1987 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 16:
#line 83 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 1993 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 17:
#line 85 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 1999 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 18:
#line 89 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarListNode((PyrVarDefNode*)(yyvsp[-1]), varClass); }
#line 2005 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 19:
#line 91 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarListNode((PyrVarDefNode*)(yyvsp[-1]), varInst); }
#line 2011 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 20:
#line 93 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarListNode((PyrVarDefNode*)(yyvsp[-1]), varConst); }
#line 2017 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 21:
#line 96 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 2023 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 22:
#line 98 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 2029 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 23:
#line 102 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMethodNode((PyrSlotNode*)(yyvsp[-6]), (PyrSlotNode*)(yyvsp[-2]),
					(PyrArgListNode*)(yyvsp[-4]), (PyrVarListNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1]), 0); }
#line 2036 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 24:
#line 105 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMethodNode((PyrSlotNode*)(yyvsp[-6]), (PyrSlotNode*)(yyvsp[-2]),
					(PyrArgListNode*)(yyvsp[-4]), (PyrVarListNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1]), 1); }
#line 2043 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 25:
#line 108 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMethodNode((PyrSlotNode*)(yyvsp[-6]), (PyrSlotNode*)(yyvsp[-2]),
					(PyrArgListNode*)(yyvsp[-4]), (PyrVarListNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1]), 0); }
#line 2050 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 26:
#line 111 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMethodNode((PyrSlotNode*)(yyvsp[-6]), (PyrSlotNode*)(yyvsp[-2]),
					(PyrArgListNode*)(yyvsp[-4]), (PyrVarListNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1]), 1); }
#line 2057 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 34:
#line 129 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrDropNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 2063 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 35:
#line 133 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockNode(NULL, (PyrVarListNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[-1]), false); }
#line 2069 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 36:
#line 135 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockNode(NULL, (PyrVarListNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0]), false); }
#line 2075 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 37:
#line 137 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockNode(NULL, NULL, (PyrParseNode*)(yyvsp[0]), false); }
#line 2081 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 39:
#line 142 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrDropNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 2087 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 40:
#line 145 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 2093 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 41:
#line 147 "lang11d" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 2099 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 42:
#line 151 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrReturnNode(NULL); }
#line 2105 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 43:
#line 153 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrReturnNode((PyrParseNode*)(yyvsp[-1])); }
#line 2111 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 44:
#line 157 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockReturnNode(); }
#line 2117 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 45:
#line 159 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrReturnNode((PyrParseNode*)(yyvsp[-1])); }
#line 2123 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 47:
#line 164 "lang11d" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0]));
				}
#line 2131 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 50:
#line 173 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 2137 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 52:
#line 178 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0]), 0, 0);
			}
#line 2145 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 53:
#line 182 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), 0, 0);
			}
#line 2153 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 54:
#line 186 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-3]), NULL, NULL, (PyrParseNode*)(yyvsp[0]));
			}
#line 2161 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 55:
#line 190 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-5]), (PyrParseNode*)(yyvsp[-3]),
						(PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2170 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 56:
#line 195 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-4]), NULL, NULL, (PyrParseNode*)(yyvsp[0]));
			}
#line 2178 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 57:
#line 199 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-6]), (PyrParseNode*)(yyvsp[-3]),
						(PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2187 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 58:
#line 204 "lang11d" /* yacc.c:1661  */
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
#line 2209 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 59:
#line 222 "lang11d" /* yacc.c:1661  */
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
#line 2226 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 60:
#line 235 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrDynListNode((PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1])); }
#line 2232 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 61:
#line 237 "lang11d" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;
				PyrParseNode* args;

				SetSymbol(&slot, s_new);
				selectornode = newPyrSlotNode(&slot);
				args = (PyrParseNode*)newPyrPushNameNode((PyrSlotNode*)(yyvsp[-1]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, 0, (PyrParseNode*)(yyvsp[0]));
			}
#line 2247 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 62:
#line 248 "lang11d" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;
				PyrParseNode* args;

				SetSymbol(&slot, s_new);
				selectornode = newPyrSlotNode(&slot);
				args = (PyrParseNode*)newPyrPushNameNode((PyrSlotNode*)(yyvsp[-3]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, NULL, (PyrParseNode*)(yyvsp[0]));
			}
#line 2262 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 63:
#line 259 "lang11d" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;
				PyrParseNode* args;

				SetSymbol(&slot, s_new);
				selectornode = newPyrSlotNode(&slot);
				args = (PyrParseNode*)newPyrPushNameNode((PyrSlotNode*)(yyvsp[-5]));
				(yyval) = (intptr_t)newPyrCallNode(selectornode, args, (PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2277 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 64:
#line 270 "lang11d" /* yacc.c:1661  */
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
#line 2294 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 65:
#line 283 "lang11d" /* yacc.c:1661  */
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
#line 2319 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 66:
#line 304 "lang11d" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;

				SetSymbol(&slot, s_value);
				selectornode = newPyrSlotNode(&slot);
				(yyval) = (intptr_t)newPyrCallNode(selectornode, (PyrParseNode*)(yyvsp[-4]), NULL, (PyrParseNode*)(yyvsp[0]));
			}
#line 2332 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 67:
#line 313 "lang11d" /* yacc.c:1661  */
    {
				PyrSlotNode *selectornode;
				PyrSlot slot;

				SetSymbol(&slot, s_value);
				selectornode = newPyrSlotNode(&slot);
				(yyval) = (intptr_t)newPyrCallNode(selectornode, (PyrParseNode*)(yyvsp[-6]), (PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2345 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 68:
#line 322 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-5]), (PyrParseNode*)(yyvsp[-7]),
					(PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2354 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 69:
#line 327 "lang11d" /* yacc.c:1661  */
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
#line 2371 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 70:
#line 340 "lang11d" /* yacc.c:1661  */
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
#line 2395 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 71:
#line 360 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-5]), NULL, (PyrParseNode*)(yyvsp[0]));
			}
#line 2403 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 72:
#line 364 "lang11d" /* yacc.c:1661  */
    {
				PyrParseNode* args;
				args = linkNextNode((PyrParseNode*)(yyvsp[-7]), (PyrParseNode*)(yyvsp[-3]));
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-5]), args, (PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2413 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 73:
#line 370 "lang11d" /* yacc.c:1661  */
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
#line 2435 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 74:
#line 388 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[-3]), 0, (PyrParseNode*)(yyvsp[0]));
			}
#line 2443 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 75:
#line 393 "lang11d" /* yacc.c:1661  */
    { pushls(&generatorStack, (yyvsp[0])); pushls(&generatorStack, 1); }
#line 2449 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 76:
#line 394 "lang11d" /* yacc.c:1661  */
    {
				PyrSlot slot;
				SetSymbol(&slot, getsym("r"));
				PyrSlotNode* selectornode = newPyrSlotNode(&slot);

				PyrParseNode *block = (PyrParseNode*)newPyrBlockNode(0, 0, (PyrParseNode*)(yyvsp[-1]), false);
				PyrParseNode *blocklit = (PyrParseNode*)newPyrPushLitNode(NULL, block);
				(yyval) = (intptr_t)newPyrCallNode(selectornode, (PyrParseNode*)blocklit, 0, 0);
			}
#line 2463 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 77:
#line 403 "lang11d" /* yacc.c:1661  */
    { pushls(&generatorStack, (yyvsp[0])); pushls(&generatorStack, 2); }
#line 2469 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 78:
#line 404 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (yyvsp[-1]);
			}
#line 2477 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 79:
#line 410 "lang11d" /* yacc.c:1661  */
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
#line 2503 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 80:
#line 432 "lang11d" /* yacc.c:1661  */
    { (yyval) = (yyvsp[0]); }
#line 2509 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 81:
#line 436 "lang11d" /* yacc.c:1661  */
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
#line 2547 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 82:
#line 470 "lang11d" /* yacc.c:1661  */
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
#line 2589 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 83:
#line 508 "lang11d" /* yacc.c:1661  */
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
#line 2607 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 84:
#line 522 "lang11d" /* yacc.c:1661  */
    {
				PyrSlot slot;
				SetSymbol(&slot, getsym("if"));
				PyrSlotNode* selectornode = newPyrSlotNode(&slot);
				PyrParseNode *block = (PyrParseNode*)newPyrBlockNode(0, 0, (PyrParseNode*)(yyvsp[0]), false);
				PyrParseNode *blocklit = (PyrParseNode*)newPyrPushLitNode(NULL, block);
				PyrParseNode* args2 = (PyrParseNode*)linkNextNode((PyrParseNode*)(yyvsp[-1]), blocklit);

				(yyval) = (intptr_t)newPyrCallNode(selectornode, args2, 0, 0);
			}
#line 2622 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 85:
#line 533 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrDropNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2630 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 86:
#line 537 "lang11d" /* yacc.c:1661  */
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
#line 2657 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 93:
#line 568 "lang11d" /* yacc.c:1661  */
    {
				PyrParseNode* node = (PyrParseNode*)(yyvsp[-1]);
				node->mParens = 1;
				(yyval) = (yyvsp[-1]);
			}
#line 2667 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 94:
#line 574 "lang11d" /* yacc.c:1661  */
    {
				PyrParseNode* argnode;
				PyrSlotNode* selectornode;
				PyrSlot slot;
				argnode = (PyrParseNode*)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL);
				SetSymbol(&slot, s_envirGet);
				selectornode = newPyrSlotNode(&slot);
				(yyval) = (intptr_t)newPyrCallNode(selectornode, argnode, 0, 0);
			}
#line 2681 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 95:
#line 584 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrDynListNode(0, (PyrParseNode*)(yyvsp[-1])); }
#line 2687 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 96:
#line 586 "lang11d" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 2693 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 97:
#line 588 "lang11d" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 2699 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 98:
#line 590 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrDynDictNode((PyrParseNode*)(yyvsp[-1])); }
#line 2705 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 99:
#line 592 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushNameNode((PyrSlotNode*)(yyvsp[0])); }
#line 2711 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 100:
#line 594 "lang11d" /* yacc.c:1661  */
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
#line 2728 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 102:
#line 610 "lang11d" /* yacc.c:1661  */
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
#line 2759 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 103:
#line 637 "lang11d" /* yacc.c:1661  */
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
#line 2781 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 104:
#line 655 "lang11d" /* yacc.c:1661  */
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
#line 2810 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 105:
#line 682 "lang11d" /* yacc.c:1661  */
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
#line 2842 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 106:
#line 710 "lang11d" /* yacc.c:1661  */
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
#line 2865 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 107:
#line 729 "lang11d" /* yacc.c:1661  */
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
#line 2895 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 108:
#line 757 "lang11d" /* yacc.c:1661  */
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
#line 2926 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 109:
#line 784 "lang11d" /* yacc.c:1661  */
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
#line 2948 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 110:
#line 802 "lang11d" /* yacc.c:1661  */
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
#line 2977 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 111:
#line 827 "lang11d" /* yacc.c:1661  */
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
#line 3009 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 112:
#line 855 "lang11d" /* yacc.c:1661  */
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
#line 3032 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 113:
#line 874 "lang11d" /* yacc.c:1661  */
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
#line 3062 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 114:
#line 902 "lang11d" /* yacc.c:1661  */
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
#line 3084 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 115:
#line 921 "lang11d" /* yacc.c:1661  */
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
#line 3106 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 116:
#line 940 "lang11d" /* yacc.c:1661  */
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
#line 3126 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 117:
#line 957 "lang11d" /* yacc.c:1661  */
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
#line 3144 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 118:
#line 971 "lang11d" /* yacc.c:1661  */
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
#line 3167 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 119:
#line 992 "lang11d" /* yacc.c:1661  */
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
#line 3189 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 120:
#line 1011 "lang11d" /* yacc.c:1661  */
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
#line 3210 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 121:
#line 1029 "lang11d" /* yacc.c:1661  */
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
#line 3230 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 122:
#line 1046 "lang11d" /* yacc.c:1661  */
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
#line 3250 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 123:
#line 1062 "lang11d" /* yacc.c:1661  */
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
#line 3268 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 127:
#line 1080 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushNameNode((PyrSlotNode*)(yyvsp[0])); }
#line 3274 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 128:
#line 1082 "lang11d" /* yacc.c:1661  */
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
#line 3291 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 129:
#line 1095 "lang11d" /* yacc.c:1661  */
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
#line 3309 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 130:
#line 1109 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrBinopCallNode((PyrSlotNode*)(yyvsp[-2]),
						(PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[0]), (PyrParseNode*)(yyvsp[-1]));
			}
#line 3318 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 131:
#line 1114 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrAssignNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), 0);
			}
#line 3326 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 132:
#line 1118 "lang11d" /* yacc.c:1661  */
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
#line 3341 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 133:
#line 1129 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrSetterNode((PyrSlotNode*)(yyvsp[-2]),
						(PyrParseNode*)(yyvsp[-4]), (PyrParseNode*)(yyvsp[0]));
			}
#line 3350 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 134:
#line 1134 "lang11d" /* yacc.c:1661  */
    {
				if ((yyvsp[-3]) != 0) {
					error("Setter method called with keyword arguments.\n");
					nodePostErrorLine((PyrParseNode*)(yyvsp[-3]));
					compileErrors++;
				}
				(yyval) = (intptr_t)newPyrSetterNode((PyrSlotNode*)(yyvsp[-6]),
						(PyrParseNode*)(yyvsp[-4]), (PyrParseNode*)(yyvsp[0]));
			}
#line 3364 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 135:
#line 1144 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrMultiAssignNode((PyrMultiAssignVarListNode*)(yyvsp[-2]),
					(PyrParseNode*)(yyvsp[0]), 0);
			}
#line 3373 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 136:
#line 1149 "lang11d" /* yacc.c:1661  */
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
#line 3391 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 137:
#line 1163 "lang11d" /* yacc.c:1661  */
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
#line 3409 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 138:
#line 1178 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3415 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 139:
#line 1179 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3421 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 140:
#line 1180 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3427 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 141:
#line 1181 "lang11d" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 3433 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 143:
#line 1186 "lang11d" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrDropNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
			}
#line 3441 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 145:
#line 1194 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3447 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 146:
#line 1196 "lang11d" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 3453 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 148:
#line 1201 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3459 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 149:
#line 1203 "lang11d" /* yacc.c:1661  */
    {
					PyrParseNode* key = newPyrPushLitNode((PyrSlotNode*)(yyvsp[-1]), NULL);
					(yyval) = (intptr_t)linkNextNode(key, (PyrParseNode*)(yyvsp[0]));
				}
#line 3468 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 150:
#line 1208 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3474 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 151:
#line 1210 "lang11d" /* yacc.c:1661  */
    {
					PyrParseNode* elems;
					PyrParseNode* key = newPyrPushLitNode((PyrSlotNode*)(yyvsp[-1]), NULL);
					elems = (PyrParseNode*)linkNextNode(key, (PyrParseNode*)(yyvsp[0]));
					(yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-3]), elems);
				}
#line 3485 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 152:
#line 1217 "lang11d" /* yacc.c:1661  */
    {
					PyrParseNode* elems;
					elems = (PyrParseNode*)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
					(yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-4]), elems);
				}
#line 3495 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 154:
#line 1226 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3501 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 155:
#line 1230 "lang11d" /* yacc.c:1661  */
    { (yyval) = (yyvsp[0]); }
#line 3507 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 156:
#line 1232 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[0])); }
#line 3513 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 158:
#line 1237 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3519 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 159:
#line 1241 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushKeyArgNode((PyrSlotNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 3525 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 160:
#line 1244 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3531 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 161:
#line 1245 "lang11d" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 3537 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 162:
#line 1249 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMultiAssignVarListNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3543 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 163:
#line 1251 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMultiAssignVarListNode((PyrSlotNode*)(yyvsp[-2]), (PyrSlotNode*)(yyvsp[0])); }
#line 3549 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 165:
#line 1256 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3555 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 166:
#line 1260 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3561 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 167:
#line 1261 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3567 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 168:
#line 1262 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3573 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 169:
#line 1263 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3579 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 170:
#line 1264 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3585 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 171:
#line 1265 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3591 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 172:
#line 1266 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3597 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 173:
#line 1267 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3603 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 174:
#line 1268 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3609 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 175:
#line 1271 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3615 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 176:
#line 1274 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushNameNode((PyrSlotNode*)(yyvsp[0])); }
#line 3621 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 177:
#line 1277 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3627 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 178:
#line 1278 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3633 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 179:
#line 1279 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3639 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 180:
#line 1280 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3645 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 181:
#line 1281 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3651 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 182:
#line 1282 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3657 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 183:
#line 1283 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3663 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 184:
#line 1284 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3669 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 185:
#line 1285 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3675 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 186:
#line 1288 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3681 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 187:
#line 1289 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3687 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 188:
#line 1290 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3693 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 189:
#line 1291 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3699 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 190:
#line 1292 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3705 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 191:
#line 1293 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3711 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 192:
#line 1294 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3717 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 193:
#line 1295 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3723 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 194:
#line 1296 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3729 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 195:
#line 1297 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3735 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 196:
#line 1298 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3741 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 197:
#line 1302 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockNode((PyrArgListNode*)(yyvsp[-3]), (PyrVarListNode*)(yyvsp[-2]),
					(PyrParseNode*)(yyvsp[-1]), false); }
#line 3748 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 198:
#line 1305 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockNode((PyrArgListNode*)(yyvsp[-3]), (PyrVarListNode*)(yyvsp[-2]),
					(PyrParseNode*)(yyvsp[-1]), true); }
#line 3755 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 199:
#line 1309 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3761 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 200:
#line 1311 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 3767 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 202:
#line 1316 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 3773 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 203:
#line 1320 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarListNode((PyrVarDefNode*)(yyvsp[-1]), varLocal); }
#line 3779 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 204:
#line 1323 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3785 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 205:
#line 1325 "lang11d" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)newPyrArgListNode((PyrVarDefNode*)(yyvsp[-1]), NULL);
				}
#line 3793 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 206:
#line 1329 "lang11d" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)newPyrArgListNode((PyrVarDefNode*)(yyvsp[-3]), (PyrSlotNode*)(yyvsp[-1]));
				}
#line 3801 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 207:
#line 1333 "lang11d" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)newPyrArgListNode((PyrVarDefNode*)(yyvsp[-1]), NULL);
				}
#line 3809 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 208:
#line 1337 "lang11d" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)newPyrArgListNode((PyrVarDefNode*)(yyvsp[-3]), (PyrSlotNode*)(yyvsp[-1]));
				}
#line 3817 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 210:
#line 1344 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3823 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 211:
#line 1348 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), (yyvsp[-3])); }
#line 3829 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 212:
#line 1351 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3835 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 215:
#line 1357 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3841 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 216:
#line 1361 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[0]), NULL, 0); }
#line 3847 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 217:
#line 1363 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), 0); }
#line 3853 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 218:
#line 1365 "lang11d" /* yacc.c:1661  */
    {
					PyrParseNode* node = (PyrParseNode*)(yyvsp[-1]);
					node->mParens = 1;
					(yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-4]), node, 0);
				}
#line 3863 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 219:
#line 1372 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3869 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 222:
#line 1378 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3875 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 223:
#line 1382 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[0]), NULL, 0); }
#line 3881 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 224:
#line 1384 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), 0); }
#line 3887 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 225:
#line 1386 "lang11d" /* yacc.c:1661  */
    {
									PyrParseNode* node = (PyrParseNode*)(yyvsp[-1]);
									node->mParens = 1;
									(yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-3]), node, 0);
								}
#line 3897 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 226:
#line 1394 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3903 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 227:
#line 1396 "lang11d" /* yacc.c:1661  */
    {
					PyrParseNode* key = newPyrPushLitNode((PyrSlotNode*)(yyvsp[-1]), NULL);
					(yyval) = (intptr_t)linkNextNode(key, (PyrParseNode*)(yyvsp[0]));
				}
#line 3912 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 229:
#line 1404 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3918 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 230:
#line 1407 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3924 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 233:
#line 1413 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3930 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 234:
#line 1417 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[0]), NULL, (yyvsp[-1])); }
#line 3936 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 235:
#line 1419 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), (yyvsp[-3])); }
#line 3942 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 236:
#line 1423 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLitDictNode((PyrParseNode*)(yyvsp[-1])); }
#line 3948 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 237:
#line 1427 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3954 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 238:
#line 1429 "lang11d" /* yacc.c:1661  */
    {
					PyrParseNode* key = newPyrPushLitNode((PyrSlotNode*)(yyvsp[-1]), NULL);
					(yyval) = (intptr_t)linkNextNode(key, (PyrParseNode*)(yyvsp[0]));
				}
#line 3963 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 240:
#line 1437 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3969 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 241:
#line 1440 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3975 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 243:
#line 1447 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLitListNode(0, (PyrParseNode*)(yyvsp[-1])); }
#line 3981 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 244:
#line 1449 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLitListNode((PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1])); }
#line 3987 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 245:
#line 1453 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLitListNode(0, (PyrParseNode*)(yyvsp[-1])); }
#line 3993 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 246:
#line 1455 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLitListNode((PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1])); }
#line 3999 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 247:
#line 1458 "lang11d" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 4005 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 250:
#line 1464 "lang11d" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 4011 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 251:
#line 1467 "lang11d" /* yacc.c:1661  */
    { (yyval) = rwPrivate; }
#line 4017 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 252:
#line 1469 "lang11d" /* yacc.c:1661  */
    { (yyval) = rwReadOnly; }
#line 4023 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 253:
#line 1471 "lang11d" /* yacc.c:1661  */
    { (yyval) = rwReadWrite; }
#line 4029 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 254:
#line 1473 "lang11d" /* yacc.c:1661  */
    { (yyval) = rwWriteOnly; }
#line 4035 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 255:
#line 1476 "lang11d" /* yacc.c:1661  */
    { (yyval) = rwPrivate; }
#line 4041 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 256:
#line 1478 "lang11d" /* yacc.c:1661  */
    { (yyval) = rwReadOnly; }
#line 4047 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 257:
#line 1481 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4053 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 258:
#line 1483 "lang11d" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				node = (PyrSlotNode*)zzval;
				SetRaw(&node->mSlot, -slotRawInt(&node->mSlot));
				(yyval) = zzval;
			}
#line 4064 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 259:
#line 1491 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4070 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 260:
#line 1493 "lang11d" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				node = (PyrSlotNode*)zzval;
				SetRaw(&node->mSlot, -slotRawFloat(&node->mSlot));
				(yyval) = zzval;
			}
#line 4081 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 261:
#line 1501 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4087 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 262:
#line 1503 "lang11d" /* yacc.c:1661  */
    {
					PyrSlotNode *node;
					double intval, fracval;
					node = (PyrSlotNode*)zzval;
					intval = floor(slotRawFloat(&node->mSlot) + 0.5);
					fracval = slotRawFloat(&node->mSlot) - intval;
					SetRaw(&node->mSlot, -intval + fracval);
					(yyval) = zzval;
				}
#line 4101 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 263:
#line 1513 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4107 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 266:
#line 1519 "lang11d" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				node = (PyrSlotNode*)(yyvsp[-1]);
				SetRaw(&node->mSlot, slotRawFloat(&node->mSlot) * pi);
			}
#line 4117 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 267:
#line 1525 "lang11d" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				double ival;
				node = (PyrSlotNode*)(yyvsp[-1]);
				ival = slotRawInt(&node->mSlot);
				SetFloat(&node->mSlot, ival * pi);
			}
#line 4129 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 268:
#line 1533 "lang11d" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				node = (PyrSlotNode*)zzval;
				SetFloat(&node->mSlot, pi);
				(yyval) = zzval;
			}
#line 4140 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 269:
#line 1540 "lang11d" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				node = (PyrSlotNode*)zzval;
				SetFloat(&node->mSlot, -pi);
				(yyval) = zzval;
			}
#line 4151 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 270:
#line 1548 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4157 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 271:
#line 1549 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4163 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 272:
#line 1552 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4169 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 273:
#line 1555 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4175 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 274:
#line 1558 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4181 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 275:
#line 1561 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4187 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 276:
#line 1564 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4193 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 277:
#line 1567 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4199 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 278:
#line 1570 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4205 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 279:
#line 1573 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4211 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 280:
#line 1576 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4217 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 281:
#line 1579 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4223 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 282:
#line 1580 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4229 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 283:
#line 1581 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4235 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 284:
#line 1582 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4241 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 285:
#line 1583 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4247 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 286:
#line 1584 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4253 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 287:
#line 1585 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4259 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 288:
#line 1586 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4265 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 289:
#line 1589 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4271 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 292:
#line 1596 "lang11d" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4277 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;


#line 4281 "lang11d_tab.cpp" /* yacc.c:1661  */
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
