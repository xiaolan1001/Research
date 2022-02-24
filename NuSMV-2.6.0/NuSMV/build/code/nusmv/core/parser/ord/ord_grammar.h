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

#ifndef YY_PARSER_ORD_HOME_SUMMER_RESEARCH_NUSMV_2_6_0_NUSMV_BUILD_CODE_NUSMV_CORE_PARSER_ORD_ORD_GRAMMAR_H_INCLUDED
# define YY_PARSER_ORD_HOME_SUMMER_RESEARCH_NUSMV_2_6_0_NUSMV_BUILD_CODE_NUSMV_CORE_PARSER_ORD_ORD_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int parser_ord_debug;
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
    LB = 258,                      /* LB  */
    RB = 259,                      /* RB  */
    ATOM = 260,                    /* ATOM  */
    NUMBER = 261,                  /* NUMBER  */
    DOT = 262,                     /* DOT  */
    MINUS = 263                    /* MINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 76 "ord_grammar.y"

  node_ptr node;

#line 76 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/ord/ord_grammar.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE parser_ord_lval;

int parser_ord_parse (void);

#endif /* !YY_PARSER_ORD_HOME_SUMMER_RESEARCH_NUSMV_2_6_0_NUSMV_BUILD_CODE_NUSMV_CORE_PARSER_ORD_ORD_GRAMMAR_H_INCLUDED  */
