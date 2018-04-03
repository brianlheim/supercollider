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
#define YYLAST   1965

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  296
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  538

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
    1244,  1245,  1248,  1250,  1254,  1255,  1261,  1262,  1263,  1268,
    1269,  1273,  1274,  1275,  1276,  1277,  1278,  1279,  1280,  1283,
    1286,  1289,  1290,  1291,  1292,  1293,  1294,  1295,  1296,  1297,
    1300,  1301,  1302,  1303,  1304,  1305,  1306,  1307,  1308,  1309,
    1310,  1313,  1316,  1321,  1322,  1326,  1327,  1331,  1335,  1336,
    1340,  1344,  1348,  1354,  1355,  1359,  1363,  1364,  1367,  1368,
    1372,  1374,  1376,  1384,  1385,  1388,  1389,  1393,  1395,  1397,
    1405,  1407,  1414,  1415,  1419,  1420,  1423,  1424,  1428,  1430,
    1434,  1438,  1440,  1447,  1448,  1452,  1453,  1458,  1460,  1464,
    1466,  1470,  1471,  1474,  1475,  1479,  1480,  1482,  1484,  1488,
    1489,  1493,  1494,  1503,  1504,  1513,  1514,  1525,  1528,  1529,
    1530,  1536,  1544,  1551,  1560,  1561,  1564,  1567,  1570,  1573,
    1576,  1579,  1582,  1585,  1588,  1591,  1592,  1593,  1594,  1595,
    1596,  1597,  1598,  1601,  1604,  1605,  1608
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
  "optkeyarglist", "mavars", "mavarlist", "slotliteral", "argslotliteral",
  "pureliteral", "blockliteral", "pushname", "pushliteral", "listliteral",
  "block", "funcvardecls", "funcvardecls1", "funcvardecl", "argdecls",
  "constdeflist", "constdef", "argslotdeflist0", "argslotdeflist",
  "argslotdef", "vardeflist0", "vardeflist", "vardef", "dictslotdef",
  "dictslotlist1", "dictslotlist", "rwslotdeflist", "rwslotdef",
  "dictlit2", "litdictslotdef", "litdictslotlist1", "litdictslotlist",
  "listlit", "listlit2", "literallistc", "literallist1", "rwspec", "rspec",
  "integer", "floatr", "accidental", "pie", "floatp", "name", "classname",
  "primname", "trueobj", "falseobj", "nilobj", "ascii", "symbol", "string",
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

#define YYPACT_NINF -472

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-472)))

