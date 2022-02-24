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

#ifndef YY_PARSER_AP_HOME_SUMMER_RESEARCH_NUSMV_2_6_0_NUSMV_BUILD_CODE_NUSMV_ADDONS_CORE_COMPASS_PARSER_AP_AP_GRAMMAR_H_INCLUDED
# define YY_PARSER_AP_HOME_SUMMER_RESEARCH_NUSMV_2_6_0_NUSMV_BUILD_CODE_NUSMV_ADDONS_CORE_COMPASS_PARSER_AP_AP_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int parser_ap_debug;
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
    TOK_ATOM = 258,                /* TOK_ATOM  */
    TOK_FALSEEXP = 259,            /* TOK_FALSEEXP  */
    TOK_TRUEEXP = 260,             /* TOK_TRUEEXP  */
    TOK_NUMBER = 261,              /* TOK_NUMBER  */
    TOK_NUMBER_FRAC = 262,         /* TOK_NUMBER_FRAC  */
    TOK_NUMBER_REAL = 263,         /* TOK_NUMBER_REAL  */
    TOK_NUMBER_EXP = 264,          /* TOK_NUMBER_EXP  */
    TOK_NUMBER_WORD = 265,         /* TOK_NUMBER_WORD  */
    TOK_CONS = 266,                /* TOK_CONS  */
    TOK_SEMI = 267,                /* TOK_SEMI  */
    TOK_LP = 268,                  /* TOK_LP  */
    TOK_RP = 269,                  /* TOK_RP  */
    TOK_RB = 270,                  /* TOK_RB  */
    TOK_LCB = 271,                 /* TOK_LCB  */
    TOK_RCB = 272,                 /* TOK_RCB  */
    TOK_TWODOTS = 273,             /* TOK_TWODOTS  */
    TOK_SELF = 274,                /* TOK_SELF  */
    TOK_CASE = 275,                /* TOK_CASE  */
    TOK_ESAC = 276,                /* TOK_ESAC  */
    TOK_COLON = 277,               /* TOK_COLON  */
    TOK_COMMA = 278,               /* TOK_COMMA  */
    TOK_IMPLIES = 279,             /* TOK_IMPLIES  */
    TOK_IFF = 280,                 /* TOK_IFF  */
    TOK_OR = 281,                  /* TOK_OR  */
    TOK_XOR = 282,                 /* TOK_XOR  */
    TOK_XNOR = 283,                /* TOK_XNOR  */
    TOK_AND = 284,                 /* TOK_AND  */
    TOK_NOT = 285,                 /* TOK_NOT  */
    TOK_EX = 286,                  /* TOK_EX  */
    TOK_AX = 287,                  /* TOK_AX  */
    TOK_EF = 288,                  /* TOK_EF  */
    TOK_AF = 289,                  /* TOK_AF  */
    TOK_EG = 290,                  /* TOK_EG  */
    TOK_AG = 291,                  /* TOK_AG  */
    TOK_EE = 292,                  /* TOK_EE  */
    TOK_AA = 293,                  /* TOK_AA  */
    TOK_SINCE = 294,               /* TOK_SINCE  */
    TOK_UNTIL = 295,               /* TOK_UNTIL  */
    TOK_TRIGGERED = 296,           /* TOK_TRIGGERED  */
    TOK_RELEASES = 297,            /* TOK_RELEASES  */
    TOK_EBF = 298,                 /* TOK_EBF  */
    TOK_EBG = 299,                 /* TOK_EBG  */
    TOK_ABF = 300,                 /* TOK_ABF  */
    TOK_ABG = 301,                 /* TOK_ABG  */
    TOK_BUNTIL = 302,              /* TOK_BUNTIL  */
    TOK_MMIN = 303,                /* TOK_MMIN  */
    TOK_MMAX = 304,                /* TOK_MMAX  */
    TOK_OP_NEXT = 305,             /* TOK_OP_NEXT  */
    TOK_OP_GLOBAL = 306,           /* TOK_OP_GLOBAL  */
    TOK_OP_FUTURE = 307,           /* TOK_OP_FUTURE  */
    TOK_OP_PREC = 308,             /* TOK_OP_PREC  */
    TOK_OP_NOTPRECNOT = 309,       /* TOK_OP_NOTPRECNOT  */
    TOK_OP_HISTORICAL = 310,       /* TOK_OP_HISTORICAL  */
    TOK_OP_ONCE = 311,             /* TOK_OP_ONCE  */
    TOK_EQUAL = 312,               /* TOK_EQUAL  */
    TOK_NOTEQUAL = 313,            /* TOK_NOTEQUAL  */
    TOK_LT = 314,                  /* TOK_LT  */
    TOK_GT = 315,                  /* TOK_GT  */
    TOK_LE = 316,                  /* TOK_LE  */
    TOK_GE = 317,                  /* TOK_GE  */
    TOK_UNION = 318,               /* TOK_UNION  */
    TOK_SETIN = 319,               /* TOK_SETIN  */
    TOK_LSHIFT = 320,              /* TOK_LSHIFT  */
    TOK_RSHIFT = 321,              /* TOK_RSHIFT  */
    TOK_LROTATE = 322,             /* TOK_LROTATE  */
    TOK_RROTATE = 323,             /* TOK_RROTATE  */
    TOK_MOD = 324,                 /* TOK_MOD  */
    TOK_PLUS = 325,                /* TOK_PLUS  */
    TOK_MINUS = 326,               /* TOK_MINUS  */
    TOK_TIMES = 327,               /* TOK_TIMES  */
    TOK_DIVIDE = 328,              /* TOK_DIVIDE  */
    TOK_NEXT = 329,                /* TOK_NEXT  */
    TOK_SMALLINIT = 330,           /* TOK_SMALLINIT  */
    TOK_CONCATENATION = 331,       /* TOK_CONCATENATION  */
    TOK_LB = 332,                  /* TOK_LB  */
    TOK_DOT = 333,                 /* TOK_DOT  */
    TOK_BIT = 334,                 /* TOK_BIT  */
    TOK_SIGNED = 335,              /* TOK_SIGNED  */
    TOK_UNSIGNED = 336,            /* TOK_UNSIGNED  */
    TOK_EXTEND = 337,              /* TOK_EXTEND  */
    TOK_BOOL = 338,                /* TOK_BOOL  */
    TOK_WORD1 = 339                /* TOK_WORD1  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 87 "ap_grammar.y"

  node_ptr node;

#line 152 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE parser_ap_lval;

int parser_ap_parse (void);

#endif /* !YY_PARSER_AP_HOME_SUMMER_RESEARCH_NUSMV_2_6_0_NUSMV_BUILD_CODE_NUSMV_ADDONS_CORE_COMPASS_PARSER_AP_AP_GRAMMAR_H_INCLUDED  */
