/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_NEWLINE = 258,
     T_SEMICOLON = 259,
     T_COMMA = 260,
     T_NOT = 261,
     T_AT = 262,
     T_COMMENT = 263,
     T_KEEP = 264,
     T_KEEPNAMES = 265,
     T_KEEPCLASSMEMBERS = 266,
     T_KEEPCLASSMEMBERNAMES = 267,
     T_KEEPCLASSESWITHMEMBERS = 268,
     T_KEEPCLASSESWITHMEMBERNAMES = 269,
     T_ALLOWOBFUSCATION = 270,
     T_ALLOWOPTIMIZATION = 271,
     T_ALLOWSHRINKING = 272,
     T_ADAPTCLASSSTRINGS = 273,
     T_ADAPTRESOURCEFILECONTENTS = 274,
     T_ADAPTRESOURCEFILENAMES = 275,
     T_ALLOWACCESSMODIFICATION = 276,
     T_APPLYMAPPING = 277,
     T_ASSUMENOSIDEEFFECTS = 278,
     T_CLASSOBFUSCATIONDICTIONARY = 279,
     T_DONTOBFUSCATE = 280,
     T_DONTOPTIMIZE = 281,
     T_DONTPREVERIFY = 282,
     T_DONTSHRINK = 283,
     T_DONTWARN = 284,
     T_DONTUSEMIXEDCASECLASSNAMES = 285,
     T_FLATTENPACKAGEHIERARCHY = 286,
     T_KEEPATTRIBUTES = 287,
     T_KEEPPACKAGENAMES = 288,
     T_KEEPPARAMETERNAMES = 289,
     T_MERGEINTERFACESAGGRESSIVELY = 290,
     T_OBFUSCATIONDICTIONARY = 291,
     T_OPTIMIZATIONPASSES = 292,
     T_OPTIMIZATIONS = 293,
     T_OVERLOADAGGRESSIVELY = 294,
     T_PACKAGEOBFUSCATIONDICTIONARY = 295,
     T_PRINTMAPPING = 296,
     T_PRINTSEEDS = 297,
     T_PRINTUSAGE = 298,
     T_RENAMESOURCEFILEATTRIBUTE = 299,
     T_REPACKAGECLASSES = 300,
     T_USEUNIQUECLASSMEMBERNAMES = 301,
     T_WHYAREYOUKEEPING = 302,
     T_CLASS = 303,
     T_ENUM = 304,
     T_INTERFACE = 305,
     T_AT_INTERFACE = 306,
     T_INIT = 307,
     T_IMPLEMENTS = 308,
     T_EXTENDS = 309,
     T_PUBLIC = 310,
     T_PRIVATE = 311,
     T_PROTECTED = 312,
     T_STATIC = 313,
     T_FINAL = 314,
     T_TRANSIENT = 315,
     T_NATIVE = 316,
     T_METHODS = 317,
     T_FIELDS = 318,
     T_ANY_MEMBER = 319,
     T_PATTERN = 320,
     T_MEMBERS_BEGIN = 321,
     T_MEMBERS_END = 322,
     T_ARGS_BEGIN = 323,
     T_ARGS_END = 324
   };