#define YYTABLE_NINF -221

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      67,  1089,    30,    46,    30,    -2,  -472,  -472,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,    94,  -472,  -472,  -472,
    -472,  -472,    38,  -472,   245,  1765,     5,  1401,   881,  1765,
      94,    26,  -472,  -472,  -472,  -472,  -472,    48,  -472,  -472,
    -472,   275,    50,    44,  -472,  -472,  -472,  -472,  1141,  -472,
    -472,    77,    77,  -472,  -472,  -472,   132,   191,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,    62,  -472,  -472,   158,
    -472,    93,  -472,   102,    94,    94,  -472,  -472,  -472,  -472,
    -472,   764,  -472,  1765,  1765,  -472,  -472,   100,    88,   101,
    1765,  1765,  1453,  -472,   245,  -472,  -472,  -472,  -472,  -472,
    -472,   108,    36,  1141,  -472,   154,   133,  -472,  1765,   168,
    1917,   194,  1851,   205,    39,  -472,   176,  1505,  -472,    25,
    -472,   222,  1765,  -472,  -472,  -472,  -472,  -472,  -472,  1765,
    1193,   103,  -472,  -472,  -472,  1401,   933,   103,  -472,    30,
      94,   210,  -472,    94,  1765,  1765,   246,   181,   252,    35,
    -472,    89,  1141,  -472,  -472,  1141,  1765,  -472,  1401,  -472,
    -472,  -472,  1765,   224,     0,  -472,  1765,  1765,  1765,  -472,
     229,  1401,  -472,  -472,  -472,   156,  -472,  -472,  1765,  1851,
    1817,  -472,  -472,  -472,   237,   242,    77,  -472,  -472,   250,
    -472,  -472,  -472,  -472,  -472,  -472,  1765,    94,    94,  1851,
    1765,  -472,    64,  1557,   985,   174,   192,  1765,   275,   275,
    1765,   103,   251,   255,  -472,   271,   103,   251,   255,   270,
    -472,  1765,   640,  -472,   273,  -472,  -472,  -472,   275,   278,
      94,  -472,    94,  -472,  -472,    94,  -472,   841,   276,  -472,
     284,   287,   277,  -472,   294,  1765,  -472,  -472,  1765,  1765,
    -472,  -472,   313,  -472,   307,  -472,  1765,  1245,   103,   275,
     292,   310,  -472,   295,   296,  1851,  -472,  1851,  -472,  1851,
     275,  -472,  -472,   301,   304,  1609,   323,  1765,  1765,    82,
     103,   251,   255,   270,  1765,  1037,   103,  -472,   342,  1765,
    -472,  -472,   312,  -472,   103,  1297,  -472,   309,   325,   314,
    -472,  -472,   317,   319,   325,   324,  -472,  1908,  -472,  -472,
     311,   330,   331,   244,  -472,   328,   341,  -472,  1765,    27,
    -472,  -472,  -472,    77,  -472,  -472,  -472,  -472,  -472,  -472,
    -472,  -472,  1349,  1349,  -472,  1765,  -472,  -472,   359,  1765,
     103,   251,   255,  -472,  1851,  1817,  -472,  -472,  -472,  -472,
     335,  -472,   354,   356,   343,  1765,  -472,   345,  1661,   357,
    -472,   348,   352,   355,   275,   103,   251,   255,   270,   358,
    1765,   270,     1,  -472,   103,  -472,  -472,   103,   349,   366,
      38,    38,   370,   203,   203,   361,  -472,  1870,  -472,  -472,
     365,    94,   216,   372,   369,   299,   375,  -472,  1765,  -472,
     103,   373,   380,  -472,  -472,  -472,  1765,  1765,   392,   275,
     401,   402,   393,  1765,   103,  -472,   103,  -472,   394,   397,
     399,  -472,  -472,  -472,  1765,  -472,  -472,  -472,    38,    38,
    -472,  -472,  -472,  -472,  -472,  -472,   204,  -472,    94,   213,
    -472,   223,  -472,    94,  -472,  -472,   413,  1765,  1765,  -472,
    1349,  -472,  1765,   424,  -472,  -472,   103,  -472,   275,   275,
    1765,  1765,  1765,   422,   275,  -472,  -472,   103,  -472,   103,
     275,  -472,  -472,   135,   135,   244,  -472,   203,   423,  -472,
    -472,   361,   428,  1765,   369,   369,  -472,   369,  1765,  -472,
     275,   275,   275,  1765,  -472,  -472,   135,   135,  -472,  1713,
     412,  1713,  1884,  -472,   725,  -472,   725,   369,  -472,  -472,
    -472,   369,   275,  1713,  1713,  1765,   416,  -472,   410,  -472,
     418,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,   425,
     426,  1917,  -472,  -472,  -472,  -472,  -472,  -472
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,    44,     0,     0,     2,     3,     7,   274,   261,   263,
     265,   282,   283,   281,   276,   296,     0,   280,   278,   279,
     284,   267,   208,   275,     0,     0,   208,   145,   234,     0,
       0,     0,    37,     4,    33,    92,    89,   124,   101,   126,
     125,   142,    27,    44,    88,    90,    87,   179,    44,   205,
     189,   181,   268,   269,   272,   182,   180,   127,   186,   187,
     188,   183,   185,   184,    99,    91,     0,     1,     6,    14,
       8,     0,   225,   227,   223,   216,   203,   262,   264,   266,
     273,   234,   129,     0,     0,   203,   293,   147,     0,    29,
       0,     0,     0,   285,   289,   287,   288,   290,   291,   292,
     286,     0,     0,    44,   232,    29,     0,   294,   295,     0,
      27,    94,   251,     0,   162,   164,     0,     0,   289,     0,
     295,   138,    28,   144,    34,    36,   206,   271,   270,     0,
       0,    52,    46,    49,    48,   145,     0,    61,    21,     0,
      12,     0,   207,     0,     0,     0,     0,   224,     0,    29,
     218,    31,    44,    75,    77,    44,     0,    95,    30,   146,
     149,   115,     0,     0,     0,    96,   114,     0,     0,    93,
       0,    30,   235,    98,   231,     0,    28,    45,     0,   251,
     245,   253,   200,   199,     0,    29,   190,   191,   195,     0,
     196,   197,   198,   192,   194,   193,     0,     0,     0,   251,
       0,   153,     0,     0,     0,    50,     0,     0,   143,   131,
       0,     0,    29,    29,    47,     0,    50,    29,    29,    29,
     157,     0,     0,    15,     0,    13,    16,   226,   228,     0,
       0,   209,     0,   211,    30,     0,    32,     0,     0,   204,
       0,     0,     0,   148,   150,     0,   119,    97,   120,     0,
     116,   230,     0,    35,     0,   233,     0,     0,    53,   132,
       0,     0,   243,    29,     0,     0,   247,    30,   252,   251,
     135,   163,   165,     0,     0,     0,   100,     0,     0,     0,
      50,    29,    29,    29,     0,     0,    51,    74,     0,     0,
     140,   139,   130,   155,    54,    30,   160,     0,    30,     0,
      60,    62,     0,     0,    30,     0,   159,   290,    11,    22,
       0,     0,    14,    21,   229,     0,     0,   219,     0,     0,
     221,   169,   170,   171,   172,   176,   177,   178,   173,   175,
     174,   202,     0,     0,   201,     0,   151,   121,     0,   118,
       0,    29,    29,   249,     0,    30,   246,   240,   242,   254,
       0,   248,   103,   102,     0,     0,   154,     0,     0,   128,
      66,     0,     0,     0,   133,    50,    29,    29,    29,     0,
       0,    29,    50,    58,    50,    65,   158,    50,     0,     0,
     208,   208,     0,   255,   255,   259,    17,     0,   210,   212,
       0,     0,     0,     0,    79,   180,     0,   152,   122,   117,
      56,     0,     0,   241,   244,   250,     0,     0,   104,   136,
     109,   108,     0,     0,    50,    70,    50,    71,     0,     0,
       0,   141,   156,   161,     0,    55,    64,    63,   208,   208,
     203,   203,    16,   256,   258,   257,     0,   236,     0,     0,
     260,    29,   213,     0,     9,   222,     0,     0,     0,    76,
       0,    84,     0,     0,    78,   123,    50,    59,   106,   105,
       0,     0,     0,   110,   137,    69,    67,    50,    73,    50,
     134,   203,   203,    40,    40,    21,    19,   255,   238,    18,
      20,   259,     0,     0,    79,    79,    80,    79,     0,    57,
     107,   112,   111,     0,    72,    68,    40,    40,   277,    42,
      27,    42,     0,   237,     0,   214,     0,    79,    86,    85,
      81,    79,   113,    42,    42,     0,     0,    38,    42,    41,
       0,    10,   239,   166,   167,   168,   215,    83,    82,     0,
       0,    27,    23,    39,    25,    24,    26,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -472,  -472,  -472,  -472,  -472,   462,  -472,   157,    41,  -472,
    -292,  -472,  -109,   -82,  -472,   -40,  -472,  -471,  -303,   -44,
     432,   -53,  -122,   291,  -472,    12,  -472,  -472,  -295,  -331,
    -472,  -472,  -472,  -472,  -472,  -472,    -5,  -472,  -472,    -1,
     351,  -472,  -125,   -88,  -123,   172,  -156,  -472,  -472,   -28,
    -472,   256,   225,  -472,  -472,  -166,  -472,   -67,   464,    11,
      14,  -472,    16,  -472,  -472,   264,  -472,   429,   363,   333,
    -472,  -472,   124,    32,  -472,   170,  -472,  -472,  -221,  -472,
    -148,  -472,  -472,  -472,    28,  -472,  -472,   -18,   146,    34,
     433,  -472,   259,   286,   315,   322,   368,   377,  -472,  -212,
     535,   -11,  -472
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    68,     6,   224,   141,   313,   386,
     222,   309,   123,   296,   237,    32,    33,   516,   499,   517,
      34,   286,   132,   287,    35,    36,   240,   241,   451,   393,
      37,    38,    39,    40,   101,   163,    41,   207,    42,   201,
      88,    89,   202,   213,   371,   220,   297,   113,   114,   522,
     320,   523,    44,    45,    46,   181,    47,   152,    48,   239,
      76,   441,   442,   148,   149,   150,   146,    71,    72,   104,
     105,   106,   436,   437,   182,   262,   263,   264,    50,   183,
     184,   185,   438,   443,    51,    52,    53,    54,    55,    56,
      57,   500,    58,    59,    60,    61,    62,    63,    64,   107,
     120,   121,    65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,   177,   396,   131,   137,   212,    80,   159,   125,   214,
     311,   217,    49,   219,   261,   214,   322,   109,   155,    74,
      82,   387,   248,   172,   110,    22,    87,   102,     7,     7,
     520,   260,   424,   127,   128,    83,     2,    14,    14,    49,
      85,    14,   529,   530,    75,    26,    67,    43,   218,   249,
      73,   273,    74,    84,    23,    23,  -217,   299,   166,   126,
     197,   302,   303,   170,   111,   115,   167,   235,   133,   133,
     109,   203,   112,   112,   233,   204,    80,    75,   279,   281,
     102,   283,   153,   154,   234,   168,   275,   169,   198,   160,
     161,   164,  -220,     1,   117,   379,    29,     7,   122,   348,
      21,   349,    43,   268,   358,     2,   138,   174,    73,   151,
    -220,   276,   238,   277,   126,   242,   282,   208,  -220,   486,
     236,   350,   258,    23,   209,   361,   362,    22,  -220,   359,
     156,   277,   341,   144,    87,   157,   214,   305,  -220,   228,
     186,   142,   143,   133,   229,   498,   188,    26,    16,   133,
     158,    43,   145,   205,    43,   243,    22,   244,   294,   165,
     366,   246,   368,   129,   214,   250,   251,   252,   127,   342,
     254,   501,   214,   259,   225,   311,    26,    73,   403,   261,
      22,   346,   130,   502,   173,   401,   402,   133,   139,   508,
     509,   270,   510,   513,   514,     7,     8,   367,    22,   274,
      26,   363,   292,   171,   140,   284,   257,   186,   186,   293,
     418,   419,   527,   188,   188,    22,   528,   133,    26,   175,
     306,    23,   199,   133,   285,   178,   288,   186,   133,   231,
     143,   271,   272,   188,   290,    26,   196,   135,   433,   434,
     291,   136,   289,   435,   336,   447,   448,   337,   338,    77,
      78,    79,   476,   477,   226,   174,   310,   383,   187,   384,
     385,   479,   477,   206,   315,   323,   316,   230,    21,   151,
     133,   480,   234,   232,   354,   247,   356,   357,   214,   364,
     253,   134,   134,   524,   266,   524,   420,   400,   369,   423,
     311,   267,   133,   186,   356,   186,   269,   186,   133,   188,
     295,   188,     7,   188,   298,   127,   133,    93,    86,   118,
      95,    96,    97,    98,    99,   100,   119,   390,   300,   304,
     312,   331,   334,    22,   335,   187,   187,   452,    23,   314,
     129,   394,   394,   332,   397,   339,   333,   167,   399,   343,
     344,   378,   131,    26,   345,   187,    77,   347,   351,   130,
     409,   352,   133,   119,   355,   380,   134,   412,    86,   481,
     372,   139,   134,   473,   474,   373,   395,   395,   374,   422,
     375,   190,   186,   186,   381,   377,   388,   133,   188,   188,
     389,   398,   405,   324,   133,   406,   133,   407,   413,   133,
     408,   519,   410,   428,   430,   431,   440,   455,   191,   414,
     134,   458,   459,   415,   496,   497,   416,   133,   464,   421,
     429,   187,   133,   187,   432,   187,   445,   449,   450,   470,
     454,   310,   537,   460,   456,   446,   133,   192,   133,   453,
     134,   457,   461,   462,   193,    66,   134,    69,   190,   190,
     463,   134,   471,   472,   483,   467,   484,   485,   468,   394,
     469,   487,   488,   493,   504,   490,   491,   492,   190,   506,
     176,   532,   515,   534,   116,   191,   191,    70,   133,   382,
     535,   536,   478,   475,   533,   124,   376,   482,   526,   133,
     194,   133,   507,   134,   395,   191,   215,   511,   512,   195,
     187,   187,   103,   321,   192,   192,   325,   505,   518,   317,
     518,   193,   193,   147,   255,   134,   227,   301,   439,   503,
     531,   134,   518,   518,   192,   404,     0,     0,     0,   134,
       0,   193,     0,   326,   190,     0,   190,     0,   190,     0,
       0,     0,   323,     0,   323,     0,   310,     0,   525,     0,
     525,     0,     0,     0,     0,   189,     0,   194,   194,     0,
       0,   191,   327,   191,     0,   191,   195,   195,     0,   328,
       0,     0,    90,   108,     0,   134,     0,   194,     0,     0,
       0,   360,   223,     0,     0,     0,   195,     0,     0,     0,
     192,     0,   192,     0,   192,     0,     0,   193,     0,   193,
     134,   193,     0,     0,     0,     0,     0,   134,     0,   134,
       0,     0,   134,   190,   190,   329,     0,     0,     0,     0,
       0,     0,   189,   189,   330,     0,   108,     0,     0,     0,
     134,     0,     0,     0,     0,   134,     0,     0,     0,     0,
     191,   191,   189,   194,     0,   194,     0,   194,     0,   134,
       0,   134,   195,     7,   195,     0,   195,     0,     0,     0,
     324,     0,   324,     0,     0,     0,   417,     0,     0,   192,
     192,     0,     0,   425,     0,   426,   193,   193,   427,    23,
      90,   221,    93,     0,   118,    95,    96,   307,    98,    99,
     100,   134,     0,     0,     0,   308,     0,     0,     0,     0,
       0,     0,   134,   245,   134,     0,     0,     0,   189,     0,
     189,     0,   189,     0,     0,   465,   256,   466,     0,     0,
       0,     0,   194,   194,     0,   265,     0,     0,     0,     0,
       0,   195,   195,     0,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,     0,   221,
       0,     0,    17,    18,    19,     0,     0,   489,    21,     0,
       0,     0,   116,     0,    23,     0,     0,     0,   494,    24,
     495,     0,     0,   325,     0,   325,     0,     7,     8,     9,
      10,    11,    12,    13,     0,    14,    15,   189,   189,   319,
       0,    17,    18,    19,    20,     0,    91,    21,    22,     0,
     326,     0,   326,    23,    92,     0,    93,    86,    94,    95,
      96,    97,    98,    99,   100,     0,    25,     0,    26,     0,
      27,     0,     0,     0,    81,     0,     0,    30,    31,   327,
     221,   327,     0,     0,     0,     0,   328,     0,   328,     0,
     221,     0,     0,   221,     0,     0,     0,     0,     0,   221,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,    17,    18,
      19,     0,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,   329,     0,   329,    24,     0,     0,     0,     0,
     265,   330,     0,   330,     7,     8,     9,    10,    11,    12,
      13,   318,    14,    15,    16,   319,     0,     0,    17,    18,
      19,    20,     0,    91,    21,    22,     0,     0,     0,     0,
      23,    92,     0,    93,    86,    94,    95,    96,    97,    98,
      99,   100,     0,    25,     0,    26,     0,    27,     0,     0,
       0,    81,     0,     0,    30,    31,     7,     8,     9,    10,
      11,    12,    13,     0,    14,    15,     0,     0,     0,     0,
      17,    18,    19,    20,     0,     0,    21,    22,     0,     0,
       0,     0,    23,     0,     0,     0,    86,    24,     0,     0,
     210,     0,     0,     0,     0,    25,     0,    26,     0,    27,
       0,     0,     0,    81,   216,     0,    30,    31,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    15,     0,     0,
       0,     0,    17,    18,    19,    20,     0,     0,    21,    22,
       0,     0,     0,     0,    23,     0,     0,     0,    86,    24,
       0,     0,   210,     0,     0,     0,     0,    25,     0,    26,
       0,    27,     0,     0,     0,    81,   280,     0,    30,    31,
       7,     8,     9,    10,    11,    12,    13,     0,    14,    15,
       0,     0,     0,     0,    17,    18,    19,    20,     0,     0,
      21,    22,     0,     0,     0,     0,    23,     0,     0,     0,
      86,    24,     0,     0,   210,     0,     0,     0,     0,    25,
       0,    26,     0,    27,     0,     0,     0,    81,   365,     0,
      30,    31,     7,     8,     9,    10,    11,    12,    13,     0,
      14,    15,    16,     0,     0,     0,    17,    18,    19,    20,
       0,     0,    21,    22,     0,     0,     0,     0,    23,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    26,     0,    27,     0,     0,     0,    28,
       0,    29,    30,    31,     7,     8,     9,    10,    11,    12,
      13,     0,    14,    15,    16,     0,     0,     0,    17,    18,
      19,    20,     0,     0,    21,    22,     0,     0,     0,     0,
      23,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,     0,    27,     0,     0,
       0,    81,     0,    29,    30,    31,     7,     8,     9,    10,
      11,    12,    13,     0,    14,    15,     0,     0,     0,     0,
      17,    18,    19,    20,     0,     0,    21,    22,     0,     0,
       0,     0,    23,     0,     0,     0,     0,    24,     0,     0,
     210,     0,     0,     0,     0,    25,     0,    26,     0,    27,
       0,     0,     0,    81,   211,     0,    30,    31,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    15,     0,     0,
       0,     0,    17,    18,    19,    20,     0,     0,    21,    22,
       0,     0,     0,     0,    23,     0,     0,     0,     0,    24,
       0,     0,   210,     0,     0,     0,     0,    25,     0,    26,
       0,    27,     0,     0,     0,    81,   340,     0,    30,    31,
       7,     8,     9,    10,    11,    12,    13,     0,    14,    15,
       0,     0,     0,     0,    17,    18,    19,    20,     0,     0,
      21,    22,     0,     0,     0,     0,    23,     0,     0,     0,
      86,    24,     0,     0,   370,     0,     0,     0,     0,    25,
       0,    26,     0,    27,     0,     0,     0,    81,     0,     0,
      30,    31,     7,     8,     9,    10,    11,    12,    13,     0,
      14,    15,   391,     0,     0,     0,    17,    18,    19,    20,
       0,     0,    21,    22,     0,     0,     0,     0,    23,   392,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    26,     0,    27,     0,     0,     0,    81,
       0,     0,    30,    31,     7,     8,     9,    10,    11,    12,
      13,     0,    14,    15,     0,     0,     0,     0,    17,    18,
      19,    20,     0,     0,    21,    22,     0,     0,     0,     0,
      23,     0,     0,     0,    86,    24,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,     0,    27,     0,     0,
       0,    81,     0,     0,    30,    31,     7,     8,     9,    10,
      11,    12,    13,     0,    14,    15,     0,     0,     0,     0,
      17,    18,    19,    20,     0,   162,    21,    22,     0,     0,
       0,     0,    23,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    26,     0,    27,
       0,     0,     0,    81,     0,     0,    30,    31,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    15,     0,     0,
       0,     0,    17,    18,    19,    20,     0,   200,    21,    22,
       0,     0,     0,     0,    23,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
       0,    27,     0,     0,     0,    81,     0,     0,    30,    31,
       7,     8,     9,    10,    11,    12,    13,     0,    14,    15,
       0,     0,     0,     0,    17,    18,    19,    20,     0,   278,
      21,    22,     0,     0,     0,     0,    23,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,    25,
       0,    26,     0,    27,     0,     0,     0,    81,     0,     0,
      30,    31,     7,     8,     9,    10,    11,    12,    13,     0,
      14,    15,     0,     0,     0,     0,    17,    18,    19,    20,
       0,     0,    21,    22,     0,     0,     0,     0,    23,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    26,     0,    27,   353,     0,     0,    81,
       0,     0,    30,    31,     7,     8,     9,    10,    11,    12,
      13,     0,    14,    15,     0,     0,     0,     0,    17,    18,
      19,    20,     0,     0,    21,    22,     0,     0,     0,     0,
      23,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,     0,    27,   411,     0,
       0,    81,     0,     0,    30,    31,     7,     8,     9,    10,
      11,    12,    13,     0,    14,    15,     0,     0,     0,     0,
      17,    18,    19,    20,     0,     0,    21,    22,     0,     0,
       0,     0,    23,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    26,     0,    27,
       0,     0,     0,    81,     0,   515,    30,    31,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    15,     0,     0,
       0,     0,    17,    18,    19,    20,     0,     0,    21,    22,
       0,     0,     0,     0,    23,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
       0,    27,     0,     0,     0,    81,     0,     0,    30,    31,
       7,     8,     9,    10,    11,    12,    13,     0,    14,     0,
       0,     0,     0,     0,    17,    18,    19,     0,     0,     0,
      21,     0,     0,     0,     0,     0,    23,     0,     0,     0,
      86,    24,     0,     0,     7,     8,     9,    10,    11,    12,
      13,     0,    14,   179,     0,     0,     0,   180,    17,    18,
      19,     0,     0,     7,    21,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,    24,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   179,     0,    23,
       0,   180,    93,     0,   118,    95,    96,   307,    98,    99,
     100,     7,     0,    23,     0,   444,    93,     0,   118,    95,
      96,   307,    98,    99,   100,     0,     0,     0,     0,   521,
       0,     0,     0,     0,     0,     0,     0,    23,     0,     0,
      93,     0,   118,    95,    96,    97,    98,    99,   100,    93,
      86,   118,    95,    96,    97,    98,    99,   100,   119,     0,
       0,     0,     0,     0,     0,   176
};

