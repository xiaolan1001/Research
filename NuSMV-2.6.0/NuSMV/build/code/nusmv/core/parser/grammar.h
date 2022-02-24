/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_NUSMV_YY_HOME_SUMMER_RESEARCH_NUSMV_2_6_0_NUSMV_BUILD_CODE_NUSMV_CORE_PARSER_GRAMMAR_H_INCLUDED
# define YY_NUSMV_YY_HOME_SUMMER_RESEARCH_NUSMV_2_6_0_NUSMV_BUILD_CODE_NUSMV_CORE_PARSER_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int nusmv_yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOK_CONSTRAINT = 258,          /* TOK_CONSTRAINT  */
    TOK_ITYPE = 259,               /* TOK_ITYPE  */
    TOK_MODULE = 260,              /* TOK_MODULE  */
    TOK_PROCESS = 261,             /* TOK_PROCESS  */
    TOK_CONTEXT = 262,             /* TOK_CONTEXT  */
    TOK_EU = 263,                  /* TOK_EU  */
    TOK_AU = 264,                  /* TOK_AU  */
    TOK_EBU = 265,                 /* TOK_EBU  */
    TOK_ABU = 266,                 /* TOK_ABU  */
    TOK_MINU = 267,                /* TOK_MINU  */
    TOK_MAXU = 268,                /* TOK_MAXU  */
    TOK_VAR = 269,                 /* TOK_VAR  */
    TOK_FROZENVAR = 270,           /* TOK_FROZENVAR  */
    TOK_IVAR = 271,                /* TOK_IVAR  */
    TOK_FUN = 272,                 /* TOK_FUN  */
    TOK_DEFINE = 273,              /* TOK_DEFINE  */
    TOK_ARRAY_DEFINE = 274,        /* TOK_ARRAY_DEFINE  */
    TOK_INIT = 275,                /* TOK_INIT  */
    TOK_TRANS = 276,               /* TOK_TRANS  */
    TOK_INVAR = 277,               /* TOK_INVAR  */
    TOK_SPEC = 278,                /* TOK_SPEC  */
    TOK_CTLSPEC = 279,             /* TOK_CTLSPEC  */
    TOK_LTLSPEC = 280,             /* TOK_LTLSPEC  */
    TOK_COMPUTE = 281,             /* TOK_COMPUTE  */
    TOK_NAME = 282,                /* TOK_NAME  */
    TOK_PSLSPEC = 283,             /* TOK_PSLSPEC  */
    TOK_CONSTANTS = 284,           /* TOK_CONSTANTS  */
    TOK_INVARSPEC = 285,           /* TOK_INVARSPEC  */
    TOK_FAIRNESS = 286,            /* TOK_FAIRNESS  */
    TOK_COMPASSION = 287,          /* TOK_COMPASSION  */
    TOK_JUSTICE = 288,             /* TOK_JUSTICE  */
    TOK_ISA = 289,                 /* TOK_ISA  */
    TOK_ASSIGN = 290,              /* TOK_ASSIGN  */
    TOK_OF = 291,                  /* TOK_OF  */
    TOK_CONS = 292,                /* TOK_CONS  */
    TOK_SEMI = 293,                /* TOK_SEMI  */
    TOK_LP = 294,                  /* TOK_LP  */
    TOK_RP = 295,                  /* TOK_RP  */
    TOK_RB = 296,                  /* TOK_RB  */
    TOK_LCB = 297,                 /* TOK_LCB  */
    TOK_RCB = 298,                 /* TOK_RCB  */
    TOK_EQDEF = 299,               /* TOK_EQDEF  */
    TOK_TWODOTS = 300,             /* TOK_TWODOTS  */
    TOK_SELF = 301,                /* TOK_SELF  */
    TOK_CASE = 302,                /* TOK_CASE  */
    TOK_ESAC = 303,                /* TOK_ESAC  */
    TOK_COLON = 304,               /* TOK_COLON  */
    TOK_INCONTEXT = 305,           /* TOK_INCONTEXT  */
    TOK_SIMPWFF = 306,             /* TOK_SIMPWFF  */
    TOK_NEXTWFF = 307,             /* TOK_NEXTWFF  */
    TOK_LTLWFF = 308,              /* TOK_LTLWFF  */
    TOK_LTLPSL = 309,              /* TOK_LTLPSL  */
    TOK_CTLWFF = 310,              /* TOK_CTLWFF  */
    TOK_COMPWFF = 311,             /* TOK_COMPWFF  */
    TOK_COMPID = 312,              /* TOK_COMPID  */
    TOK_ARRAY = 313,               /* TOK_ARRAY  */
    TOK_BOOLEAN = 314,             /* TOK_BOOLEAN  */
    TOK_WORD = 315,                /* TOK_WORD  */
    TOK_BOOL = 316,                /* TOK_BOOL  */
    TOK_WORD1 = 317,               /* TOK_WORD1  */
    TOK_CONST_ARRAY = 318,         /* TOK_CONST_ARRAY  */
    TOK_WAREAD = 319,              /* TOK_WAREAD  */
    TOK_WAWRITE = 320,             /* TOK_WAWRITE  */
    TOK_SIGNED = 321,              /* TOK_SIGNED  */
    TOK_UNSIGNED = 322,            /* TOK_UNSIGNED  */
    TOK_EXTEND = 323,              /* TOK_EXTEND  */
    TOK_UWCONST = 324,             /* TOK_UWCONST  */
    TOK_SWCONST = 325,             /* TOK_SWCONST  */
    TOK_WRESIZE = 326,             /* TOK_WRESIZE  */
    TOK_WSIZEOF = 327,             /* TOK_WSIZEOF  */
    TOK_WTOINT = 328,              /* TOK_WTOINT  */
    TOK_COUNT = 329,               /* TOK_COUNT  */
    TOK_TYPEOF = 330,              /* TOK_TYPEOF  */
    TOK_ATOM = 331,                /* TOK_ATOM  */
    TOK_FALSEEXP = 332,            /* TOK_FALSEEXP  */
    TOK_TRUEEXP = 333,             /* TOK_TRUEEXP  */
    TOK_NUMBER = 334,              /* TOK_NUMBER  */
    TOK_NUMBER_FRAC = 335,         /* TOK_NUMBER_FRAC  */
    TOK_NUMBER_REAL = 336,         /* TOK_NUMBER_REAL  */
    TOK_NUMBER_EXP = 337,          /* TOK_NUMBER_EXP  */
    TOK_NUMBER_WORD = 338,         /* TOK_NUMBER_WORD  */
    TOK_ABS = 339,                 /* TOK_ABS  */
    TOK_MIN = 340,                 /* TOK_MIN  */
    TOK_MAX = 341,                 /* TOK_MAX  */
    TOK_COMMA = 342,               /* TOK_COMMA  */
    TOK_IMPLIES = 343,             /* TOK_IMPLIES  */
    TOK_IFF = 344,                 /* TOK_IFF  */
    TOK_OR = 345,                  /* TOK_OR  */
    TOK_XOR = 346,                 /* TOK_XOR  */
    TOK_XNOR = 347,                /* TOK_XNOR  */
    TOK_AND = 348,                 /* TOK_AND  */
    TOK_NOT = 349,                 /* TOK_NOT  */
    TOK_QUESTIONMARK = 350,        /* TOK_QUESTIONMARK  */
    TOK_EX = 351,                  /* TOK_EX  */
    TOK_AX = 352,                  /* TOK_AX  */
    TOK_EF = 353,                  /* TOK_EF  */
    TOK_AF = 354,                  /* TOK_AF  */
    TOK_EG = 355,                  /* TOK_EG  */
    TOK_AG = 356,                  /* TOK_AG  */
    TOK_EE = 357,                  /* TOK_EE  */
    TOK_AA = 358,                  /* TOK_AA  */
    TOK_SINCE = 359,               /* TOK_SINCE  */
    TOK_UNTIL = 360,               /* TOK_UNTIL  */
    TOK_TRIGGERED = 361,           /* TOK_TRIGGERED  */
    TOK_RELEASES = 362,            /* TOK_RELEASES  */
    TOK_EBF = 363,                 /* TOK_EBF  */
    TOK_EBG = 364,                 /* TOK_EBG  */
    TOK_ABF = 365,                 /* TOK_ABF  */
    TOK_ABG = 366,                 /* TOK_ABG  */
    TOK_BUNTIL = 367,              /* TOK_BUNTIL  */
    TOK_MMIN = 368,                /* TOK_MMIN  */
    TOK_MMAX = 369,                /* TOK_MMAX  */
    TOK_OP_NEXT = 370,             /* TOK_OP_NEXT  */
    TOK_OP_GLOBAL = 371,           /* TOK_OP_GLOBAL  */
    TOK_OP_FUTURE = 372,           /* TOK_OP_FUTURE  */
    TOK_OP_PREC = 373,             /* TOK_OP_PREC  */
    TOK_OP_NOTPRECNOT = 374,       /* TOK_OP_NOTPRECNOT  */
    TOK_OP_HISTORICAL = 375,       /* TOK_OP_HISTORICAL  */
    TOK_OP_ONCE = 376,             /* TOK_OP_ONCE  */
    TOK_EQUAL = 377,               /* TOK_EQUAL  */
    TOK_NOTEQUAL = 378,            /* TOK_NOTEQUAL  */
    TOK_LT = 379,                  /* TOK_LT  */
    TOK_GT = 380,                  /* TOK_GT  */
    TOK_LE = 381,                  /* TOK_LE  */
    TOK_GE = 382,                  /* TOK_GE  */
    TOK_UNION = 383,               /* TOK_UNION  */
    TOK_SETIN = 384,               /* TOK_SETIN  */
    TOK_LSHIFT = 385,              /* TOK_LSHIFT  */
    TOK_RSHIFT = 386,              /* TOK_RSHIFT  */
    TOK_LROTATE = 387,             /* TOK_LROTATE  */
    TOK_RROTATE = 388,             /* TOK_RROTATE  */
    TOK_MOD = 389,                 /* TOK_MOD  */
    TOK_PLUS = 390,                /* TOK_PLUS  */
    TOK_MINUS = 391,               /* TOK_MINUS  */
    TOK_TIMES = 392,               /* TOK_TIMES  */
    TOK_DIVIDE = 393,              /* TOK_DIVIDE  */
    TOK_NEXT = 394,                /* TOK_NEXT  */
    TOK_SMALLINIT = 395,           /* TOK_SMALLINIT  */
    TOK_CONCATENATION = 396,       /* TOK_CONCATENATION  */
    TOK_LB = 397,                  /* TOK_LB  */
    TOK_DOT = 398,                 /* TOK_DOT  */
    TOK_BIT = 399                  /* TOK_BIT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 138 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"

  node_ptr node;
  int lineno;

#line 213 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE nusmv_yylval;

int nusmv_yyparse (void);

#endif /* !YY_NUSMV_YY_HOME_SUMMER_RESEARCH_NUSMV_2_6_0_NUSMV_BUILD_CODE_NUSMV_CORE_PARSER_GRAMMAR_H_INCLUDED  */
