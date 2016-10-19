/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"

#include <memory>
#include  <iostream>
#include <string>

int yyerror(char *s);
int yylex(void);



#include "..\AbstractTreeGenerator\AllNodes.h"

using namespace AbstractTreeGenerator;
using namespace std;


void DebugOutput(const std::string& s){
	std::cout << s << std::endl;
}

/* Line 371 of yacc.c  */
#line 89 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "syntatic.h".  */
#ifndef YY_YY_C_PROJECTS_COMPILERTHEORY_MINIJAVACOMPILER_LEXICPARSER_SYNTATIC_H_INCLUDED
# define YY_YY_C_PROJECTS_COMPILERTHEORY_MINIJAVACOMPILER_LEXICPARSER_SYNTATIC_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_NUM = 258,
     T_ID = 259,
     T_class = 260,
     T_public = 261,
     T_private = 262,
     T_static = 263,
     T_main = 264,
     T_extends = 265,
     T_return = 266,
     T_new = 267,
     T_void = 268,
     T_int = 269,
     T_boolean = 270,
     T_string = 271,
     T_dot = 272,
     T_else = 273,
     T_star = 274,
     T_lparen = 275,
     T_rparen = 276,
     T_lbrace = 277,
     T_rbrace = 278,
     T_lbracket = 279,
     T_rbracket = 280,
     T_if = 281,
     T_while = 282,
     T_sop = 283,
     T_length = 284,
     T_true = 285,
     T_false = 286,
     T_this = 287,
     T_equal = 288,
     T_and = 289,
     T_less = 290,
     T_plus = 291,
     T_minus = 292,
     T_times = 293,
     T_divide = 294,
     T_mod = 295,
     T_or = 296,
     T_semi = 297,
     T_comma = 298,
     T_not = 299
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 22 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"

	int int_val;
	string str_val;
	shared_ptr<CProgram> program;
	shared_ptr<CMainClass> mainClass;
	shared_ptr<CClassDeclarationList> classDeclarationList;
	shared_ptr<CClassDeclaration> classDeclaration;
	shared_ptr<CClassExtend> classExtend;
	shared_ptr<CVarDeclarationList> varDeclarationList;
	shared_ptr<CVarDeclaration> varDeclaration;
	shared_ptr<CMethodDeclarationList> methodDeclarationList;
	shared_ptr<CMethodDeclaration> methodDeclaration;
	shared_ptr<CType> type;
	shared_ptr<CExpressionList> expressionList;
	shared_ptr<IExpression> expression;
	shared_ptr<CStatementList> statementList;
	shared_ptr<IStatement> statement;
	shared_ptr<CArgumentList> argumentList;
	shared_ptr<CArgument> argument;