#endif
/* Tokens.  */
#define T_NEWLINE 258
#define T_SEMICOLON 259
#define T_COMMA 260
#define T_NOT 261
#define T_AT 262
#define T_COMMENT 263
#define T_KEEP 264
#define T_KEEPNAMES 265
#define T_KEEPCLASSMEMBERS 266
#define T_KEEPCLASSMEMBERNAMES 267
#define T_KEEPCLASSESWITHMEMBERS 268
#define T_KEEPCLASSESWITHMEMBERNAMES 269
#define T_ALLOWOBFUSCATION 270
#define T_ALLOWOPTIMIZATION 271
#define T_ALLOWSHRINKING 272
#define T_ADAPTCLASSSTRINGS 273
#define T_ADAPTRESOURCEFILECONTENTS 274
#define T_ADAPTRESOURCEFILENAMES 275
#define T_ALLOWACCESSMODIFICATION 276
#define T_APPLYMAPPING 277
#define T_ASSUMENOSIDEEFFECTS 278
#define T_CLASSOBFUSCATIONDICTIONARY 279
#define T_DONTOBFUSCATE 280
#define T_DONTOPTIMIZE 281
#define T_DONTPREVERIFY 282
#define T_DONTSHRINK 283
#define T_DONTWARN 284
#define T_DONTUSEMIXEDCASECLASSNAMES 285
#define T_FLATTENPACKAGEHIERARCHY 286
#define T_KEEPATTRIBUTES 287
#define T_KEEPPACKAGENAMES 288
#define T_KEEPPARAMETERNAMES 289
#define T_MERGEINTERFACESAGGRESSIVELY 290
#define T_OBFUSCATIONDICTIONARY 291
#define T_OPTIMIZATIONPASSES 292
#define T_OPTIMIZATIONS 293
#define T_OVERLOADAGGRESSIVELY 294
#define T_PACKAGEOBFUSCATIONDICTIONARY 295
#define T_PRINTMAPPING 296
#define T_PRINTSEEDS 297
#define T_PRINTUSAGE 298
#define T_RENAMESOURCEFILEATTRIBUTE 299
#define T_REPACKAGECLASSES 300
#define T_USEUNIQUECLASSMEMBERNAMES 301
#define T_WHYAREYOUKEEPING 302
#define T_CLASS 303
#define T_ENUM 304
#define T_INTERFACE 305
#define T_AT_INTERFACE 306
#define T_INIT 307
#define T_IMPLEMENTS 308
#define T_EXTENDS 309
#define T_PUBLIC 310
#define T_PRIVATE 311
#define T_PROTECTED 312
#define T_STATIC 313
#define T_FINAL 314
#define T_TRANSIENT 315
#define T_NATIVE 316
#define T_METHODS 317
#define T_FIELDS 318
#define T_ANY_MEMBER 319
#define T_PATTERN 320
#define T_MEMBERS_BEGIN 321
#define T_MEMBERS_END 322
#define T_ARGS_BEGIN 323
#define T_ARGS_END 324




/* Copy the first part of user declarations.  */
#line 1 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"

/*
 * This is a subset of the proguard class specification language.
 * Reference: http://proguard.sourceforge.net/index.html#manual/examples.html
 */


#define YYSTYPE char*

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "configparser/keeprules.h"

extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
extern "C" int line_number;

#define WARN(x) printf("WARNING: %s\n", x)
#define ASSERT(x, y) if (!(x)) { printf("ERROR: %s", y); exit(-1);}

void yyerror(const char* msg);

std::vector<KeepRule>* rules = nullptr;

// Used for both classes and members
uint32_t flags;

// Params for keep rule
int class_type;
const char* classname;
const char* extends;
bool allow_deletion;

static KeepRule* keeprule;

void keep_rule_start() {
     ASSERT(keeprule == nullptr, "keeprule should have been nulled out and deleted by keep_rule_end()");
     keeprule = new KeepRule();
}

void keep_rule_end() {
    if (!rules) {
        rules = new std::vector<KeepRule>();
    }
    rules->push_back(*keeprule);
    delete keeprule;
    keeprule = nullptr;
}


// Params for member
const char* member_annotation = nullptr;
const char* member_type = nullptr;
const char* member_name = nullptr;
bool member_is_method;
MethodFilter* method_filter = nullptr;


void member_start() {
    flags = 0;
}

void member_args_start() {
    if (!keeprule) {
        return;
    }
    MethodFilter method(flags, member_name, member_type);
    keeprule->methods.push_back(method);
    // Keep a pointer to it so we can add param definitions
    method_filter = &(keeprule->methods[keeprule->methods.size() - 1]);
}

void member_args_end() {
    method_filter = nullptr;
}

void member_end() {
    if (!keeprule) {
        return;
    }
    if (member_is_method) {
        // Method filter has already been added to keep rule.
        method_filter = nullptr;
    } else {
        FieldFilter field(flags, member_annotation, member_name, member_type);
        keeprule->fields.push_back(field);
    }
}

