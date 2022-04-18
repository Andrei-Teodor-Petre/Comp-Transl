
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

	#include <stdio.h>
	#include <stdarg.h>
	#include "symTab_new.h"

	int yylex();
	void yyerror(const char *msg);
    extern int yylineno;

	void finish()
	{
		printf("\n------------------->Valid python syntax<--------------------\n\n\n\n");
		print_symbol_table();
		exit(0);
	}



/* Line 189 of yacc.c  */
#line 92 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_identifier = 258,
     T_False = 259,
     T_True = 260,
     T_number = 261,
     Indent = 262,
     Nodent = 263,
     Dedent = 264,
     T_string = 265,
     T_print = 266,
     T_colon = 267,
     T_newLine = 268,
     T_lesserThan = 269,
     T_greaterThanEqualTo = 270,
     T_lesserThanEqualTo = 271,
     T_or = 272,
     T_and = 273,
     T_not = 274,
     T_assignOP = 275,
     T_notEqualOP = 276,
     T_equalOP = 277,
     T_greaterThan = 278,
     T_in = 279,
     T_if = 280,
     T_elif = 281,
     T_while = 282,
     T_else = 283,
     T_import = 284,
     T_break = 285,
     T_pass = 286,
     T_minus = 287,
     T_plus = 288,
     T_division = 289,
     T_multiply = 290,
     T_openParanthesis = 291,
     T_closeParanthesis = 292,
     T_EOF = 293,
     T_return = 294,
     T_openBracket = 295,
     T_closeBracket = 296,
     T_def = 297,
     T_comma = 298,
     T_List = 299,
     T_range = 300,
     T_None = 301,
     T_continue = 302
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 19 "parser.y"
char *data; int indent_depth;