static const yytype_int16 yycheck[] =
{
       1,   110,   333,    56,    57,   130,    24,    89,    48,   131,
     222,   136,     1,   136,   180,   137,   237,    28,    85,    14,
      25,   313,    22,   105,    29,    24,    27,    28,     3,     3,
     501,   179,    31,    51,    52,    30,    38,    11,    11,    28,
      26,    11,   513,   514,    39,    44,     0,    48,   136,    49,
      16,   199,    14,    48,    29,    29,    21,   213,    22,    48,
      21,   217,   218,   103,    30,    31,    30,   149,    56,    57,
      81,    46,    46,    46,    39,    50,    94,    39,   203,   204,
      81,   204,    83,    84,    49,    49,    22,    51,    49,    90,
      91,    92,     3,    26,    46,   307,    52,     3,    48,   265,
      23,   267,   103,   185,    22,    38,    44,   108,    74,    75,
      21,    47,   152,    49,   103,   155,   204,   122,    29,   450,
      31,   269,   175,    29,   129,   281,   282,    24,    39,    47,
      30,    49,   257,    31,   135,    47,   258,   219,    49,   144,
     112,    48,    49,   131,   145,    10,   112,    44,    13,   137,
      49,   152,    50,   119,   155,   156,    24,   158,   211,    51,
     285,   162,   285,    31,   286,   166,   167,   168,   186,   257,
     171,   474,   294,   178,   140,   387,    44,   143,   344,   345,
      24,   263,    50,   475,    51,   341,   342,   175,    30,   484,
     485,   196,   487,   496,   497,     3,     4,   285,    24,   200,
      44,   283,   207,    49,    46,    31,    50,   179,   180,   210,
     366,   367,   507,   179,   180,    24,   511,   205,    44,    51,
     221,    29,    46,   211,    50,    31,    34,   199,   216,    48,
      49,   197,   198,   199,   206,    44,    31,    46,    35,    36,
     206,    50,    50,    40,   245,    29,    30,   248,   249,     4,
       5,     6,    48,    49,    44,   256,   222,    13,   112,    15,
      16,    48,    49,    41,   230,   237,   232,    21,    23,   235,
     258,    48,    49,    21,   275,    51,   277,   278,   400,   284,
      51,    56,    57,   504,    47,   506,   368,   340,   289,   371,
     502,    49,   280,   265,   295,   267,    46,   269,   286,   265,
      49,   267,     3,   269,    49,   323,   294,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,   318,    47,    49,
      47,    45,    45,    24,    30,   179,   180,    28,    29,    51,
      31,   332,   333,    49,   335,    22,    49,    30,   339,    47,
      30,   307,   395,    44,    49,   199,     4,    51,    47,    50,
     355,    47,   340,    41,    31,    44,   131,   358,    33,   441,
      51,    30,   137,   430,   431,    51,   332,   333,    51,   370,
      51,   112,   344,   345,    44,    51,    48,   365,   344,   345,
      39,    22,    47,   237,   372,    31,   374,    31,    31,   377,
      47,   500,    47,    44,   380,   381,    35,   398,   112,    51,
     175,   406,   407,    51,   471,   472,    51,   395,   413,    51,
      44,   265,   400,   267,    44,   269,    51,    45,    49,   424,
      45,   387,   531,    31,    51,   391,   414,   112,   416,   395,
     205,    51,    31,    31,   112,     2,   211,     4,   179,   180,
      47,   216,   428,   429,    31,    51,   447,   448,    51,   450,
      51,   452,    28,    31,    31,   460,   461,   462,   199,    31,
      48,    45,    52,    45,    31,   179,   180,     5,   456,   312,
      45,    45,   438,   432,   518,    43,   304,   443,   506,   467,
     112,   469,   483,   258,   450,   199,   135,   488,   493,   112,
     344,   345,    28,   237,   179,   180,   237,   481,   499,   235,
     501,   179,   180,    74,   171,   280,   143,   216,   384,   477,
     515,   286,   513,   514,   199,   345,    -1,    -1,    -1,   294,
      -1,   199,    -1,   237,   265,    -1,   267,    -1,   269,    -1,
      -1,    -1,   504,    -1,   506,    -1,   502,    -1,   504,    -1,
     506,    -1,    -1,    -1,    -1,   112,    -1,   179,   180,    -1,
      -1,   265,   237,   267,    -1,   269,   179,   180,    -1,   237,
      -1,    -1,    27,    28,    -1,   340,    -1,   199,    -1,    -1,
      -1,   280,   139,    -1,    -1,    -1,   199,    -1,    -1,    -1,
     265,    -1,   267,    -1,   269,    -1,    -1,   265,    -1,   267,
     365,   269,    -1,    -1,    -1,    -1,    -1,   372,    -1,   374,
      -1,    -1,   377,   344,   345,   237,    -1,    -1,    -1,    -1,
      -1,    -1,   179,   180,   237,    -1,    81,    -1,    -1,    -1,
     395,    -1,    -1,    -1,    -1,   400,    -1,    -1,    -1,    -1,
     344,   345,   199,   265,    -1,   267,    -1,   269,    -1,   414,
      -1,   416,   265,     3,   267,    -1,   269,    -1,    -1,    -1,
     504,    -1,   506,    -1,    -1,    -1,   365,    -1,    -1,   344,
     345,    -1,    -1,   372,    -1,   374,   344,   345,   377,    29,
     135,   136,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,   456,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,   467,   158,   469,    -1,    -1,    -1,   265,    -1,
     267,    -1,   269,    -1,    -1,   414,   171,   416,    -1,    -1,
      -1,    -1,   344,   345,    -1,   180,    -1,    -1,    -1,    -1,
      -1,   344,   345,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,   204,
      -1,    -1,    17,    18,    19,    -1,    -1,   456,    23,    -1,
      -1,    -1,   319,    -1,    29,    -1,    -1,    -1,   467,    34,
     469,    -1,    -1,   504,    -1,   506,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,   344,   345,    54,
      -1,    17,    18,    19,    20,    -1,    22,    23,    24,    -1,
     504,    -1,   506,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    -1,    44,    -1,
      46,    -1,    -1,    -1,    50,    -1,    -1,    53,    54,   504,
     285,   506,    -1,    -1,    -1,    -1,   504,    -1,   506,    -1,
     295,    -1,    -1,   298,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   504,    -1,   506,    34,    -1,    -1,    -1,    -1,
     345,   504,    -1,   506,     3,     4,     5,     6,     7,     8,
       9,    50,    11,    12,    13,    54,    -1,    -1,    17,    18,
      19,    20,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    -1,    44,    -1,    46,    -1,    -1,
      -1,    50,    -1,    -1,    53,    54,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    33,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      -1,    -1,    -1,    50,    51,    -1,    53,    54,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    -1,    44,
      -1,    46,    -1,    -1,    -1,    50,    51,    -1,    53,    54,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      33,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    46,    -1,    -1,    -1,    50,    51,    -1,
      53,    54,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    -1,    46,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    44,    -1,    46,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      -1,    -1,    -1,    50,    51,    -1,    53,    54,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    -1,    44,
      -1,    46,    -1,    -1,    -1,    50,    51,    -1,    53,    54,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      33,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,
      53,    54,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    29,    30,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    -1,    46,    -1,    -1,    -1,    50,
      -1,    -1,    53,    54,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    44,    -1,    46,    -1,    -1,
      -1,    50,    -1,    -1,    53,    54,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      -1,    -1,    -1,    50,    -1,    -1,    53,    54,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    22,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,    54,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,
      53,    54,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    -1,    46,    47,    -1,    -1,    50,
      -1,    -1,    53,    54,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    44,    -1,    46,    47,    -1,
      -1,    50,    -1,    -1,    53,    54,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,    54,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      33,    34,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    46,    -1,    -1,    -1,    50,    17,    18,
      19,    -1,    -1,     3,    23,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    34,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    29,
      -1,    50,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,     3,    -1,    29,    -1,    45,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    38,    56,    57,    58,    60,     3,     4,     5,
       6,     7,     8,     9,    11,    12,    13,    17,    18,    19,
      20,    23,    24,    29,    34,    42,    44,    46,    50,    52,
      53,    54,    70,    71,    75,    79,    80,    85,    86,    87,
      88,    91,    93,    94,   107,   108,   109,   111,   113,   114,
     133,   139,   140,   141,   142,   143,   144,   145,   147,   148,
     149,   150,   151,   152,   153,   157,   145,     0,    59,   145,
      60,   122,   123,   144,    14,    39,   115,     4,     5,     6,
     142,    50,    91,    30,    48,   115,    33,    94,    95,    96,
     155,    22,    30,    32,    34,    35,    36,    37,    38,    39,
      40,    89,    94,   113,   124,   125,   126,   154,   155,   156,
      91,   144,    46,   102,   103,   144,   145,    46,    34,    41,
     155,   156,    48,    67,    75,    70,   114,   142,   142,    31,
      50,    76,    77,    80,   107,    46,    50,    76,    44,    30,
      46,    62,    48,    49,    31,    50,   121,   122,   118,   119,
     120,   144,   112,    94,    94,   112,    30,    47,    49,    68,
      94,    94,    22,    90,    94,    51,    22,    30,    49,    51,
      70,    49,    68,    51,    94,    51,    48,    67,    31,    46,
      50,   110,   129,   134,   135,   136,   139,   143,   144,   145,
     147,   148,   149,   150,   151,   152,    31,    21,    49,    46,
      22,    94,    97,    46,    50,   144,    41,    92,    91,    91,
      37,    51,    97,    98,    77,    95,    51,    97,    98,    99,
     100,   155,    65,   145,    61,   144,    44,   123,    91,    94,
      21,    48,    21,    39,    49,    68,    31,    69,    70,   114,
      81,    82,    70,    94,    94,   155,    94,    51,    22,    49,
      94,    94,    94,    51,    94,   124,   155,    50,    76,    91,
     135,   110,   130,   131,   132,   155,    47,    49,    68,    46,
      91,   144,   144,   135,    94,    22,    47,    49,    22,    97,
      51,    97,    98,    99,    31,    50,    76,    78,    34,    50,
     139,   144,    91,    94,    76,    49,    68,   101,    49,   101,
      47,    78,   101,   101,    49,    68,    94,    37,    45,    66,
     144,   154,    47,    63,    51,   144,   144,   120,    50,    54,
     105,   106,   133,   139,   143,   147,   148,   149,   150,   151,
     152,    45,    49,    49,    45,    30,    94,    94,    94,    22,
      51,    97,    98,    47,    30,    49,    68,    51,   110,   110,
     135,    47,    47,    47,    94,    31,    94,    94,    22,    47,
      78,   101,   101,    68,    91,    51,    97,    98,    99,    94,
      37,    99,    51,    51,    51,    51,   100,    51,   144,   154,
      44,    44,    62,    13,    15,    16,    64,    65,    48,    39,
      94,    13,    30,    84,    94,   144,    84,    94,    22,    94,
      76,   101,   101,   110,   130,    47,    31,    31,    47,    91,
      47,    47,    94,    31,    51,    51,    51,    78,   101,   101,
      68,    51,    94,    68,    31,    78,    78,    78,    44,    44,
     115,   115,    44,    35,    36,    40,   127,   128,   137,   127,
      35,   116,   117,   138,    45,    51,   144,    29,    30,    45,
      49,    83,    28,   144,    45,    94,    51,    51,    91,    91,
      31,    31,    31,    47,    91,    78,    78,    51,    51,    51,
      91,   115,   115,   112,   112,    63,    48,    49,   144,    48,
      48,    68,   144,    31,    94,    94,    84,    94,    28,    78,
      91,    91,    91,    31,    78,    78,   112,   112,    10,    73,
     146,    73,    65,   128,    31,   117,    31,    94,    83,    83,
      83,    94,    91,    73,    73,    52,    72,    74,    94,    67,
      72,    45,   104,   106,   133,   144,   104,    83,    83,    72,
      72,    91,    45,    74,    45,    45,    45,    67
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
     101,   101,   102,   102,   103,   103,   104,   104,   104,   105,
     105,   106,   106,   106,   106,   106,   106,   106,   106,   107,
     108,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   115,   115,
     115,   115,   115,   116,   116,   117,   118,   118,   119,   119,
     120,   120,   120,   121,   121,   122,   122,   123,   123,   123,
     124,   124,   125,   125,   126,   126,   127,   127,   128,   128,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   136,   136,   137,   137,   137,   137,   138,
     138,   139,   139,   140,   140,   141,   141,   142,   143,   143,
     143,   143,   143,   143,   144,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   154,   154,   154,   154,
     154,   154,   154,   155,   156,   156,   157
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     5,     0,     2,     1,     2,     3,     0,     3,
       5,     3,     5,     1,     3,     4,     0,     1,     1,     3,
       1,     3,     5,     0,     1,     1,     3,     1,     3,     4,
       3,     2,     1,     3,     0,     2,     1,     3,     2,     4,
       3,     3,     2,     1,     3,     0,     2,     4,     5,     3,
       4,     0,     2,     1,     3,     0,     1,     1,     1,     0,
       1,     1,     2,     1,     2,     1,     2,     1,     1,     1,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
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
#line 1928 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 3:
#line 42 "lang11d.y" /* yacc.c:1661  */
    { gRootParseNode = (PyrParseNode*)(yyvsp[0]); gParserResult = 1; }
#line 1934 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 4:
#line 44 "lang11d.y" /* yacc.c:1661  */
    { gRootParseNode = (PyrParseNode*)(yyvsp[0]); gParserResult = 2; }
#line 1940 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 5:
#line 47 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 1946 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 6:
#line 49 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 1952 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 8:
#line 54 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 1958 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 9:
#line 58 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrClassNode((PyrSlotNode*)(yyvsp[-5]), (PyrSlotNode*)(yyvsp[-4]),
					(PyrVarListNode*)(yyvsp[-2]), (PyrMethodNode*)(yyvsp[-1]), 0);
				}