static char* duplicate(char* original) {
  if (original == nullptr) {
    return nullptr;
  }
  char* newptr = new char[strlen(original) + 1];
  strcpy(newptr, original);
  return newptr;
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 346 "/Users/satnamsingh/fbsource/fbandroid/buck-out/gen/native/redex/config_generate_parser_cc/parser.cc"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  63
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   174

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNRULES -- Number of states.  */
#define YYNSTATES  148

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    17,
      23,    25,    27,    29,    31,    33,    35,    36,    40,    42,
      44,    46,    47,    54,    57,    58,    60,    62,    64,    66,
      68,    69,    72,    75,    76,    80,    84,    87,    88,    95,
      96,    99,   100,   102,   104,   106,   107,   110,   113,   115,
     117,   119,   121,   123,   125,   127,   129,   131,   132,   136,
     137,   138,   142,   143,   144,   150,   154,   156,   158,   161,
     164,   167,   169,   172,   176,   179,   181,   183,   185,   187,
     190,   192,   195,   198,   201,   203,   205,   208,   211,   214,
     216,   219,   222,   225,   228,   231,   234,   236,   239,   243,
     245,   247,   250,   254
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      71,     0,    -1,    72,    -1,    72,    73,    -1,    73,    -1,
       8,    -1,   102,    -1,    74,    -1,    -1,    75,    76,    77,
      79,    85,    -1,     9,    -1,    10,    -1,    11,    -1,    12,
      -1,    13,    -1,    14,    -1,    -1,     5,    78,    77,    -1,
      15,    -1,    16,    -1,    17,    -1,    -1,    80,    89,    90,
      91,    81,    84,    -1,    82,    83,    -1,    -1,    48,    -1,
      49,    -1,    50,    -1,    51,    -1,    65,    -1,    -1,    53,
      65,    -1,    54,    65,    -1,    -1,    66,    86,    67,    -1,
      86,    87,     4,    -1,    87,     4,    -1,    -1,    88,    89,
      90,    91,    94,    96,    -1,    -1,     7,    65,    -1,    -1,
      55,    -1,    56,    -1,    57,    -1,    -1,    92,    91,    -1,
       6,    93,    -1,    93,    -1,    58,    -1,    59,    -1,    60,
      -1,    61,    -1,    52,    -1,    63,    -1,    62,    -1,    64,
      -1,    -1,    65,    95,    65,    -1,    -1,    -1,    68,    97,
      69,    -1,    -1,    -1,    68,    98,   100,    99,    69,    -1,
     100,     5,   101,    -1,   101,    -1,    65,    -1,    18,    65,
      -1,    19,    65,    -1,    20,    65,    -1,    21,    -1,    22,
      65,    -1,    23,    79,    85,    -1,    24,    65,    -1,    25,
      -1,    26,    -1,    27,    -1,    28,    -1,    29,    65,    -1,
      30,    -1,    31,    65,    -1,    32,   105,    -1,    33,   105,
      -1,    34,    -1,    35,    -1,    36,    65,    -1,    37,    65,
      -1,    38,   103,    -1,    39,    -1,    40,    65,    -1,    41,
      65,    -1,    42,    65,    -1,    43,    65,    -1,    44,    65,
      -1,    45,    65,    -1,    46,    -1,    47,    65,    -1,   104,
       5,   103,    -1,   104,    -1,    65,    -1,     6,    65,    -1,
      65,     5,   105,    -1,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   173,   173,   177,   178,   181,   182,   183,   186,   186,
     191,   193,   195,   197,   199,   201,   204,   206,   209,   210,
     211,   214,   214,   217,   220,   221,   222,   223,   224,   227,
     230,   231,   232,   234,   236,   239,   240,   243,   243,   251,
     253,   255,   257,   258,   259,   261,   263,   266,   267,   270,
     271,   272,   273,   276,   277,   278,   279,   280,   280,   283,
     285,   285,   286,   286,   286,   289,   290,   293,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   328,   329,
     332,   333,   336,   337
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_NEWLINE", "T_SEMICOLON", "T_COMMA",
  "T_NOT", "T_AT", "T_COMMENT", "T_KEEP", "T_KEEPNAMES",
  "T_KEEPCLASSMEMBERS", "T_KEEPCLASSMEMBERNAMES",
  "T_KEEPCLASSESWITHMEMBERS", "T_KEEPCLASSESWITHMEMBERNAMES",
  "T_ALLOWOBFUSCATION", "T_ALLOWOPTIMIZATION", "T_ALLOWSHRINKING",
  "T_ADAPTCLASSSTRINGS", "T_ADAPTRESOURCEFILECONTENTS",
  "T_ADAPTRESOURCEFILENAMES", "T_ALLOWACCESSMODIFICATION",
  "T_APPLYMAPPING", "T_ASSUMENOSIDEEFFECTS",
  "T_CLASSOBFUSCATIONDICTIONARY", "T_DONTOBFUSCATE", "T_DONTOPTIMIZE",
  "T_DONTPREVERIFY", "T_DONTSHRINK", "T_DONTWARN",
  "T_DONTUSEMIXEDCASECLASSNAMES", "T_FLATTENPACKAGEHIERARCHY",
  "T_KEEPATTRIBUTES", "T_KEEPPACKAGENAMES", "T_KEEPPARAMETERNAMES",
  "T_MERGEINTERFACESAGGRESSIVELY", "T_OBFUSCATIONDICTIONARY",
  "T_OPTIMIZATIONPASSES", "T_OPTIMIZATIONS", "T_OVERLOADAGGRESSIVELY",
  "T_PACKAGEOBFUSCATIONDICTIONARY", "T_PRINTMAPPING", "T_PRINTSEEDS",
  "T_PRINTUSAGE", "T_RENAMESOURCEFILEATTRIBUTE", "T_REPACKAGECLASSES",
  "T_USEUNIQUECLASSMEMBERNAMES", "T_WHYAREYOUKEEPING", "T_CLASS", "T_ENUM",
  "T_INTERFACE", "T_AT_INTERFACE", "T_INIT", "T_IMPLEMENTS", "T_EXTENDS",
  "T_PUBLIC", "T_PRIVATE", "T_PROTECTED", "T_STATIC", "T_FINAL",
  "T_TRANSIENT", "T_NATIVE", "T_METHODS", "T_FIELDS", "T_ANY_MEMBER",
  "T_PATTERN", "T_MEMBERS_BEGIN", "T_MEMBERS_END", "T_ARGS_BEGIN",
  "T_ARGS_END", "$accept", "START", "RULE_LIST", "RULE", "KEEP_RULE", "@1",
  "KEEP_TYPE", "KEEP_MODIFIERS", "ALLOWED_OPERATION", "CLASS_FILTER", "@2",
  "CLASS_SPEC", "CLASS_TYPE", "CLASS_NAME", "IMPLEMENTS_OR_EXTENDS",
  "CLASS_MEMBERS", "MEMBERS_LIST", "MEMBER", "@3", "ANNOTATION",
  "VISIBILITY", "ATTRIBUTES", "ATTRIBUTE_TERM", "ATTRIBUTE", "MEMBER_NAME",
  "@4", "ARGS", "@5", "@6", "@7", "ARGS_LIST", "ARG",
  "UNSUPPORTED_PROGUARD_RULE", "OPTIMIZATION_LIST", "OPTIMIZATION_TERM",
  "PATTERN_LIST", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    73,    73,    75,    74,
      76,    76,    76,    76,    76,    76,    77,    77,    78,    78,
      78,    80,    79,    81,    82,    82,    82,    82,    82,    83,
      84,    84,    84,    85,    85,    86,    86,    88,    87,    89,
      89,    90,    90,    90,    90,    91,    91,    92,    92,    93,
      93,    93,    93,    94,    94,    94,    94,    95,    94,    96,
      97,    96,    98,    99,    96,   100,   100,   101,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   103,   103,
     104,   104,   105,   105
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     5,
       1,     1,     1,     1,     1,     1,     0,     3,     1,     1,
       1,     0,     6,     2,     0,     1,     1,     1,     1,     1,
       0,     2,     2,     0,     3,     3,     2,     0,     6,     0,
       2,     0,     1,     1,     1,     0,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     0,
       0,     3,     0,     0,     5,     3,     1,     1,     2,     2,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     2,
       1,     2,     2,     2,     1,     1,     2,     2,     2,     1,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     1,
       1,     2,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     5,     0,     0,     0,    71,     0,    21,     0,    75,
      76,    77,    78,     0,    80,     0,     0,     0,    84,    85,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
      96,     0,     0,     8,     4,     7,     0,     6,    68,    69,
      70,    72,    33,    39,    74,    79,    81,   103,    82,    83,
      86,    87,     0,   100,    88,    99,    90,    91,    92,    93,
      94,    95,    97,     1,     3,    10,    11,    12,    13,    14,
      15,    16,    37,    73,     0,    41,     0,   101,     0,     0,
      21,    37,     0,    39,    40,    42,    43,    44,    45,   102,
      98,    18,    19,    20,    16,    33,    34,     0,    36,    41,
       0,    49,    50,    51,    52,    24,    45,    48,    17,     9,
      35,    45,    47,    25,    26,    27,    28,    30,     0,    46,
       0,     0,     0,    22,    29,    23,    53,    55,    54,    56,
      57,    59,    31,    32,     0,    60,    38,    58,     0,     0,
      61,    67,    63,    66,     0,     0,    65,    64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,    35,    36,    71,    80,    94,    42,
      43,   117,   118,   125,   123,    73,    81,    82,    83,    75,
      88,   105,   106,   107,   131,   134,   136,   138,   139,   145,
     142,   143,    37,    54,    55,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -102
static const yytype_int16 yypact[] =
{
      43,  -102,   -13,   -12,    -7,  -102,    39,  -102,    40,  -102,
    -102,  -102,  -102,    41,  -102,    42,    44,    44,  -102,  -102,
      45,    46,    -6,  -102,    47,    48,    50,    51,    52,    53,
    -102,    54,   108,     3,  -102,  -102,    82,  -102,  -102,  -102,
    -102,  -102,    55,   107,  -102,  -102,  -102,   115,  -102,  -102,
    -102,  -102,    57,  -102,  -102,   118,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,   119,  -102,  -102,    60,   -37,    44,  -102,    -6,    86,
    -102,    59,   123,   107,  -102,  -102,  -102,  -102,    -4,  -102,
    -102,  -102,  -102,  -102,   119,    55,  -102,   124,  -102,   -37,
     -52,  -102,  -102,  -102,  -102,    49,    -4,  -102,  -102,  -102,
    -102,    -4,  -102,  -102,  -102,  -102,  -102,   -41,    64,  -102,
     -48,    65,    66,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,    67,  -102,  -102,    68,    69,  -102,  -102,    63,    71,
    -102,  -102,   132,  -102,    71,    70,  -102,  -102
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -102,  -102,  -102,   105,  -102,  -102,  -102,    56,  -102,    61,
    -102,  -102,  -102,  -102,  -102,    58,  -102,    62,  -102,    72,
      73,  -101,  -102,    74,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,    -2,  -102,    76,  -102,   -16
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -63
static const yytype_int16 yytable[] =
{
      52,    49,   100,    -2,   126,   119,   101,   102,   103,   104,
     120,     1,   121,   122,   127,   128,   129,   130,    85,    86,
      87,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,     1,    38,    39,   101,   102,   103,   104,    40,    53,
      89,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    65,    66,    67,    68,    69,    70,   113,   114,   115,
     116,    91,    92,    93,    41,    44,    45,    46,    63,    47,
      50,    51,    56,    57,    74,    58,    59,    60,    61,    62,
      76,    72,    77,    78,    79,    84,    96,    98,   110,   124,
     132,   133,   140,   137,   -62,   135,   141,   144,    64,   147,
       0,    95,   146,    97,     0,     0,     0,     0,     0,     0,
     108,     0,     0,   109,    90,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,   112
};

static const yytype_int16 yycheck[] =
{
       6,    17,     6,     0,    52,   106,    58,    59,    60,    61,
     111,     8,    53,    54,    62,    63,    64,    65,    55,    56,
      57,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     8,    65,    65,    58,    59,    60,    61,    65,    65,
      76,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     9,    10,    11,    12,    13,    14,    48,    49,    50,
      51,    15,    16,    17,    65,    65,    65,    65,     0,    65,
      65,    65,    65,    65,     7,    65,    65,    65,    65,    65,
       5,    66,    65,     5,     5,    65,    67,     4,     4,    65,
      65,    65,    69,    65,    65,    68,    65,     5,    33,    69,
      -1,    80,   144,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    95,    78,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,   100
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    71,    72,    73,    74,    75,   102,    65,    65,
      65,    65,    79,    80,    65,    65,    65,    65,   105,   105,
      65,    65,     6,    65,   103,   104,    65,    65,    65,    65,
      65,    65,    65,     0,    73,     9,    10,    11,    12,    13,
      14,    76,    66,    85,     7,    89,     5,    65,     5,     5,
      77,    86,    87,    88,    65,    55,    56,    57,    90,   105,
     103,    15,    16,    17,    78,    79,    67,    87,     4,    89,
       6,    58,    59,    60,    61,    91,    92,    93,    77,    85,
       4,    90,    93,    48,    49,    50,    51,    81,    82,    91,
      91,    53,    54,    84,    65,    83,    52,    62,    63,    64,
      65,    94,    65,    65,    95,    68,    96,    65,    97,    98,
      69,    65,   100,   101,     5,    99,   101,    69
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
        case 8:
#line 186 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {keep_rule_start();;}
    break;

  case 9:
#line 188 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {keep_rule_end();;}
    break;

  case 10:
#line 191 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {keeprule->allow_deletion = false;
      keeprule->allow_cls_rename = true; keeprule->allow_member_rename = true;;}
    break;

  case 11:
#line 193 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {keeprule->allow_deletion = true;
      keeprule->allow_cls_rename = false; keeprule->allow_member_rename = false;;}
    break;

  case 12:
#line 195 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {keeprule->allow_deletion = false;
      keeprule->allow_cls_rename = true; keeprule->allow_member_rename = true;;}
    break;

  case 13:
#line 197 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {keeprule->allow_deletion = true;
      keeprule->allow_cls_rename = true; keeprule->allow_member_rename = false;;}
    break;

  case 14:
#line 199 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {keeprule->allow_deletion = false;
      keeprule->allow_cls_rename = false; keeprule->allow_member_rename = false;;}
    break;

  case 15:
#line 201 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {keeprule->allow_deletion = true;
      keeprule->allow_cls_rename = true; keeprule->allow_member_rename = false;;}
    break;

  case 18:
#line 209 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {WARN("'allowobfuscation' is not supported.\n"); ;}
    break;

  case 19:
#line 210 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {WARN("'allowoptimization' is not supported.\n");;}
    break;

  case 20:
#line 211 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {keeprule->allow_deletion = true;;}
    break;

  case 21:
#line 214 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {flags = 0;;}
    break;

  case 22:
#line 214 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {if (keeprule) keeprule->flags = flags;;}
    break;

  case 24:
#line 220 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {if (keeprule) keeprule->class_type = keeprules::ANY_CLASS_TYPE;;}
    break;

  case 25:
#line 221 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {if (keeprule) keeprule->class_type = keeprules::CLASS;;}
    break;

  case 26:
#line 222 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {if (keeprule) keeprule->class_type = keeprules::ENUMERATION;;}
    break;

  case 27:
#line 223 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {if (keeprule) keeprule->class_type = keeprules::INTERFACE;;}
    break;

  case 28:
#line 224 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {if (keeprule) keeprule->class_type = keeprules::ANNOTATION;;}
    break;

  case 29:
#line 227 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {if (keeprule) keeprule->classname = duplicate(yylval);;}
    break;

  case 30:
#line 230 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {if (keeprule) keeprule->extends = nullptr;;}
    break;

  case 31:
#line 231 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {if (keeprule) keeprule->extends = duplicate(yylval);;}
    break;

  case 32:
#line 232 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {if (keeprule) keeprule->extends = duplicate(yylval);;}
    break;

  case 37:
#line 243 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {member_start();;}
    break;

  case 38:
#line 249 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {member_end();;}
    break;

  case 40:
#line 253 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {member_annotation = duplicate(yylval);;}
    break;

  case 42:
#line 257 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {flags |= keeprules::PUBLIC;;}
    break;

  case 43:
#line 258 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {flags |= keeprules::PRIVATE;;}
    break;

  case 44:
#line 259 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {flags |= keeprules::PROTECTED;;}
    break;

  case 49:
#line 270 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {flags |= keeprules::STATIC;;}
    break;

  case 50:
#line 271 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {flags |= keeprules::FINAL;;}
    break;

  case 51:
#line 272 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {flags |= keeprules::TRANSIENT;;}
    break;

  case 52:
#line 273 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {flags |= keeprules::NATIVE;;}
    break;

  case 56:
#line 279 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {member_type = "*"; member_name = "*";;}
    break;

  case 57:
#line 280 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {member_type = duplicate(yylval);;}
    break;

  case 58:
#line 280 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {member_name = duplicate(yylval);;}
    break;

  case 60:
#line 285 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {member_args_start(); member_args_end();/* Method that takes no args */;}
    break;

  case 62:
#line 286 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {member_args_start(); /* Method with args */;}
    break;

  case 63:
#line 286 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {member_args_end();;}
    break;

  case 67:
#line 293 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"
    {if (method_filter) { method_filter->params.push_back(duplicate(yylval));};}
    break;


/* Line 1267 of yacc.c.  */
#line 1913 "/Users/satnamsingh/fbsource/fbandroid/buck-out/gen/native/redex/config_generate_parser_cc/parser.cc"
      default: break;
    }
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



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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


#line 339 "/Users/satnamsingh/fbsource/fbandroid/native/redex/configparser/config.y"


bool parse_proguard_file(const char * file, std::vector<KeepRule>* passed_rules) {
    FILE *pgfile = fopen(file, "r");
    if (!pgfile) {
        std::cerr << "Couldn't open " << file << std::endl;
        return false;
    }
    yyin = pgfile;
    // parse through the input until there is no more:
    do {
        yyparse();
    } while (!feof(yyin));

    passed_rules->swap(*rules);

    return true;
}

void yyerror(char const * msg) {
    printf("Parse error on line %d: %s\n", line_number, msg);
}