/* Line 214 of yacc.c  */
#line 179 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 204 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   306

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNRULES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    12,    14,    16,    18,
      23,    26,    27,    32,    33,    35,    37,    39,    41,    43,
      45,    47,    49,    51,    53,    57,    61,    65,    69,    72,
      76,    80,    84,    88,    92,    96,   100,   104,   106,   108,
     112,   114,   116,   119,   123,   126,   128,   130,   132,   134,
     138,   142,   146,   152,   153,   161,   166,   168,   170,   172,
     174,   177,   179,   181,   186,   192,   194,   200,   204,   205,
     206,   216,   217,   223,   229,   233,   235,   240,   242,   247,
     252,   255,   256,   259,   262,   264,   265,   268,   269,   270,
     274,   275,   276,   281,   282,   286,   287,   288,   292,   293,
     297,   298,   302
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    53,    38,    -1,     6,    -1,    10,    -1,
      46,    -1,     3,    -1,    50,    -1,    52,    -1,     3,    40,
      50,    41,    -1,    13,    53,    -1,    -1,    68,    13,    54,
      53,    -1,    -1,    61,    -1,    63,    -1,    62,    -1,    60,
      -1,    65,    -1,    56,    -1,    57,    -1,    67,    -1,    64,
      -1,    51,    -1,    56,    33,    56,    -1,    56,    32,    56,
      -1,    56,    35,    56,    -1,    56,    34,    56,    -1,    32,
      56,    -1,    36,    56,    37,    -1,    58,    17,    58,    -1,
      56,    14,    56,    -1,    58,    18,    58,    -1,    56,    23,
      56,    -1,    56,    16,    56,    -1,    56,    15,    56,    -1,
      56,    24,     3,    -1,    58,    -1,    59,    -1,    56,    22,
      56,    -1,     5,    -1,     4,    -1,    19,    59,    -1,    36,
      57,    37,    -1,    29,     3,    -1,    31,    -1,    47,    -1,
      30,    -1,    39,    -1,     3,    20,    56,    -1,     3,    20,
      57,    -1,     3,    20,    76,    -1,     3,    20,    40,    90,
      41,    -1,    -1,     3,    20,    45,    66,    36,    78,    37,
      -1,    11,    36,    51,    37,    -1,    55,    -1,    69,    -1,
      73,    -1,    76,    -1,     1,    13,    -1,    70,    -1,    79,
      -1,    25,    57,    12,    80,    -1,    25,    57,    12,    80,
      71,    -1,    72,    -1,    26,    57,    12,    80,    71,    -1,
      28,    12,    80,    -1,    -1,    -1,    42,     3,    74,    36,
      75,    85,    37,    12,    80,    -1,    -1,     3,    77,    36,
      90,    37,    -1,     6,    43,     6,    43,     6,    -1,     6,
      43,     6,    -1,     6,    -1,    27,    57,    12,    80,    -1,
      55,    -1,    13,     7,    68,    81,    -1,    13,     8,    68,
      81,    -1,    13,    83,    -1,    -1,    82,    71,    -1,     9,
      68,    -1,     9,    -1,    -1,    84,    68,    -1,    -1,    -1,
       3,    86,    87,    -1,    -1,    -1,    43,     3,    88,    87,
      -1,    -1,    43,    51,    89,    -1,    -1,    -1,     3,    91,
      89,    -1,    -1,     6,    92,    89,    -1,    -1,    10,    93,
      89,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    33,    35,    36,    37,    39,    40,    41,    44,
      46,    46,    46,    46,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    58,    59,    60,    61,    62,    63,    64,
      67,    68,    69,    70,    71,    72,    73,    74,    76,    77,
      78,    79,    81,    82,    84,    85,    86,    87,    88,    90,
      91,    92,    93,    94,    94,    96,    98,    99,   100,   101,
     102,   104,   105,   108,   109,   111,   112,   114,   116,   116,
     116,   118,   118,   120,   121,   122,   124,   126,   127,   129,
     130,   131,   131,   133,   134,   135,   135,   136,   138,   138,
     138,   140,   140,   140,   142,   142,   144,   144,   144,   144,
     144,   144,   144
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_identifier", "T_False", "T_True",
  "T_number", "Indent", "Nodent", "Dedent", "T_string", "T_print",
  "T_colon", "T_newLine", "T_lesserThan", "T_greaterThanEqualTo",
  "T_lesserThanEqualTo", "T_or", "T_and", "T_not", "T_assignOP",
  "T_notEqualOP", "T_equalOP", "T_greaterThan", "T_in", "T_if", "T_elif",
  "T_while", "T_else", "T_import", "T_break", "T_pass", "T_minus",
  "T_plus", "T_division", "T_multiply", "T_openParanthesis",
  "T_closeParanthesis", "T_EOF", "T_return", "T_openBracket",
  "T_closeBracket", "T_def", "T_comma", "T_List", "T_range", "T_None",
  "T_continue", "$accept", "Start", "constant", "term", "list_index",
  "StartParse", "$@1", "basic_stmt", "arith_exp", "bool_exp", "bool_term",
  "bool_factor", "import_stmt", "pass_stmt", "continue_stmt", "break_stmt",
  "return_stmt", "assign_stmt", "$@2", "print_stmt", "finalStatements",
  "cmpd_stmt", "if_stmt", "elif_stmts", "else_stmt", "func_def", "$@3",
  "$@4", "func_call", "$@5", "range_args", "while_stmt", "start_suite",
  "suite", "$@6", "end_suite", "$@7", "param", "$@8", "params", "$@9",
  "list_element", "list_elements", "$@10", "$@11", "$@12", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    51,    51,    51,    52,
      53,    54,    53,    53,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    56,    56,    56,    56,    56,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    58,    58,
      58,    58,    59,    59,    60,    61,    62,    63,    64,    65,
      65,    65,    65,    66,    65,    67,    68,    68,    68,    68,
      68,    69,    69,    70,    70,    71,    71,    72,    74,    75,
      73,    77,    76,    78,    78,    78,    79,    80,    80,    81,
      81,    82,    81,    83,    83,    84,    83,    83,    86,    85,
      85,    88,    87,    87,    89,    89,    91,    90,    92,    90,
      93,    90,    90
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     4,
       2,     0,     4,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       1,     1,     2,     3,     2,     1,     1,     1,     1,     3,
       3,     3,     5,     0,     7,     4,     1,     1,     1,     1,
       2,     1,     1,     4,     5,     1,     5,     3,     0,     0,
       9,     0,     5,     5,     3,     1,     4,     1,     4,     4,
       2,     0,     2,     2,     1,     0,     2,     0,     0,     3,
       0,     0,     4,     0,     3,     0,     0,     3,     0,     3,
       0,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     6,    41,    40,     3,     4,     0,     0,     0,
       0,     0,     0,    47,    45,     0,     0,    48,     0,     5,
      46,     0,     7,    23,     8,     0,    56,    19,    20,    37,
      38,    17,    14,    16,    15,    22,    18,    21,     0,    57,
      61,    58,    59,    62,    60,     0,     0,     0,     0,    10,
       0,    42,     6,     0,     0,     0,    44,     0,    28,     0,
       0,    68,     1,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     6,   102,    53,
      49,    50,    51,     0,   102,     0,     0,     0,     0,    29,
      43,     0,    31,    35,    34,    39,    33,    36,    25,    24,
      27,    26,     0,    30,    32,     0,    96,    98,   100,     0,
       0,     9,     0,    55,     6,     0,    77,    63,    76,    69,
      12,    95,    95,    95,    52,     0,    72,     0,     0,     0,
      64,    65,    90,     0,    97,    99,   101,    75,     0,    81,
       0,     0,    88,     0,    95,     0,    54,    85,    78,     0,
       0,    67,    93,     0,    94,    74,     0,     0,    80,     0,
      82,     0,     0,    89,     0,     0,    81,    83,    86,    66,
      91,    70,    73,    79,    93,    92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,    23,    24,    25,   105,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,   110,    37,
      38,    39,    40,   130,   131,    41,    91,   132,    42,    47,
     138,    43,   117,   148,   149,   158,   159,   143,   152,   163,
     174,   134,   109,   121,   122,   123
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -119
static const yytype_int16 yypact[] =
{
     118,     2,    48,  -119,  -119,  -119,  -119,    16,   118,    17,
      13,    13,    41,  -119,  -119,   106,    13,  -119,    74,  -119,
    -119,    83,  -119,  -119,  -119,    64,  -119,   271,  -119,     8,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,    95,  -119,
    -119,  -119,  -119,  -119,  -119,   228,     4,    75,    24,  -119,
      13,  -119,    73,   271,   105,   113,  -119,   106,    51,   247,
      89,  -119,  -119,  -119,   106,   106,   106,   106,   106,   129,
     106,   106,   106,   106,    13,    13,  -119,   -16,   124,  -119,
     271,  -119,  -119,    92,   124,    98,   210,   210,   154,  -119,
    -119,   100,   192,   192,   192,   192,   192,  -119,    51,    51,
    -119,  -119,   145,  -119,  -119,   118,  -119,  -119,  -119,    99,
     103,  -119,   104,  -119,    11,   137,  -119,    54,  -119,  -119,
    -119,   108,   108,   108,  -119,   140,  -119,   165,    13,   141,
    -119,  -119,   152,    24,  -119,  -119,  -119,   115,   122,   148,
     150,   210,  -119,   126,   108,   166,  -119,    20,  -119,    54,
     210,  -119,   130,   162,  -119,   138,   165,    68,  -119,   165,
    -119,    54,   179,  -119,   210,   177,   148,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,   130,  -119
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,   139,   -41,  -119,    -4,  -119,   -75,   -10,    -8,
      31,   184,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
    -118,  -119,  -119,   -58,  -119,  -119,  -119,  -119,   153,  -119,
    -119,  -119,   -74,    33,  -119,  -119,  -119,  -119,  -119,    26,
    -119,  -101,   119,  -119,  -119,  -119
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -88
static const yytype_int16 yytable[] =
{
      53,    53,    54,    55,    49,    58,    59,    85,    60,   139,
       5,   116,   116,   118,     6,    44,    52,     3,     4,     5,
     -71,   135,   136,     6,    46,    74,    75,    52,   156,   157,
       5,    45,     9,   -87,     6,    80,     9,    81,   166,   167,
      53,   168,    60,   154,    56,    15,   -87,    88,   -87,    16,
      19,    46,    48,    50,    92,    93,    94,    95,    96,    19,
      98,    99,   100,   101,   102,   102,   116,   151,    45,     1,
      19,     2,     3,     4,     5,   116,   161,    61,     6,     7,
     128,   -84,   129,    62,   -71,    72,    73,     9,    46,   116,
     171,   160,   144,    10,   -84,    11,   -84,    12,    13,    14,
      15,   120,    63,   169,    16,   103,   104,    17,    76,    52,
      18,    84,     5,    46,    19,    20,     6,    86,    53,     1,
     140,     2,     3,     4,     5,    87,    90,   106,     6,     7,
     107,     8,    97,   111,   108,   113,   119,     9,    15,   125,
     124,   126,    57,    10,   127,    11,   137,    12,    13,    14,
      15,   133,    19,   141,    16,   142,   -13,    17,   145,   146,
      18,   147,   150,   153,    19,    20,     1,    67,     2,     3,
       4,     5,   155,   162,   164,     6,     7,    70,    71,    72,
      73,   165,   170,   172,     9,    83,    70,    71,    72,    73,
      10,    89,    11,    51,    12,    13,    14,    15,    82,   173,
     175,    16,     0,   112,    17,     0,     0,    18,     0,     0,
       0,    19,    20,   114,     3,     4,     5,     0,     0,     0,
       6,     7,     0,   115,    70,    71,    72,    73,     0,     9,
       0,    77,     3,     4,     5,     0,     0,     0,     6,    12,
      13,    14,    15,     0,     0,     0,    16,     9,     0,    17,
       0,     0,     0,     0,     0,     0,    19,    20,     0,     0,
      15,    64,    65,    66,    16,     0,     0,     0,    78,    67,
      68,    69,     0,    79,    19,     0,     0,     0,     0,    70,
      71,    72,    73,     0,    89,    64,    65,    66,     0,     0,
       0,     0,     0,    67,    68,    69,     0,     0,     0,     0,
       0,     0,     0,    70,    71,    72,    73
};

static const yytype_int16 yycheck[] =
{
      10,    11,    10,    11,     8,    15,    16,    48,    16,   127,
       6,    86,    87,    87,    10,    13,     3,     4,     5,     6,
      36,   122,   123,    10,    40,    17,    18,     3,     8,     9,
       6,    20,    19,    13,    10,    45,    19,    45,   156,   157,
      50,   159,    50,   144,     3,    32,    26,    57,    28,    36,
      46,    40,    36,    36,    64,    65,    66,    67,    68,    46,
      70,    71,    72,    73,    74,    75,   141,   141,    20,     1,
      46,     3,     4,     5,     6,   150,   150,     3,    10,    11,
      26,    13,    28,     0,    36,    34,    35,    19,    40,   164,
     164,   149,   133,    25,    26,    27,    28,    29,    30,    31,
      32,   105,    38,   161,    36,    74,    75,    39,    13,     3,
      42,    36,     6,    40,    46,    47,    10,    12,   128,     1,
     128,     3,     4,     5,     6,    12,    37,     3,    10,    11,
       6,    13,     3,    41,    10,    37,    36,    19,    32,    36,
      41,    37,    36,    25,     7,    27,     6,    29,    30,    31,
      32,    43,    46,    12,    36,     3,    38,    39,    43,    37,
      42,    13,    12,    37,    46,    47,     1,    22,     3,     4,
       5,     6,     6,    43,    12,    10,    11,    32,    33,    34,
      35,    43,     3,     6,    19,    46,    32,    33,    34,    35,
      25,    37,    27,     9,    29,    30,    31,    32,    45,   166,
     174,    36,    -1,    84,    39,    -1,    -1,    42,    -1,    -1,
      -1,    46,    47,     3,     4,     5,     6,    -1,    -1,    -1,
      10,    11,    -1,    13,    32,    33,    34,    35,    -1,    19,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    10,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    19,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      32,    14,    15,    16,    36,    -1,    -1,    -1,    40,    22,
      23,    24,    -1,    45,    46,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    -1,    37,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    10,    11,    13,    19,
      25,    27,    29,    30,    31,    32,    36,    39,    42,    46,
      47,    49,    50,    51,    52,    53,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    67,    68,    69,
      70,    73,    76,    79,    13,    20,    40,    77,    36,    53,
      36,    59,     3,    56,    57,    57,     3,    36,    56,    56,
      57,     3,     0,    38,    14,    15,    16,    22,    23,    24,
      32,    33,    34,    35,    17,    18,    13,     3,    40,    45,
      56,    57,    76,    50,    36,    51,    12,    12,    56,    37,
      37,    74,    56,    56,    56,    56,    56,     3,    56,    56,
      56,    56,    56,    58,    58,    54,     3,     6,    10,    90,
      66,    41,    90,    37,     3,    13,    55,    80,    80,    36,
      53,    91,    92,    93,    41,    36,    37,     7,    26,    28,
      71,    72,    75,    43,    89,    89,    89,     6,    78,    68,
      57,    12,     3,    85,    51,    43,    37,    13,    81,    82,
      12,    80,    86,    37,    89,     6,     8,     9,    83,    84,
      71,    80,    43,    87,    12,    43,    68,    68,    68,    71,
       3,    80,     6,    81,    88,    87
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 33 "parser.y"
    {finish();;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 35 "parser.y"
    {appned_token("Constant", (yyvsp[(1) - (1)].data), (yylsp[(1) - (1)]).first_line, strlen((yyvsp[(1) - (1)].data)));;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 36 "parser.y"
    {appned_token("Constant", (yyvsp[(1) - (1)].data), (yylsp[(1) - (1)]).first_line, strlen((yyvsp[(1) - (1)].data)));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 37 "parser.y"
    {appned_token("Constant", "None", (yylsp[(1) - (1)]).first_line, strlen((yyvsp[(1) - (1)].data)));;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 39 "parser.y"
    {check_scope((yyvsp[(1) - (1)].data), (yylsp[(1) - (1)]).first_line); appned_token("Identifier", (yyvsp[(1) - (1)].data), (yylsp[(1) - (1)]).first_line, strlen((yyvsp[(1) - (1)].data)));;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 44 "parser.y"
    {check_scope((yyvsp[(1) - (4)].data), (yylsp[(1) - (4)]).first_line); is_iter((yyvsp[(1) - (4)].data), (yylsp[(1) - (4)]).first_line);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 46 "parser.y"
    {reset_depth();;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    {appned_token("Constant", "True", (yylsp[(1) - (1)]).first_line, strlen((yyvsp[(1) - (1)].data)));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 79 "parser.y"
    {appned_token("Constant", "False", (yylsp[(1) - (1)]).first_line, strlen((yyvsp[(1) - (1)].data)));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    {appned_token("Package name", (yyvsp[(2) - (2)].data), (yylsp[(2) - (2)]).first_line, strlen((yyvsp[(2) - (2)].data)));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 90 "parser.y"
    {appned_token("Identifier", (yyvsp[(1) - (3)].data), (yylsp[(1) - (3)]).first_line, strlen((yyvsp[(1) - (3)].data)));;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    {appned_token("Identifier", (yyvsp[(1) - (3)].data), (yylsp[(1) - (3)]).first_line, strlen((yyvsp[(1) - (3)].data)));;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    {appned_token("Identifier", (yyvsp[(1) - (3)].data), (yylsp[(1) - (3)]).first_line, strlen((yyvsp[(1) - (3)].data)));;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    {appned_token("List identifier", (yyvsp[(1) - (5)].data), (yylsp[(1) - (5)]).first_line, strlen((yyvsp[(1) - (5)].data)));;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    {appned_token("List identifier", (yyvsp[(1) - (3)].data), (yylsp[(1) - (3)]).first_line, strlen((yyvsp[(1) - (3)].data)));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    {yyerrok; yyclearin;;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    {appned_token("Func_Name", (yyvsp[(2) - (2)].data), (yylsp[(2) - (2)]).first_line, strlen((yyvsp[(2) - (2)].data)));;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    {flag = 1; func_no++;;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    {appned_token("Func_Name", (yyvsp[(1) - (1)].data), (yylsp[(1) - (1)]).first_line, strlen((yyvsp[(1) - (1)].data)));;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 120 "parser.y"
    {appned_token("Constant", (yyvsp[(1) - (5)].data), (yylsp[(1) - (5)]).first_line, strlen((yyvsp[(1) - (5)].data))); appned_token("Constant", (yyvsp[(3) - (5)].data), (yylsp[(3) - (5)]).first_line, strlen((yyvsp[(3) - (5)].data))); appned_token("Constant", (yyvsp[(5) - (5)].data), (yylsp[(5) - (5)]).first_line, strlen((yyvsp[(5) - (5)].data)));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    {appned_token("Constant", (yyvsp[(1) - (3)].data), (yylsp[(1) - (3)]).first_line, strlen((yyvsp[(1) - (3)].data))); appned_token("Constant", (yyvsp[(3) - (3)].data), (yylsp[(3) - (3)]).first_line, strlen((yyvsp[(3) - (3)].data)));;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {appned_token("Constant", (yyvsp[(1) - (1)].data), (yylsp[(1) - (1)]).first_line, strlen((yyvsp[(1) - (1)].data)));;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 131 "parser.y"
    {reset_depth();;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    {flag = 0; cur_scope = 0;reset_depth();;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 136 "parser.y"
    {reset_depth();;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 138 "parser.y"
    {appned_token("Identifier", (yyvsp[(1) - (1)].data), (yylsp[(1) - (1)]).first_line, strlen((yyvsp[(1) - (1)].data)));;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 140 "parser.y"
    {appned_token("Identifier", (yyvsp[(2) - (2)].data), (yylsp[(1) - (2)]).first_line, strlen((yyvsp[(2) - (2)].data)));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    {appned_token("Identifier", (yyvsp[(1) - (1)].data), (yylsp[(1) - (1)]).first_line, strlen((yyvsp[(1) - (1)].data)));;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    {appned_token("Constant", (yyvsp[(1) - (1)].data), (yylsp[(1) - (1)]).first_line, strlen((yyvsp[(1) - (1)].data)));;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    {appned_token("Constant", (yyvsp[(1) - (1)].data), (yylsp[(1) - (1)]).first_line, strlen((yyvsp[(1) - (1)].data)));;}
    break;



/* Line 1455 of yacc.c  */
#line 1841 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 147 "parser.y"


void yyerror(const char *msg)
{
	printf("\nSyntax Error at Line %d, Column : %d\n",  yylineno, yylloc.last_column);
	exit(0);
}

int main()
{
    init_hash_table();
	yyparse();
	return 0;
}