#line 1966 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 10:
#line 62 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrClassNode((PyrSlotNode*)(yyvsp[-8]), (PyrSlotNode*)(yyvsp[-4]),
					(PyrVarListNode*)(yyvsp[-2]), (PyrMethodNode*)(yyvsp[-1]),
					(PyrSlotNode*)(yyvsp[-6]));
				}
#line 1975 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 11:
#line 69 "lang11d.y" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)newPyrClassExtNode((PyrSlotNode*)(yyvsp[-3]), (PyrMethodNode*)(yyvsp[-1]));
				}
#line 1983 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 12:
#line 74 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 1989 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 14:
#line 78 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 1995 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 15:
#line 80 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[0]); }
#line 2001 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 16:
#line 83 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 2007 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 17:
#line 85 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 2013 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 18:
#line 89 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarListNode((PyrVarDefNode*)(yyvsp[-1]), varClass); }
#line 2019 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 19:
#line 91 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarListNode((PyrVarDefNode*)(yyvsp[-1]), varInst); }
#line 2025 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 20:
#line 93 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarListNode((PyrVarDefNode*)(yyvsp[-1]), varConst); }
#line 2031 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 21:
#line 96 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 2037 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 22:
#line 98 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 2043 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 23:
#line 102 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMethodNode((PyrSlotNode*)(yyvsp[-6]), (PyrSlotNode*)(yyvsp[-2]),
					(PyrArgListNode*)(yyvsp[-4]), (PyrVarListNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1]), 0); }