/* Line 387 of yacc.c  */
#line 198 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_C_PROJECTS_COMPILERTHEORY_MINIJAVACOMPILER_LEXICPARSER_SYNTATIC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 226 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.cpp"

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   340

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNRULES -- Number of states.  */
#define YYNSTATES  145

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    26,    27,    30,    38,    39,
      44,    45,    48,    52,    53,    56,    70,    71,    73,    77,
      80,    84,    86,    88,    90,    91,    94,    98,   106,   112,
     118,   123,   131,   135,   139,   143,   147,   151,   155,   159,
     163,   168,   172,   179,   181,   183,   185,   187,   189,   195,
     200,   203,   207,   208,   212,   214
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    47,    -1,    48,    49,    -1,     5,    63,
      22,     6,     8,    13,     9,    20,    16,    24,    25,    63,
      21,    22,    60,    23,    23,    -1,    -1,    50,    49,    -1,
       5,    63,    51,    22,    52,    54,    23,    -1,    -1,    20,
      10,    63,    21,    -1,    -1,    53,    52,    -1,    58,    63,
      42,    -1,    -1,    55,    54,    -1,     6,    58,    63,    20,
      56,    21,    22,    52,    59,    11,    61,    42,    23,    -1,
      -1,    57,    -1,    57,    43,    56,    -1,    58,    63,    -1,
      14,    24,    25,    -1,    15,    -1,    14,    -1,    63,    -1,
      -1,    60,    59,    -1,    22,    59,    23,    -1,    26,    20,
      61,    21,    60,    18,    60,    -1,    27,    20,    61,    21,
      60,    -1,    28,    20,    61,    21,    42,    -1,    63,    33,
      61,    42,    -1,    63,    24,    61,    25,    33,    61,    42,
      -1,    61,    34,    61,    -1,    61,    35,    61,    -1,    61,
      36,    61,    -1,    61,    37,    61,    -1,    61,    19,    61,
      -1,    61,    39,    61,    -1,    61,    40,    61,    -1,    61,
      41,    61,    -1,    61,    24,    61,    25,    -1,    61,    17,
      29,    -1,    61,    17,    63,    20,    62,    21,    -1,     3,
      -1,    30,    -1,    31,    -1,    63,    -1,    32,    -1,    12,
      14,    24,    61,    25,    -1,    12,    63,    20,    21,    -1,
      44,    61,    -1,    20,    61,    21,    -1,    -1,    61,    43,
      62,    -1,    61,    -1,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    75,    80,    88,    89,    94,   102,   103,
     108,   109,   114,   119,   120,   125,   131,   132,   136,   141,
     146,   149,   152,   155,   160,   161,   166,   170,   174,   178,
     182,   186,   191,   195,   199,   203,   207,   211,   215,   219,
     223,   227,   231,   235,   239,   242,   245,   249,   253,   257,
     261,   265,   270,   271,   275,   280
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_NUM", "T_ID", "T_class", "T_public",
  "T_private", "T_static", "T_main", "T_extends", "T_return", "T_new",
  "T_void", "T_int", "T_boolean", "T_string", "T_dot", "T_else", "T_star",
  "T_lparen", "T_rparen", "T_lbrace", "T_rbrace", "T_lbracket",
  "T_rbracket", "T_if", "T_while", "T_sop", "T_length", "T_true",
  "T_false", "T_this", "T_equal", "T_and", "T_less", "T_plus", "T_minus",
  "T_times", "T_divide", "T_mod", "T_or", "T_semi", "T_comma", "T_not",
  "$accept", "input", "MainProgram", "MainClass", "ClassDeclarationList",
  "ClassDeclaration", "ClassExtend", "VarDeclarationList",
  "VarDeclaration", "MethodDeclarationList", "MethodDeclaration",
  "ArgumentList", "Argument", "Type", "StatementList", "Statement",
  "Expression", "ExpressionList", "Identifier", YY_NULL
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
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    48,    49,    49,    50,    51,    51,
      52,    52,    53,    54,    54,    55,    56,    56,    56,    57,
      58,    58,    58,    58,    59,    59,    60,    60,    60,    60,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    62,    62,    62,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,    17,     0,     2,     7,     0,     4,
       0,     2,     3,     0,     2,    13,     0,     1,     3,     2,
       3,     1,     1,     1,     0,     2,     3,     7,     5,     5,
       4,     7,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     3,     6,     1,     1,     1,     1,     1,     5,     4,
       2,     3,     0,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     5,    55,     0,     1,     0,     3,
       5,     0,     8,     6,     0,     0,     0,     0,     0,    10,
       0,     0,    22,    21,    13,    10,     0,    23,     0,     9,
       0,     0,     0,    13,    11,     0,     0,    20,     0,     7,
      14,    12,     0,     0,     0,    16,     0,     0,    17,     0,
       0,     0,    16,    19,     0,    10,    18,     0,    24,    24,
       0,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,    43,     0,     0,
      44,    45,    47,     0,     0,    46,     0,     0,     4,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,     0,     0,    51,    41,     0,    36,     0,     0,
      32,    33,    34,    35,    37,    38,    39,    28,    29,     0,
      15,     0,    49,    52,     0,    40,     0,    48,    54,     0,
      27,    31,    52,    42,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     9,    10,    16,    24,    25,    32,
      33,    47,    48,    26,    65,    66,   138,   139,    85
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -56
static const yytype_int16 yypact[] =
{
       6,    12,    10,   -56,    21,   -56,    14,   -56,    12,   -56,
      21,    22,     7,   -56,    30,    29,    18,    28,    12,     5,
      38,    32,    26,   -56,    49,     5,    12,   -56,    39,   -56,
      35,     5,    40,    49,   -56,    19,    46,   -56,    12,   -56,
     -56,   -56,    42,    44,    43,     5,    12,    48,    27,    12,
      53,    54,     5,   -56,    56,     5,   -56,    45,    45,    45,
      55,    60,    64,    65,   -21,    78,    45,    67,     2,     2,
       2,    68,     2,     2,     2,   -56,   -56,   -56,     9,     2,
     -56,   -56,   -56,     2,   173,   -56,   198,   206,   -56,   231,
     129,   138,    69,    74,   240,   299,     0,     2,    45,     2,
       2,     2,     2,     2,     2,     2,     2,    45,    57,    70,
     -56,    75,     2,    79,   -56,   -56,    81,   299,    84,   265,
     299,   299,   299,   299,   299,   299,   299,   -56,   -56,     2,
     -56,   290,   -56,     2,    45,   -56,   164,   -56,   104,    83,
     -56,   -56,     2,   -56,   -56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -56,   -56,   -56,   -56,    95,   -56,   -56,   -24,   -56,    76,
     -56,    59,   -56,   -10,   -51,   -55,    13,   -35,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       6,    34,    63,    72,     5,    77,     5,    12,    67,     5,
       7,     1,    73,     5,    78,    75,     5,    21,    27,    22,
      23,    38,    79,    92,    27,    35,     8,    15,    14,   115,
      27,    58,    80,    81,    82,    49,    11,    43,    17,    18,
      19,    20,    49,   118,    27,    50,    83,    28,    53,     5,
      30,    27,   127,    29,    27,    31,    64,    64,    64,    36,
      37,    41,    42,    39,    45,    64,    44,    59,    46,    51,
      52,    60,    61,    62,    54,    68,    55,    93,    57,   140,
      69,    84,    86,    87,    70,    89,    90,    91,    71,    74,
      76,    88,    94,   112,   113,   116,    95,    64,   130,   128,
     132,   133,   134,   129,   143,    13,    64,   144,     0,    40,
     117,    56,   119,   120,   121,   122,   123,   124,   125,   126,
       0,    96,     0,    97,     0,   131,     0,     0,    99,     0,
       0,     0,     0,    64,     0,     0,     0,     0,   100,   101,
     102,   103,   136,   104,   105,   106,    96,   142,    97,     0,
       0,     0,     0,    99,     0,    96,     0,    97,     0,     0,
       0,     0,    99,   100,   101,   102,   103,     0,   104,   105,
     106,   110,   100,   101,   102,   103,     0,   104,   105,   106,
     111,    96,     0,    97,     0,     0,     0,     0,    99,     0,
      96,     0,    97,     0,    98,     0,     0,    99,   100,   101,
     102,   103,     0,   104,   105,   106,   141,   100,   101,   102,
     103,     0,   104,   105,   106,    96,     0,    97,     0,   107,
       0,     0,    99,    96,     0,    97,     0,   108,     0,     0,
      99,     0,   100,   101,   102,   103,     0,   104,   105,   106,
     100,   101,   102,   103,     0,   104,   105,   106,    96,     0,
      97,     0,     0,     0,     0,    99,   109,    96,     0,    97,
       0,   114,     0,     0,    99,   100,   101,   102,   103,     0,
     104,   105,   106,     0,   100,   101,   102,   103,     0,   104,
     105,   106,    96,     0,    97,     0,     0,     0,     0,    99,
     135,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,   102,   103,     0,   104,   105,   106,    96,     0,    97,
       0,     0,     0,     0,    99,   137,    96,     0,    97,     0,
       0,     0,     0,    99,   100,   101,   102,   103,     0,   104,
     105,   106,     0,   100,   101,   102,   103,     0,   104,   105,
     106
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-56)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       1,    25,    57,    24,     4,     3,     4,     8,    59,     4,
       0,     5,    33,     4,    12,    66,     4,    18,    19,    14,
      15,    31,    20,    14,    25,    26,     5,    20,     6,    29,
      31,    55,    30,    31,    32,    45,    22,    38,     8,    10,
      22,    13,    52,    98,    45,    46,    44,     9,    49,     4,
      24,    52,   107,    21,    55,     6,    57,    58,    59,    20,
      25,    42,    16,    23,    20,    66,    24,    22,    25,    21,
      43,    26,    27,    28,    21,    20,    22,    78,    22,   134,
      20,    68,    69,    70,    20,    72,    73,    74,    23,    11,
      23,    23,    79,    24,    20,    96,    83,    98,    23,    42,
      21,    20,    18,    33,    21,    10,   107,   142,    -1,    33,
      97,    52,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    17,    -1,    19,    -1,   112,    -1,    -1,    24,    -1,
      -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,   129,    39,    40,    41,    17,    43,    19,    -1,
      -1,    -1,    -1,    24,    -1,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,
      17,    -1,    19,    -1,    21,    -1,    -1,    24,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    34,    35,    36,
      37,    -1,    39,    40,    41,    17,    -1,    19,    -1,    21,
      -1,    -1,    24,    17,    -1,    19,    -1,    21,    -1,    -1,
      24,    -1,    34,    35,    36,    37,    -1,    39,    40,    41,
      34,    35,    36,    37,    -1,    39,    40,    41,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    17,    -1,    19,
      -1,    21,    -1,    -1,    24,    34,    35,    36,    37,    -1,
      39,    40,    41,    -1,    34,    35,    36,    37,    -1,    39,
      40,    41,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    -1,    39,    40,    41,    17,    -1,    19,
      -1,    -1,    -1,    -1,    24,    25,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    34,    35,    36,    37,    -1,    39,
      40,    41,    -1,    34,    35,    36,    37,    -1,    39,    40,
      41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    46,    47,    48,     4,    63,     0,     5,    49,
      50,    22,    63,    49,     6,    20,    51,     8,    10,    22,
      13,    63,    14,    15,    52,    53,    58,    63,     9,    21,
      24,     6,    54,    55,    52,    63,    20,    25,    58,    23,
      54,    42,    16,    63,    24,    20,    25,    56,    57,    58,
      63,    21,    43,    63,    21,    22,    56,    22,    52,    22,
      26,    27,    28,    60,    63,    59,    60,    59,    20,    20,
      20,    23,    24,    33,    11,    59,    23,     3,    12,    20,
      30,    31,    32,    44,    61,    63,    61,    61,    23,    61,
      61,    61,    14,    63,    61,    61,    17,    19,    21,    24,
      34,    35,    36,    37,    39,    40,    41,    21,    21,    25,
      42,    42,    24,    20,    21,    29,    63,    61,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    60,    42,    33,
      23,    61,    21,    20,    18,    25,    61,    25,    61,    62,
      60,    42,    43,    21,    62
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
/* Line 1792 of yacc.c  */
#line 75 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
	(yyval.program) = std::shared_ptr<CProgram>(new CProgram((yyvsp[(1) - (2)].mainClass), (yyvsp[(2) - (2)].classDeclarationList)));
	//CProgram(MainClass, ClassDeclarationList)
}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 83 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.mainClass) = std::shared_ptr<CMainClass>(new  CMainClass((yyvsp[(2) - (17)].expression), (yyvsp[(12) - (17)].expression), (yyvsp[(15) - (17)].statement)));
		// IClass(Identifier, Identifier, Statement)
		}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 89 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.classDeclarationList) = std::shared_ptr<CClassDeclarationList>(new CClassDeclarationList((yyvsp[(1) - (2)].classDeclaration), (yyvsp[(2) - (2)].classDeclarationList)));
		//ClassDeclarationList(ClassDeclaration, ClassDeclarationList)
	}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 97 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.classDeclaration) = std::shared_ptr<CClassDeclaration>(new CClassDeclaration((yyvsp[(2) - (7)].expression), (yyvsp[(3) - (7)].classExtend), (yyvsp[(5) - (7)].varDeclarationList), (yyvsp[(6) - (7)].methodDeclarationList)));
		//ClassDeclaration(Identifier, ClassExtend, VarDeclarationList, MethodList)
	}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 103 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.classExtend) = std::shared_ptr<CClassExtend>(new CClassExtend((yyvsp[(3) - (4)].expression)));
		//ClassExtend(Identifier)
	}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 109 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.varDeclarationList) = std::shared_ptr<CVarDeclarationList>(new CVarDeclarationList((yyvsp[(1) - (2)].varDeclaration), (yyvsp[(2) - (2)].varDeclarationList)));
		//VarDeclarationList(VarDeclaration,VarDeclarationList)
	}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 114 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.varDeclaration) = std::shared_ptr<CVarDeclaration>(new CVarDeclaration((yyvsp[(1) - (3)].type), (yyvsp[(2) - (3)].expression)));
		//VarDeclaration(Type, Identifier)
	}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 120 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.methodDeclarationList) = std::shared_ptr<CMethodDeclarationList>(new CMethodDeclarationList((yyvsp[(1) - (2)].methodDeclaration), (yyvsp[(2) - (2)].methodDeclarationList)));
		//MethodDeclarationList(MethodDeclaration, MethodDeclarationList)
	}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 126 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.methodDeclaration) = std::shared_ptr<CMethodDeclaration>(new CMethodDeclaration((yyvsp[(2) - (13)].type), (yyvsp[(3) - (13)].expression), (yyvsp[(5) - (13)].argumentList), (yyvsp[(8) - (13)].varDeclarationList), (yyvsp[(9) - (13)].statementList), (yyvsp[(11) - (13)].expression)));
		//MethodDeclaration(Type, Identifier, ArgumentList, VarDeclarationList, StatementList, Expression)
	}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 132 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.argumentList) = std::shared_ptr<CArgumentList>(CArgumentList((yyvsp[(1) - (1)].argument), nullptr));
		//ArgumentList(Argument, nullptr)
	}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 136 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.argumentList) = std::shared_ptr<CArgumentList>(new CArgumentList((yyvsp[(1) - (3)].argument), (yyvsp[(3) - (3)].argumentList)));
		//ArgumentList(Argument, ArgumentList)
	 }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 141 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.argument) = std::shared_ptr<CArgument>(new CArgument((yyvsp[(1) - (2)].type), (yyvsp[(2) - (2)].expression)));
		//Argument(Type, Identifier)
	}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 146 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.type) = std::shared_ptr<CType>(new CType("INTLIST"));
	}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 149 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.type) = std::shared_ptr<CType>(new CType("BOOL"));
	}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 152 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.type) = std::shared_ptr<CType>(new CType("INT"));
	}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 155 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.type) = std::shared_ptr<CType>(new CType((yyvsp[(1) - (1)].expression)));
		//Type(Identifier)
	}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 161 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.statementList) = std::shared_ptr<CStatementList>(new CStatementList((yyvsp[(1) - (2)].statement), (yyvsp[(2) - (2)].statementList)));
		//StatementList(Statement, StatementList)
	}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 166 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.statement) = std::shared_ptr<IStatement>(new CCompoundStatement((yyvsp[(2) - (3)].statementList)));
		//CompoundStatement(StatementList)
	}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 170 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.statement) = std::shared_ptr<IStatement>(new CConditionStatement((yyvsp[(3) - (7)].expression), (yyvsp[(5) - (7)].statement), (yyvsp[(7) - (7)].statement)));
		//CondtitionStatement(Expression, Statement, Statement)
	}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 174 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.statement) = std::shared_ptr<IStatement>(new CPreconditionStatement((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].statement)));
		//PreconditionStatement(Expression, Statement)
	}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 178 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.statement) = std::shared_ptr<IStatement>(new CPrintStatement((yyvsp[(3) - (5)].expression)));
		//PrintStatement(Expression)
	}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 182 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.statement) = std::shared_ptr<IStatement>(new CAssignmentStatement((yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].expression)));
		//AssignmentStatement(Identifier, Expression)
	}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 186 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.statement) = std::shared_ptr<IStatement>(AssignmentListStatement((yyvsp[(1) - (7)].expression), (yyvsp[(3) - (7)].expression), (yyvsp[(6) - (7)].expression)));
		//AssignmentListStatement(Identifier, Expression, Expression)
	}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 191 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new COperationExpression((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), OperationExpression::OperationType::And));
		//OperationExpression(Expression, Expression, And)
	}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 195 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new COperationExpression((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), OperationExpression::OperationType::Less));
		//OperationExpression(Expression, Expression, Less)
	}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 199 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new COperationExpression((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), OperationExpression::OperationType::Plus));
		//OperationExpression(Expression, Expression, Plus)
	}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 203 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new COperationExpression((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), OperationExpression::OperationType::Minus));
		//OperationExpression(Expression, Expression, Minus)
	}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 207 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new COperationExpression((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), OperationExpression::OperationType::Times));
		//OperationExpression(Expression, Expression, Times)
	}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 211 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new COperationExpression((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), OperationExpression::OperationType::Devide));
		//OperationExpression(Expression, Expression, Devide)
	}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 215 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new COperationExpression((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), OperationExpression::OperationType::Mod));
		//OperationExpression(Expression, Expression, Mod)
	}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 219 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new COperationExpression((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), OperationExpression::OperationType::Or));
		//OperationExpression(Expression, Expression, Or)
	}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 223 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new CIndexExpression((yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].expression)));
		//IndexExpression(Expression,Expression)
	}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 227 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new CLengthExpression((yyvsp[(1) - (3)].expression)));
		//LengthExpression(Expression)
	}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 231 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new CGetFieldExpression((yyvsp[(1) - (6)].expression), (yyvsp[(3) - (6)].expression), (yyvsp[(5) - (6)].expressionList)));
		//GetFieldExpression(Expression, Identifier, ExpressionList)
	}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 235 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new CNumExpression((yyvsp[(1) - (1)].int_val)));
		//NumExpression(int)
	}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 239 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new CTrueExpression());
	}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 242 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new CFalseExpression());
	}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 245 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new CIdExpression((yyvsp[(1) - (1)].expression)));
		//IdExpression(Identifier)
	}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 249 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new CThisExpression());
		//ThisExpression()
	}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 253 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new CListConstructorExpression((yyvsp[(4) - (5)].expression)));
		//ListConstructorExpression(Expression)
	}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 257 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new CConstructorExpression((yyvsp[(2) - (4)].expression)));
		//ConstructorExpression(Identifier)
	}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 261 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr_ptr<IExpression>(new CNegationExpression((yyvsp[(2) - (2)].expression)));
		//NegationExpression(Expression)
	}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 265 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new CParenExpression((yyvsp[(2) - (3)].expression)));
		//ParenExpression(Expression)
	}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 271 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expressionList) = std::shared_ptr<CExpressionList>(new CExpressionList((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expressionList)));
		//ExpressionList(Expression, ExpressionList)
	}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 275 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expressionList) = std::shared_ptr<CExpressionList>(new CExpressionList((yyvsp[(1) - (1)].expression), nullptr));
		//ExpressionList(Expression, nullptr)
	}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 280 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"
    {
		(yyval.expression) = std::shared_ptr<IExpression>(new CIdExpression((yyvsp[(1) - (1)].str_val)));
		//IdExpression(string);
	}
    break;


/* Line 1792 of yacc.c  */
#line 1981 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.cpp"
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 286 "C:\\Projects\\CompilerTheory\\MiniJavaCompiler\\LexicParser\\syntatic.txt"


int yyerror(std::string s) {
  extern int yylineno;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c
  
  std::cerr << "ERROR: " << s << " at symbol \"" << yytext;
  std::cerr << "\" on line " << yylineno << std::endl;
  exit(1);
}

int yyerror(char *s) {
	return yyerror(std::string(s));
}