#line 2050 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 24:
#line 105 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMethodNode((PyrSlotNode*)(yyvsp[-6]), (PyrSlotNode*)(yyvsp[-2]),
					(PyrArgListNode*)(yyvsp[-4]), (PyrVarListNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1]), 1); }
#line 2057 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 25:
#line 108 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMethodNode((PyrSlotNode*)(yyvsp[-6]), (PyrSlotNode*)(yyvsp[-2]),
					(PyrArgListNode*)(yyvsp[-4]), (PyrVarListNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1]), 0); }
#line 2064 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 26:
#line 111 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMethodNode((PyrSlotNode*)(yyvsp[-6]), (PyrSlotNode*)(yyvsp[-2]),
					(PyrArgListNode*)(yyvsp[-4]), (PyrVarListNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1]), 1); }
#line 2071 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 34:
#line 129 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrDropNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 2077 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 35:
#line 133 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockNode(NULL, (PyrVarListNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[-1]), false); }
#line 2083 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 36:
#line 135 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockNode(NULL, (PyrVarListNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0]), false); }
#line 2089 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 37:
#line 137 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockNode(NULL, NULL, (PyrParseNode*)(yyvsp[0]), false); }
#line 2095 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 39:
#line 142 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrDropNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 2101 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 40:
#line 145 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 2107 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 41:
#line 147 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 2113 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 42:
#line 151 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrReturnNode(NULL); }
#line 2119 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 43:
#line 153 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrReturnNode((PyrParseNode*)(yyvsp[-1])); }
#line 2125 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 44:
#line 157 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockReturnNode(); }
#line 2131 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 45:
#line 159 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrReturnNode((PyrParseNode*)(yyvsp[-1])); }
#line 2137 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 47:
#line 164 "lang11d.y" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0]));
				}
#line 2145 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 50:
#line 173 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 2151 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 52:
#line 178 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0]), 0, 0);
			}
#line 2159 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 53:
#line 182 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), 0, 0);
			}
#line 2167 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 54:
#line 186 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-3]), NULL, NULL, (PyrParseNode*)(yyvsp[0]));
			}
#line 2175 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 55:
#line 190 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-5]), (PyrParseNode*)(yyvsp[-3]),
						(PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2184 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 56:
#line 195 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-4]), NULL, NULL, (PyrParseNode*)(yyvsp[0]));
			}
#line 2192 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 57:
#line 199 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-6]), (PyrParseNode*)(yyvsp[-3]),
						(PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2201 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2223 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2240 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 60:
#line 235 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrDynListNode((PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1])); }
#line 2246 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2261 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2276 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2291 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2308 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2333 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2346 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2359 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 68:
#line 322 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-5]), (PyrParseNode*)(yyvsp[-7]),
					(PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2368 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2385 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2409 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 71:
#line 360 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-5]), NULL, (PyrParseNode*)(yyvsp[0]));
			}
#line 2417 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 72:
#line 364 "lang11d.y" /* yacc.c:1661  */
    {
				PyrParseNode* args;
				args = linkNextNode((PyrParseNode*)(yyvsp[-7]), (PyrParseNode*)(yyvsp[-3]));
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-5]), args, (PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2427 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2449 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 74:
#line 388 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrCallNode((PyrSlotNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[-3]), 0, (PyrParseNode*)(yyvsp[0]));
			}
#line 2457 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 75:
#line 393 "lang11d.y" /* yacc.c:1661  */
    { pushls(&generatorStack, (yyvsp[0])); pushls(&generatorStack, 1); }
#line 2463 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2477 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 77:
#line 403 "lang11d.y" /* yacc.c:1661  */
    { pushls(&generatorStack, (yyvsp[0])); pushls(&generatorStack, 2); }
#line 2483 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 78:
#line 404 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (yyvsp[-1]);
			}
#line 2491 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2517 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 80:
#line 432 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[0]); }
#line 2523 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2561 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2603 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2621 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2636 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 85:
#line 533 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrDropNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0]));
			}
#line 2644 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2671 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 93:
#line 568 "lang11d.y" /* yacc.c:1661  */
    {
				PyrParseNode* node = (PyrParseNode*)(yyvsp[-1]);
				node->mParens = 1;
				(yyval) = (yyvsp[-1]);
			}
#line 2681 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2695 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 95:
#line 584 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrDynListNode(0, (PyrParseNode*)(yyvsp[-1])); }
#line 2701 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 96:
#line 586 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 2707 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 97:
#line 588 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 2713 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 98:
#line 590 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrDynDictNode((PyrParseNode*)(yyvsp[-1])); }
#line 2719 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 99:
#line 592 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushNameNode((PyrSlotNode*)(yyvsp[0])); }
#line 2725 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2742 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2773 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2795 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2824 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2856 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2879 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2909 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2940 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2962 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 2991 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3023 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3046 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3076 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3098 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3120 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3140 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3158 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3181 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3203 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3224 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3244 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3264 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3282 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 127:
#line 1080 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushNameNode((PyrSlotNode*)(yyvsp[0])); }
#line 3288 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3305 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3323 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 130:
#line 1109 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrBinopCallNode((PyrSlotNode*)(yyvsp[-2]),
						(PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[0]), (PyrParseNode*)(yyvsp[-1]));
			}
#line 3332 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 131:
#line 1114 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrAssignNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), 0);
			}
#line 3340 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3355 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 133:
#line 1129 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrSetterNode((PyrSlotNode*)(yyvsp[-2]),
						(PyrParseNode*)(yyvsp[-4]), (PyrParseNode*)(yyvsp[0]));
			}
#line 3364 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3378 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 135:
#line 1144 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrMultiAssignNode((PyrMultiAssignVarListNode*)(yyvsp[-2]),
					(PyrParseNode*)(yyvsp[0]), 0);
			}
#line 3387 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3405 "lang11d_tab.cpp" /* yacc.c:1661  */
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
#line 3423 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 138:
#line 1178 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3429 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 139:
#line 1179 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3435 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 140:
#line 1180 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3441 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 141:
#line 1181 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 3447 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 143:
#line 1186 "lang11d.y" /* yacc.c:1661  */
    {
				(yyval) = (intptr_t)newPyrDropNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
			}
#line 3455 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 145:
#line 1194 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3461 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 146:
#line 1196 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 3467 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 148:
#line 1201 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3473 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 149:
#line 1203 "lang11d.y" /* yacc.c:1661  */
    {
					PyrParseNode* key = newPyrPushLitNode((PyrSlotNode*)(yyvsp[-1]), NULL);
					(yyval) = (intptr_t)linkNextNode(key, (PyrParseNode*)(yyvsp[0]));
				}
#line 3482 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 150:
#line 1208 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3488 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 151:
#line 1210 "lang11d.y" /* yacc.c:1661  */
    {
					PyrParseNode* elems;
					PyrParseNode* key = newPyrPushLitNode((PyrSlotNode*)(yyvsp[-1]), NULL);
					elems = (PyrParseNode*)linkNextNode(key, (PyrParseNode*)(yyvsp[0]));
					(yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-3]), elems);
				}
#line 3499 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 152:
#line 1217 "lang11d.y" /* yacc.c:1661  */
    {
					PyrParseNode* elems;
					elems = (PyrParseNode*)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]));
					(yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-4]), elems);
				}
#line 3509 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 154:
#line 1226 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3515 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 155:
#line 1230 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[0]); }
#line 3521 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 156:
#line 1232 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[0])); }
#line 3527 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 158:
#line 1237 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3533 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 159:
#line 1241 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushKeyArgNode((PyrSlotNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 3539 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 160:
#line 1244 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3545 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 161:
#line 1245 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (yyvsp[-1]); }
#line 3551 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 162:
#line 1249 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMultiAssignVarListNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3557 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 163:
#line 1251 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrMultiAssignVarListNode((PyrSlotNode*)(yyvsp[-2]), (PyrSlotNode*)(yyvsp[0])); }
#line 3563 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 165:
#line 1256 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3569 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 167:
#line 1262 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3575 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 168:
#line 1263 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3581 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 170:
#line 1269 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3587 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 171:
#line 1273 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3593 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 172:
#line 1274 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3599 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 173:
#line 1275 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3605 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 174:
#line 1276 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3611 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 175:
#line 1277 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3617 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 176:
#line 1278 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3623 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 177:
#line 1279 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3629 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 178:
#line 1280 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3635 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 179:
#line 1283 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3641 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 180:
#line 1286 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushNameNode((PyrSlotNode*)(yyvsp[0])); }
#line 3647 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 181:
#line 1289 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3653 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 182:
#line 1290 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3659 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 183:
#line 1291 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3665 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 184:
#line 1292 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3671 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 185:
#line 1293 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3677 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 186:
#line 1294 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3683 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 187:
#line 1295 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3689 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 188:
#line 1296 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3695 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 189:
#line 1297 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrPushLitNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3701 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 190:
#line 1300 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3707 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 191:
#line 1301 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3713 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 192:
#line 1302 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3719 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 193:
#line 1303 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3725 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 194:
#line 1304 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3731 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 195:
#line 1305 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3737 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 196:
#line 1306 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3743 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 197:
#line 1307 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3749 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 198:
#line 1308 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode((PyrSlotNode*)(yyvsp[0]), NULL); }
#line 3755 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 199:
#line 1309 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3761 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 200:
#line 1310 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLiteralNode(NULL, (PyrParseNode*)(yyvsp[0])); }
#line 3767 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 201:
#line 1314 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockNode((PyrArgListNode*)(yyvsp[-3]), (PyrVarListNode*)(yyvsp[-2]),
					(PyrParseNode*)(yyvsp[-1]), false); }
#line 3774 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 202:
#line 1317 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrBlockNode((PyrArgListNode*)(yyvsp[-3]), (PyrVarListNode*)(yyvsp[-2]),
					(PyrParseNode*)(yyvsp[-1]), true); }
#line 3781 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 203:
#line 1321 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3787 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 204:
#line 1323 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 3793 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 206:
#line 1328 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-1]), (PyrParseNode*)(yyvsp[0])); }
#line 3799 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 207:
#line 1332 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarListNode((PyrVarDefNode*)(yyvsp[-1]), varLocal); }
#line 3805 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 208:
#line 1335 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3811 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 209:
#line 1337 "lang11d.y" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)newPyrArgListNode((PyrVarDefNode*)(yyvsp[-1]), NULL);
				}
#line 3819 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 210:
#line 1341 "lang11d.y" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)newPyrArgListNode((PyrVarDefNode*)(yyvsp[-3]), (PyrSlotNode*)(yyvsp[-1]));
				}
#line 3827 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 211:
#line 1345 "lang11d.y" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)newPyrArgListNode((PyrVarDefNode*)(yyvsp[-1]), NULL);
				}
#line 3835 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 212:
#line 1349 "lang11d.y" /* yacc.c:1661  */
    {
					(yyval) = (intptr_t)newPyrArgListNode((PyrVarDefNode*)(yyvsp[-3]), (PyrSlotNode*)(yyvsp[-1]));
				}
#line 3843 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 214:
#line 1356 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3849 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 215:
#line 1360 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), (yyvsp[-3])); }
#line 3855 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 216:
#line 1363 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3861 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 219:
#line 1369 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3867 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 220:
#line 1373 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[0]), NULL, 0); }
#line 3873 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 221:
#line 1375 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), 0); }
#line 3879 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 222:
#line 1377 "lang11d.y" /* yacc.c:1661  */
    {
					PyrParseNode* node = (PyrParseNode*)(yyvsp[-1]);
					node->mParens = 1;
					(yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-4]), node, 0);
				}
#line 3889 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 223:
#line 1384 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3895 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 226:
#line 1390 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3901 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 227:
#line 1394 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[0]), NULL, 0); }
#line 3907 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 228:
#line 1396 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), 0); }
#line 3913 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 229:
#line 1398 "lang11d.y" /* yacc.c:1661  */
    {
									PyrParseNode* node = (PyrParseNode*)(yyvsp[-1]);
									node->mParens = 1;
									(yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-3]), node, 0);
								}
#line 3923 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 230:
#line 1406 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3929 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 231:
#line 1408 "lang11d.y" /* yacc.c:1661  */
    {
					PyrParseNode* key = newPyrPushLitNode((PyrSlotNode*)(yyvsp[-1]), NULL);
					(yyval) = (intptr_t)linkNextNode(key, (PyrParseNode*)(yyvsp[0]));
				}
#line 3938 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 233:
#line 1416 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3944 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 234:
#line 1419 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 3950 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 237:
#line 1425 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3956 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 238:
#line 1429 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[0]), NULL, (yyvsp[-1])); }
#line 3962 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 239:
#line 1431 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrVarDefNode((PyrSlotNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0]), (yyvsp[-3])); }
#line 3968 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 240:
#line 1435 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLitDictNode((PyrParseNode*)(yyvsp[-1])); }
#line 3974 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 241:
#line 1439 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3980 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 242:
#line 1441 "lang11d.y" /* yacc.c:1661  */
    {
					PyrParseNode* key = newPyrPushLitNode((PyrSlotNode*)(yyvsp[-1]), NULL);
					(yyval) = (intptr_t)linkNextNode(key, (PyrParseNode*)(yyvsp[0]));
				}
#line 3989 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 244:
#line 1449 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 3995 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 245:
#line 1452 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 4001 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 247:
#line 1459 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLitListNode(0, (PyrParseNode*)(yyvsp[-1])); }
#line 4007 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 248:
#line 1461 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLitListNode((PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1])); }
#line 4013 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 249:
#line 1465 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLitListNode(0, (PyrParseNode*)(yyvsp[-1])); }
#line 4019 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 250:
#line 1467 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)newPyrLitListNode((PyrParseNode*)(yyvsp[-3]), (PyrParseNode*)(yyvsp[-1])); }
#line 4025 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 251:
#line 1470 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = 0; }
#line 4031 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 254:
#line 1476 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = (intptr_t)linkNextNode((PyrParseNode*)(yyvsp[-2]), (PyrParseNode*)(yyvsp[0])); }
#line 4037 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 255:
#line 1479 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = rwPrivate; }
#line 4043 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 256:
#line 1481 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = rwReadOnly; }
#line 4049 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 257:
#line 1483 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = rwReadWrite; }
#line 4055 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 258:
#line 1485 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = rwWriteOnly; }
#line 4061 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 259:
#line 1488 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = rwPrivate; }
#line 4067 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 260:
#line 1490 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = rwReadOnly; }
#line 4073 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 261:
#line 1493 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4079 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 262:
#line 1495 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				node = (PyrSlotNode*)zzval;
				SetRaw(&node->mSlot, -slotRawInt(&node->mSlot));
				(yyval) = zzval;
			}
#line 4090 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 263:
#line 1503 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4096 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 264:
#line 1505 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				node = (PyrSlotNode*)zzval;
				SetRaw(&node->mSlot, -slotRawFloat(&node->mSlot));
				(yyval) = zzval;
			}
#line 4107 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 265:
#line 1513 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4113 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 266:
#line 1515 "lang11d.y" /* yacc.c:1661  */
    {
					PyrSlotNode *node;
					double intval, fracval;
					node = (PyrSlotNode*)zzval;
					intval = floor(slotRawFloat(&node->mSlot) + 0.5);
					fracval = slotRawFloat(&node->mSlot) - intval;
					SetRaw(&node->mSlot, -intval + fracval);
					(yyval) = zzval;
				}
#line 4127 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 267:
#line 1525 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4133 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 270:
#line 1531 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				node = (PyrSlotNode*)(yyvsp[-1]);
				SetRaw(&node->mSlot, slotRawFloat(&node->mSlot) * pi);
			}
#line 4143 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 271:
#line 1537 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				double ival;
				node = (PyrSlotNode*)(yyvsp[-1]);
				ival = slotRawInt(&node->mSlot);
				SetFloat(&node->mSlot, ival * pi);
			}
#line 4155 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 272:
#line 1545 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				node = (PyrSlotNode*)zzval;
				SetFloat(&node->mSlot, pi);
				(yyval) = zzval;
			}
#line 4166 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 273:
#line 1552 "lang11d.y" /* yacc.c:1661  */
    {
				PyrSlotNode *node;
				node = (PyrSlotNode*)zzval;
				SetFloat(&node->mSlot, -pi);
				(yyval) = zzval;
			}
#line 4177 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 274:
#line 1560 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4183 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 275:
#line 1561 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4189 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 276:
#line 1564 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4195 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 277:
#line 1567 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4201 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 278:
#line 1570 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4207 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 279:
#line 1573 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4213 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 280:
#line 1576 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4219 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 281:
#line 1579 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4225 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 282:
#line 1582 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4231 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 283:
#line 1585 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4237 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 284:
#line 1588 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4243 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 285:
#line 1591 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4249 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 286:
#line 1592 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4255 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 287:
#line 1593 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4261 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 288:
#line 1594 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4267 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 289:
#line 1595 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4273 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 290:
#line 1596 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4279 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 291:
#line 1597 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4285 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 292:
#line 1598 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4291 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 293:
#line 1601 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4297 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;

  case 296:
#line 1608 "lang11d.y" /* yacc.c:1661  */
    { (yyval) = zzval; }
#line 4303 "lang11d_tab.cpp" /* yacc.c:1661  */
    break;


#line 4307 "lang11d_tab.cpp" /* yacc.c:1661  */
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
