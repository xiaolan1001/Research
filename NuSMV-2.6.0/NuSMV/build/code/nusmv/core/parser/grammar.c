/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         nusmv_yyparse
#define yylex           nusmv_yylex
#define yyerror         nusmv_yyerror
#define yydebug         nusmv_yydebug
#define yynerrs         nusmv_yynerrs
#define yylval          nusmv_yylval
#define yychar          nusmv_yychar

/* First part of user prologue.  */
#line 43 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"


#if HAVE_CONFIG_H
# include "nusmv-config.h"
#endif

#include <setjmp.h>

#if NUSMV_HAVE_MALLOC_H
# if NUSMV_HAVE_SYS_TYPES_H
#  include <sys/types.h>
# endif
# include <malloc.h>
#elif defined(NUSMV_HAVE_SYS_MALLOC_H) && NUSMV_HAVE_SYS_MALLOC_H
# if NUSMV_HAVE_SYS_TYPES_H
#  include <sys/types.h>
# endif
# include <sys/malloc.h>
#elif NUSMV_HAVE_STDLIB_H
# include <stdlib.h>
#endif

#include <limits.h>

#include "nusmv/core/parser/parserInt.h"
#include "nusmv/core/parser/psl/pslInt.h"
#include "nusmv/core/utils/utils.h"
#include "nusmv/core/utils/ustring.h"
#include "nusmv/core/node/node.h"
#include "nusmv/core/opt/opt.h"
#include "nusmv/core/prop/propPkg.h"
#include "nusmv/core/utils/ErrorMgr.h"

#include "nusmv/core/parser/symbols.h"
#include "nusmv/core/cinit/NuSMVEnv.h"
#define YYMAXDEPTH INT_MAX

#define GET_OPTS                                                \
  OPTS_HANDLER(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_OPTS_HANDLER))

  /* OPTIMIZATION[REAMa] Test performances. If poor, use ad-hoc variable */
#define NODEMGR                                                         \
  NODE_MGR(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_NODE_MGR))

#define SYNTAX_ERROR_HANDLING(dest, src) \
  {                                      \
    if (OptsHandler_get_bool_option_value(GET_OPTS, \
                                          OPT_PARSER_IS_LAX)) {         \
      dest = src;                                                       \
    }                                                                   \
    else {                                                              \
      YYABORT;                                                          \
    }                                                                   \
 }


node_ptr parsed_tree; /* the returned value of parsing */

/* TODO[AMa] Dirty hack. This var must be updated before all calls of the
   parser */
NuSMVEnv_ptr __nusmv_parser_env__;

enum PARSE_MODE parse_mode_flag; /* the flag what should be parsed */

extern int nusmv_yylineno;
int nusmv_yywrap(void);
void nusmv_yyerror(char *s);
void nusmv_yyerror_lined(const char *s, int line);
static node_ptr node2maincontext(node_ptr node);

/* this enum is used to distinguish
   different kinds of expressions: SIMPLE, NEXT, CTL and LTL.
   Since syntactically only one global kind of expressions exists,
   we have to invoke a special function which checks that an expression
   complies to the additional syntactic constrains.
   So, if a ctl-expression is expected then occurrences of NEXT
   operator will cause the termination of parsing.

   NB: An alternative to invoking a checking function would be to write quite
   intricate syntactic rules to distinguish all the cases.

   NB: This checking function could also be a part of the type checker,
   but it is more straightforward to write a separate function.
*/
  enum EXP_KIND {EXP_SIMPLE, EXP_NEXT, EXP_LTL, EXP_CTL};

  static boolean isCorrectExp(node_ptr exp, enum EXP_KIND expectedKind);

  static node_ptr build_case_colon_node(node_ptr l,
                                        node_ptr r,
                                        int linum);

  static int nusmv_parse_psl(void);

#line 173 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "grammar.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_CONSTRAINT = 3,             /* TOK_CONSTRAINT  */
  YYSYMBOL_TOK_ITYPE = 4,                  /* TOK_ITYPE  */
  YYSYMBOL_TOK_MODULE = 5,                 /* TOK_MODULE  */
  YYSYMBOL_TOK_PROCESS = 6,                /* TOK_PROCESS  */
  YYSYMBOL_TOK_CONTEXT = 7,                /* TOK_CONTEXT  */
  YYSYMBOL_TOK_EU = 8,                     /* TOK_EU  */
  YYSYMBOL_TOK_AU = 9,                     /* TOK_AU  */
  YYSYMBOL_TOK_EBU = 10,                   /* TOK_EBU  */
  YYSYMBOL_TOK_ABU = 11,                   /* TOK_ABU  */
  YYSYMBOL_TOK_MINU = 12,                  /* TOK_MINU  */
  YYSYMBOL_TOK_MAXU = 13,                  /* TOK_MAXU  */
  YYSYMBOL_TOK_VAR = 14,                   /* TOK_VAR  */
  YYSYMBOL_TOK_FROZENVAR = 15,             /* TOK_FROZENVAR  */
  YYSYMBOL_TOK_IVAR = 16,                  /* TOK_IVAR  */
  YYSYMBOL_TOK_FUN = 17,                   /* TOK_FUN  */
  YYSYMBOL_TOK_DEFINE = 18,                /* TOK_DEFINE  */
  YYSYMBOL_TOK_ARRAY_DEFINE = 19,          /* TOK_ARRAY_DEFINE  */
  YYSYMBOL_TOK_INIT = 20,                  /* TOK_INIT  */
  YYSYMBOL_TOK_TRANS = 21,                 /* TOK_TRANS  */
  YYSYMBOL_TOK_INVAR = 22,                 /* TOK_INVAR  */
  YYSYMBOL_TOK_SPEC = 23,                  /* TOK_SPEC  */
  YYSYMBOL_TOK_CTLSPEC = 24,               /* TOK_CTLSPEC  */
  YYSYMBOL_TOK_LTLSPEC = 25,               /* TOK_LTLSPEC  */
  YYSYMBOL_TOK_COMPUTE = 26,               /* TOK_COMPUTE  */
  YYSYMBOL_TOK_NAME = 27,                  /* TOK_NAME  */
  YYSYMBOL_TOK_PSLSPEC = 28,               /* TOK_PSLSPEC  */
  YYSYMBOL_TOK_CONSTANTS = 29,             /* TOK_CONSTANTS  */
  YYSYMBOL_TOK_INVARSPEC = 30,             /* TOK_INVARSPEC  */
  YYSYMBOL_TOK_FAIRNESS = 31,              /* TOK_FAIRNESS  */
  YYSYMBOL_TOK_COMPASSION = 32,            /* TOK_COMPASSION  */
  YYSYMBOL_TOK_JUSTICE = 33,               /* TOK_JUSTICE  */
  YYSYMBOL_TOK_ISA = 34,                   /* TOK_ISA  */
  YYSYMBOL_TOK_ASSIGN = 35,                /* TOK_ASSIGN  */
  YYSYMBOL_TOK_OF = 36,                    /* TOK_OF  */
  YYSYMBOL_TOK_CONS = 37,                  /* TOK_CONS  */
  YYSYMBOL_TOK_SEMI = 38,                  /* TOK_SEMI  */
  YYSYMBOL_TOK_LP = 39,                    /* TOK_LP  */
  YYSYMBOL_TOK_RP = 40,                    /* TOK_RP  */
  YYSYMBOL_TOK_RB = 41,                    /* TOK_RB  */
  YYSYMBOL_TOK_LCB = 42,                   /* TOK_LCB  */
  YYSYMBOL_TOK_RCB = 43,                   /* TOK_RCB  */
  YYSYMBOL_TOK_EQDEF = 44,                 /* TOK_EQDEF  */
  YYSYMBOL_TOK_TWODOTS = 45,               /* TOK_TWODOTS  */
  YYSYMBOL_TOK_SELF = 46,                  /* TOK_SELF  */
  YYSYMBOL_TOK_CASE = 47,                  /* TOK_CASE  */
  YYSYMBOL_TOK_ESAC = 48,                  /* TOK_ESAC  */
  YYSYMBOL_TOK_COLON = 49,                 /* TOK_COLON  */
  YYSYMBOL_TOK_INCONTEXT = 50,             /* TOK_INCONTEXT  */
  YYSYMBOL_TOK_SIMPWFF = 51,               /* TOK_SIMPWFF  */
  YYSYMBOL_TOK_NEXTWFF = 52,               /* TOK_NEXTWFF  */
  YYSYMBOL_TOK_LTLWFF = 53,                /* TOK_LTLWFF  */
  YYSYMBOL_TOK_LTLPSL = 54,                /* TOK_LTLPSL  */
  YYSYMBOL_TOK_CTLWFF = 55,                /* TOK_CTLWFF  */
  YYSYMBOL_TOK_COMPWFF = 56,               /* TOK_COMPWFF  */
  YYSYMBOL_TOK_COMPID = 57,                /* TOK_COMPID  */
  YYSYMBOL_TOK_ARRAY = 58,                 /* TOK_ARRAY  */
  YYSYMBOL_TOK_BOOLEAN = 59,               /* TOK_BOOLEAN  */
  YYSYMBOL_TOK_WORD = 60,                  /* TOK_WORD  */
  YYSYMBOL_TOK_BOOL = 61,                  /* TOK_BOOL  */
  YYSYMBOL_TOK_WORD1 = 62,                 /* TOK_WORD1  */
  YYSYMBOL_TOK_CONST_ARRAY = 63,           /* TOK_CONST_ARRAY  */
  YYSYMBOL_TOK_WAREAD = 64,                /* TOK_WAREAD  */
  YYSYMBOL_TOK_WAWRITE = 65,               /* TOK_WAWRITE  */
  YYSYMBOL_TOK_SIGNED = 66,                /* TOK_SIGNED  */
  YYSYMBOL_TOK_UNSIGNED = 67,              /* TOK_UNSIGNED  */
  YYSYMBOL_TOK_EXTEND = 68,                /* TOK_EXTEND  */
  YYSYMBOL_TOK_UWCONST = 69,               /* TOK_UWCONST  */
  YYSYMBOL_TOK_SWCONST = 70,               /* TOK_SWCONST  */
  YYSYMBOL_TOK_WRESIZE = 71,               /* TOK_WRESIZE  */
  YYSYMBOL_TOK_WSIZEOF = 72,               /* TOK_WSIZEOF  */
  YYSYMBOL_TOK_WTOINT = 73,                /* TOK_WTOINT  */
  YYSYMBOL_TOK_COUNT = 74,                 /* TOK_COUNT  */
  YYSYMBOL_TOK_TYPEOF = 75,                /* TOK_TYPEOF  */
  YYSYMBOL_TOK_ATOM = 76,                  /* TOK_ATOM  */
  YYSYMBOL_TOK_FALSEEXP = 77,              /* TOK_FALSEEXP  */
  YYSYMBOL_TOK_TRUEEXP = 78,               /* TOK_TRUEEXP  */
  YYSYMBOL_TOK_NUMBER = 79,                /* TOK_NUMBER  */
  YYSYMBOL_TOK_NUMBER_FRAC = 80,           /* TOK_NUMBER_FRAC  */
  YYSYMBOL_TOK_NUMBER_REAL = 81,           /* TOK_NUMBER_REAL  */
  YYSYMBOL_TOK_NUMBER_EXP = 82,            /* TOK_NUMBER_EXP  */
  YYSYMBOL_TOK_NUMBER_WORD = 83,           /* TOK_NUMBER_WORD  */
  YYSYMBOL_TOK_ABS = 84,                   /* TOK_ABS  */
  YYSYMBOL_TOK_MIN = 85,                   /* TOK_MIN  */
  YYSYMBOL_TOK_MAX = 86,                   /* TOK_MAX  */
  YYSYMBOL_TOK_COMMA = 87,                 /* TOK_COMMA  */
  YYSYMBOL_TOK_IMPLIES = 88,               /* TOK_IMPLIES  */
  YYSYMBOL_TOK_IFF = 89,                   /* TOK_IFF  */
  YYSYMBOL_TOK_OR = 90,                    /* TOK_OR  */
  YYSYMBOL_TOK_XOR = 91,                   /* TOK_XOR  */
  YYSYMBOL_TOK_XNOR = 92,                  /* TOK_XNOR  */
  YYSYMBOL_TOK_AND = 93,                   /* TOK_AND  */
  YYSYMBOL_TOK_NOT = 94,                   /* TOK_NOT  */
  YYSYMBOL_TOK_QUESTIONMARK = 95,          /* TOK_QUESTIONMARK  */
  YYSYMBOL_TOK_EX = 96,                    /* TOK_EX  */
  YYSYMBOL_TOK_AX = 97,                    /* TOK_AX  */
  YYSYMBOL_TOK_EF = 98,                    /* TOK_EF  */
  YYSYMBOL_TOK_AF = 99,                    /* TOK_AF  */
  YYSYMBOL_TOK_EG = 100,                   /* TOK_EG  */
  YYSYMBOL_TOK_AG = 101,                   /* TOK_AG  */
  YYSYMBOL_TOK_EE = 102,                   /* TOK_EE  */
  YYSYMBOL_TOK_AA = 103,                   /* TOK_AA  */
  YYSYMBOL_TOK_SINCE = 104,                /* TOK_SINCE  */
  YYSYMBOL_TOK_UNTIL = 105,                /* TOK_UNTIL  */
  YYSYMBOL_TOK_TRIGGERED = 106,            /* TOK_TRIGGERED  */
  YYSYMBOL_TOK_RELEASES = 107,             /* TOK_RELEASES  */
  YYSYMBOL_TOK_EBF = 108,                  /* TOK_EBF  */
  YYSYMBOL_TOK_EBG = 109,                  /* TOK_EBG  */
  YYSYMBOL_TOK_ABF = 110,                  /* TOK_ABF  */
  YYSYMBOL_TOK_ABG = 111,                  /* TOK_ABG  */
  YYSYMBOL_TOK_BUNTIL = 112,               /* TOK_BUNTIL  */
  YYSYMBOL_TOK_MMIN = 113,                 /* TOK_MMIN  */
  YYSYMBOL_TOK_MMAX = 114,                 /* TOK_MMAX  */
  YYSYMBOL_TOK_OP_NEXT = 115,              /* TOK_OP_NEXT  */
  YYSYMBOL_TOK_OP_GLOBAL = 116,            /* TOK_OP_GLOBAL  */
  YYSYMBOL_TOK_OP_FUTURE = 117,            /* TOK_OP_FUTURE  */
  YYSYMBOL_TOK_OP_PREC = 118,              /* TOK_OP_PREC  */
  YYSYMBOL_TOK_OP_NOTPRECNOT = 119,        /* TOK_OP_NOTPRECNOT  */
  YYSYMBOL_TOK_OP_HISTORICAL = 120,        /* TOK_OP_HISTORICAL  */
  YYSYMBOL_TOK_OP_ONCE = 121,              /* TOK_OP_ONCE  */
  YYSYMBOL_TOK_EQUAL = 122,                /* TOK_EQUAL  */
  YYSYMBOL_TOK_NOTEQUAL = 123,             /* TOK_NOTEQUAL  */
  YYSYMBOL_TOK_LT = 124,                   /* TOK_LT  */
  YYSYMBOL_TOK_GT = 125,                   /* TOK_GT  */
  YYSYMBOL_TOK_LE = 126,                   /* TOK_LE  */
  YYSYMBOL_TOK_GE = 127,                   /* TOK_GE  */
  YYSYMBOL_TOK_UNION = 128,                /* TOK_UNION  */
  YYSYMBOL_TOK_SETIN = 129,                /* TOK_SETIN  */
  YYSYMBOL_TOK_LSHIFT = 130,               /* TOK_LSHIFT  */
  YYSYMBOL_TOK_RSHIFT = 131,               /* TOK_RSHIFT  */
  YYSYMBOL_TOK_LROTATE = 132,              /* TOK_LROTATE  */
  YYSYMBOL_TOK_RROTATE = 133,              /* TOK_RROTATE  */
  YYSYMBOL_TOK_MOD = 134,                  /* TOK_MOD  */
  YYSYMBOL_TOK_PLUS = 135,                 /* TOK_PLUS  */
  YYSYMBOL_TOK_MINUS = 136,                /* TOK_MINUS  */
  YYSYMBOL_TOK_TIMES = 137,                /* TOK_TIMES  */
  YYSYMBOL_TOK_DIVIDE = 138,               /* TOK_DIVIDE  */
  YYSYMBOL_TOK_NEXT = 139,                 /* TOK_NEXT  */
  YYSYMBOL_TOK_SMALLINIT = 140,            /* TOK_SMALLINIT  */
  YYSYMBOL_TOK_CONCATENATION = 141,        /* TOK_CONCATENATION  */
  YYSYMBOL_TOK_LB = 142,                   /* TOK_LB  */
  YYSYMBOL_TOK_DOT = 143,                  /* TOK_DOT  */
  YYSYMBOL_TOK_BIT = 144,                  /* TOK_BIT  */
  YYSYMBOL_YYACCEPT = 145,                 /* $accept  */
  YYSYMBOL_number = 146,                   /* number  */
  YYSYMBOL_integer = 147,                  /* integer  */
  YYSYMBOL_number_word = 148,              /* number_word  */
  YYSYMBOL_number_frac = 149,              /* number_frac  */
  YYSYMBOL_number_real = 150,              /* number_real  */
  YYSYMBOL_number_exp = 151,               /* number_exp  */
  YYSYMBOL_subrange = 152,                 /* subrange  */
  YYSYMBOL_subrangetype = 153,             /* subrangetype  */
  YYSYMBOL_constant = 154,                 /* constant  */
  YYSYMBOL_primary_expr = 155,             /* primary_expr  */
  YYSYMBOL_nfunc_expr = 156,               /* nfunc_expr  */
  YYSYMBOL_primary_expr_type = 157,        /* primary_expr_type  */
  YYSYMBOL_count_param_list = 158,         /* count_param_list  */
  YYSYMBOL_case_element_list_expr = 159,   /* case_element_list_expr  */
  YYSYMBOL_case_element_expr = 160,        /* case_element_expr  */
  YYSYMBOL_concatination_expr_type = 161,  /* concatination_expr_type  */
  YYSYMBOL_concatination_expr = 162,       /* concatination_expr  */
  YYSYMBOL_multiplicative_expr_type = 163, /* multiplicative_expr_type  */
  YYSYMBOL_multiplicative_expr = 164,      /* multiplicative_expr  */
  YYSYMBOL_additive_expr_type = 165,       /* additive_expr_type  */
  YYSYMBOL_additive_expr = 166,            /* additive_expr  */
  YYSYMBOL_shift_expr_type = 167,          /* shift_expr_type  */
  YYSYMBOL_shift_expr = 168,               /* shift_expr  */
  YYSYMBOL_set_expr = 169,                 /* set_expr  */
  YYSYMBOL_set_list_expr = 170,            /* set_list_expr  */
  YYSYMBOL_union_expr = 171,               /* union_expr  */
  YYSYMBOL_in_expr = 172,                  /* in_expr  */
  YYSYMBOL_relational_expr = 173,          /* relational_expr  */
  YYSYMBOL_ctl_expr = 174,                 /* ctl_expr  */
  YYSYMBOL_pure_ctl_expr = 175,            /* pure_ctl_expr  */
  YYSYMBOL_ctl_and_expr = 176,             /* ctl_and_expr  */
  YYSYMBOL_ctl_or_expr = 177,              /* ctl_or_expr  */
  YYSYMBOL_ctl_iff_expr = 178,             /* ctl_iff_expr  */
  YYSYMBOL_ctl_implies_expr = 179,         /* ctl_implies_expr  */
  YYSYMBOL_ctl_basic_expr = 180,           /* ctl_basic_expr  */
  YYSYMBOL_ltl_unary_expr = 181,           /* ltl_unary_expr  */
  YYSYMBOL_pure_ltl_unary_expr = 182,      /* pure_ltl_unary_expr  */
  YYSYMBOL_ltl_binary_expr = 183,          /* ltl_binary_expr  */
  YYSYMBOL_and_expr = 184,                 /* and_expr  */
  YYSYMBOL_or_expr = 185,                  /* or_expr  */
  YYSYMBOL_ite_expr = 186,                 /* ite_expr  */
  YYSYMBOL_iff_expr = 187,                 /* iff_expr  */
  YYSYMBOL_implies_expr = 188,             /* implies_expr  */
  YYSYMBOL_basic_expr = 189,               /* basic_expr  */
  YYSYMBOL_simple_expression = 190,        /* simple_expression  */
  YYSYMBOL_next_expression = 191,          /* next_expression  */
  YYSYMBOL_ctl_expression = 192,           /* ctl_expression  */
  YYSYMBOL_ltl_expression = 193,           /* ltl_expression  */
  YYSYMBOL_compute_expression = 194,       /* compute_expression  */
  YYSYMBOL_itype = 195,                    /* itype  */
  YYSYMBOL_type = 196,                     /* type  */
  YYSYMBOL_type_value_list = 197,          /* type_value_list  */
  YYSYMBOL_type_value = 198,               /* type_value  */
  YYSYMBOL_complex_atom = 199,             /* complex_atom  */
  YYSYMBOL_module_type = 200,              /* module_type  */
  YYSYMBOL_next_list_expression = 201,     /* next_list_expression  */
  YYSYMBOL_module_list = 202,              /* module_list  */
  YYSYMBOL_module = 203,                   /* module  */
  YYSYMBOL_module_sign = 204,              /* module_sign  */
  YYSYMBOL_atom_list = 205,                /* atom_list  */
  YYSYMBOL_declarations = 206,             /* declarations  */
  YYSYMBOL_declaration = 207,              /* declaration  */
  YYSYMBOL_var = 208,                      /* var  */
  YYSYMBOL_frozen_var = 209,               /* frozen_var  */
  YYSYMBOL_input_var = 210,                /* input_var  */
  YYSYMBOL_fun_def = 211,                  /* fun_def  */
  YYSYMBOL_var_decl_list = 212,            /* var_decl_list  */
  YYSYMBOL_fvar_decl_list = 213,           /* fvar_decl_list  */
  YYSYMBOL_ivar_decl_list = 214,           /* ivar_decl_list  */
  YYSYMBOL_fun_decl_list = 215,            /* fun_decl_list  */
  YYSYMBOL_var_decl = 216,                 /* var_decl  */
  YYSYMBOL_fvar_decl = 217,                /* fvar_decl  */
  YYSYMBOL_ivar_decl = 218,                /* ivar_decl  */
  YYSYMBOL_fun_decl = 219,                 /* fun_decl  */
  YYSYMBOL_nfun_type = 220,                /* nfun_type  */
  YYSYMBOL_nfun_ftype = 221,               /* nfun_ftype  */
  YYSYMBOL_define_decls = 222,             /* define_decls  */
  YYSYMBOL_define_list = 223,              /* define_list  */
  YYSYMBOL_define = 224,                   /* define  */
  YYSYMBOL_array_define = 225,             /* array_define  */
  YYSYMBOL_array_define_list = 226,        /* array_define_list  */
  YYSYMBOL_array_expression = 227,         /* array_expression  */
  YYSYMBOL_array_expression_list = 228,    /* array_expression_list  */
  YYSYMBOL_array_contents = 229,           /* array_contents  */
  YYSYMBOL_assign = 230,                   /* assign  */
  YYSYMBOL_assign_list = 231,              /* assign_list  */
  YYSYMBOL_one_assign = 232,               /* one_assign  */
  YYSYMBOL_init = 233,                     /* init  */
  YYSYMBOL_invar = 234,                    /* invar  */
  YYSYMBOL_trans = 235,                    /* trans  */
  YYSYMBOL_fairness = 236,                 /* fairness  */
  YYSYMBOL_justice = 237,                  /* justice  */
  YYSYMBOL_compassion = 238,               /* compassion  */
  YYSYMBOL__invarspec = 239,               /* _invarspec  */
  YYSYMBOL_invarspec = 240,                /* invarspec  */
  YYSYMBOL__ctlspec = 241,                 /* _ctlspec  */
  YYSYMBOL_ctlspec = 242,                  /* ctlspec  */
  YYSYMBOL__ltlspec = 243,                 /* _ltlspec  */
  YYSYMBOL_ltlspec = 244,                  /* ltlspec  */
  YYSYMBOL__compute = 245,                 /* _compute  */
  YYSYMBOL_compute = 246,                  /* compute  */
  YYSYMBOL_pslspec = 247,                  /* pslspec  */
  YYSYMBOL_constants = 248,                /* constants  */
  YYSYMBOL_constants_expression = 249,     /* constants_expression  */
  YYSYMBOL_isa = 250,                      /* isa  */
  YYSYMBOL_optsemi = 251,                  /* optsemi  */
  YYSYMBOL_decl_var_id = 252,              /* decl_var_id  */
  YYSYMBOL_var_id = 253,                   /* var_id  */
  YYSYMBOL_command = 254,                  /* command  */
  YYSYMBOL_command_case = 255,             /* command_case  */
  YYSYMBOL_context = 256,                  /* context  */
  YYSYMBOL__simpwff = 257,                 /* _simpwff  */
  YYSYMBOL_begin = 258,                    /* begin  */
  YYSYMBOL_259_1 = 259,                    /* $@1  */
  YYSYMBOL_260_2 = 260,                    /* $@2  */
  YYSYMBOL_261_3 = 261                     /* $@3  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2656

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  145
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  117
/* YYNRULES -- Number of rules.  */
#define YYNRULES  336
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  723

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   399


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   252,   252,   253,   256,   257,   258,   262,   264,   266,
     268,   271,   275,   279,   280,   281,   283,   285,   287,   289,
     290,   291,   296,   301,   310,   311,   318,   337,   338,   339,
     340,   341,   350,   359,   365,   370,   371,   376,   379,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   392,   395,
     398,   400,   405,   406,   410,   421,   425,   431,   432,   437,
     438,   443,   444,   445,   446,   450,   451,   452,   453,   458,
     459,   460,   465,   466,   467,   470,   471,   472,   475,   476,
     477,   483,   484,   485,   488,   489,   493,   494,   497,   498,
     502,   503,   504,   505,   506,   507,   508,   511,   512,   516,
     517,   518,   519,   520,   521,   522,   524,   526,   528,   530,
     531,   532,   533,   536,   542,   543,   546,   547,   548,   549,
     552,   553,   557,   558,   561,   565,   566,   571,   572,   573,
     574,   575,   577,   578,   580,   581,   583,   584,   587,   594,
     595,   597,   599,   606,   616,   617,   621,   622,   623,   624,
     628,   629,   633,   634,   638,   639,   643,   650,   653,   656,
     659,   663,   665,   674,   675,   677,   679,   681,   682,   684,
     686,   688,   694,   695,   696,   700,   701,   704,   705,   706,
     707,   710,   711,   714,   715,   716,   718,   730,   731,   743,
     744,   747,   750,   751,   752,   755,   756,   761,   762,   763,
     766,   767,   768,   769,   770,   771,   772,   773,   774,   775,
     776,   777,   778,   779,   780,   781,   782,   783,   784,   785,
     794,   795,   798,   799,   802,   803,   805,   809,   815,   816,
     817,   819,   820,   821,   823,   824,   825,   827,   828,   829,
     832,   834,   836,   838,   841,   845,   846,   850,   853,   854,
     855,   858,   860,   873,   877,   878,   879,   883,   884,   888,
     889,   893,   894,   898,   900,   901,   902,   904,   906,   911,
     919,   921,   923,   927,   930,   933,   939,   940,   942,   943,
     946,   947,   949,   950,   951,   952,   955,   956,   959,   960,
     963,   964,   966,   967,   971,   981,   986,   987,   988,   995,
     999,   999,  1007,  1008,  1009,  1010,  1011,  1020,  1021,  1022,
    1023,  1024,  1031,  1032,  1033,  1036,  1038,  1040,  1042,  1044,
    1048,  1049,  1050,  1051,  1052,  1053,  1057,  1058,  1059,  1062,
    1063,  1069,  1069,  1079,  1079,  1086,  1086
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOK_CONSTRAINT",
  "TOK_ITYPE", "TOK_MODULE", "TOK_PROCESS", "TOK_CONTEXT", "TOK_EU",
  "TOK_AU", "TOK_EBU", "TOK_ABU", "TOK_MINU", "TOK_MAXU", "TOK_VAR",
  "TOK_FROZENVAR", "TOK_IVAR", "TOK_FUN", "TOK_DEFINE", "TOK_ARRAY_DEFINE",
  "TOK_INIT", "TOK_TRANS", "TOK_INVAR", "TOK_SPEC", "TOK_CTLSPEC",
  "TOK_LTLSPEC", "TOK_COMPUTE", "TOK_NAME", "TOK_PSLSPEC", "TOK_CONSTANTS",
  "TOK_INVARSPEC", "TOK_FAIRNESS", "TOK_COMPASSION", "TOK_JUSTICE",
  "TOK_ISA", "TOK_ASSIGN", "TOK_OF", "TOK_CONS", "TOK_SEMI", "TOK_LP",
  "TOK_RP", "TOK_RB", "TOK_LCB", "TOK_RCB", "TOK_EQDEF", "TOK_TWODOTS",
  "TOK_SELF", "TOK_CASE", "TOK_ESAC", "TOK_COLON", "TOK_INCONTEXT",
  "TOK_SIMPWFF", "TOK_NEXTWFF", "TOK_LTLWFF", "TOK_LTLPSL", "TOK_CTLWFF",
  "TOK_COMPWFF", "TOK_COMPID", "TOK_ARRAY", "TOK_BOOLEAN", "TOK_WORD",
  "TOK_BOOL", "TOK_WORD1", "TOK_CONST_ARRAY", "TOK_WAREAD", "TOK_WAWRITE",
  "TOK_SIGNED", "TOK_UNSIGNED", "TOK_EXTEND", "TOK_UWCONST", "TOK_SWCONST",
  "TOK_WRESIZE", "TOK_WSIZEOF", "TOK_WTOINT", "TOK_COUNT", "TOK_TYPEOF",
  "TOK_ATOM", "TOK_FALSEEXP", "TOK_TRUEEXP", "TOK_NUMBER",
  "TOK_NUMBER_FRAC", "TOK_NUMBER_REAL", "TOK_NUMBER_EXP",
  "TOK_NUMBER_WORD", "TOK_ABS", "TOK_MIN", "TOK_MAX", "TOK_COMMA",
  "TOK_IMPLIES", "TOK_IFF", "TOK_OR", "TOK_XOR", "TOK_XNOR", "TOK_AND",
  "TOK_NOT", "TOK_QUESTIONMARK", "TOK_EX", "TOK_AX", "TOK_EF", "TOK_AF",
  "TOK_EG", "TOK_AG", "TOK_EE", "TOK_AA", "TOK_SINCE", "TOK_UNTIL",
  "TOK_TRIGGERED", "TOK_RELEASES", "TOK_EBF", "TOK_EBG", "TOK_ABF",
  "TOK_ABG", "TOK_BUNTIL", "TOK_MMIN", "TOK_MMAX", "TOK_OP_NEXT",
  "TOK_OP_GLOBAL", "TOK_OP_FUTURE", "TOK_OP_PREC", "TOK_OP_NOTPRECNOT",
  "TOK_OP_HISTORICAL", "TOK_OP_ONCE", "TOK_EQUAL", "TOK_NOTEQUAL",
  "TOK_LT", "TOK_GT", "TOK_LE", "TOK_GE", "TOK_UNION", "TOK_SETIN",
  "TOK_LSHIFT", "TOK_RSHIFT", "TOK_LROTATE", "TOK_RROTATE", "TOK_MOD",
  "TOK_PLUS", "TOK_MINUS", "TOK_TIMES", "TOK_DIVIDE", "TOK_NEXT",
  "TOK_SMALLINIT", "TOK_CONCATENATION", "TOK_LB", "TOK_DOT", "TOK_BIT",
  "$accept", "number", "integer", "number_word", "number_frac",
  "number_real", "number_exp", "subrange", "subrangetype", "constant",
  "primary_expr", "nfunc_expr", "primary_expr_type", "count_param_list",
  "case_element_list_expr", "case_element_expr", "concatination_expr_type",
  "concatination_expr", "multiplicative_expr_type", "multiplicative_expr",
  "additive_expr_type", "additive_expr", "shift_expr_type", "shift_expr",
  "set_expr", "set_list_expr", "union_expr", "in_expr", "relational_expr",
  "ctl_expr", "pure_ctl_expr", "ctl_and_expr", "ctl_or_expr",
  "ctl_iff_expr", "ctl_implies_expr", "ctl_basic_expr", "ltl_unary_expr",
  "pure_ltl_unary_expr", "ltl_binary_expr", "and_expr", "or_expr",
  "ite_expr", "iff_expr", "implies_expr", "basic_expr",
  "simple_expression", "next_expression", "ctl_expression",
  "ltl_expression", "compute_expression", "itype", "type",
  "type_value_list", "type_value", "complex_atom", "module_type",
  "next_list_expression", "module_list", "module", "module_sign",
  "atom_list", "declarations", "declaration", "var", "frozen_var",
  "input_var", "fun_def", "var_decl_list", "fvar_decl_list",
  "ivar_decl_list", "fun_decl_list", "var_decl", "fvar_decl", "ivar_decl",
  "fun_decl", "nfun_type", "nfun_ftype", "define_decls", "define_list",
  "define", "array_define", "array_define_list", "array_expression",
  "array_expression_list", "array_contents", "assign", "assign_list",
  "one_assign", "init", "invar", "trans", "fairness", "justice",
  "compassion", "_invarspec", "invarspec", "_ctlspec", "ctlspec",
  "_ltlspec", "ltlspec", "_compute", "compute", "pslspec", "constants",
  "constants_expression", "isa", "optsemi", "decl_var_id", "var_id",
  "command", "command_case", "context", "_simpwff", "begin", "$@1", "$@2",
  "$@3", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399
};
#endif

#define YYPACT_NINF (-514)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-334)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2555,    93,    79,  2563,  1671,  -514,    43,    79,  -514,    44,
    1671,  1998,  1671,  1671,  1671,  1671,  1671,  1671,  1671,   -39,
      25,  -514,  -514,  1671,  1671,  -514,  1671,    65,    85,   101,
     114,   144,   155,   158,   205,   219,   221,   236,   248,   250,
     262,  -514,  -514,  -514,    50,  -514,  -514,  -514,  -514,   266,
     282,   293,  1754,  1837,  1837,  1837,  1837,  1837,  1837,   -32,
     -10,   -30,   -30,   -30,   -30,  1671,  1091,  1174,  1671,  1671,
    1257,  1340,    55,  2238,   310,  -514,   206,  -514,  -514,  -514,
    -514,  -514,  -514,   319,  -514,   223,   231,   148,    -6,   166,
    -514,   252,   259,   187,  -514,  -514,  -514,  -514,   224,   304,
     188,  -514,   289,  -514,  -514,  -514,   376,  -514,  -514,  -514,
    -514,   378,   -13,  1509,  -514,   275,    19,    31,  -514,  2317,
     341,  2317,  -514,   223,   280,   165,   258,   105,   386,   387,
    -514,   388,   389,    35,  -514,    39,  -514,   183,  -514,  -514,
     184,  -514,   286,   287,   199,  -514,  -514,  -514,    -1,   390,
      38,  -514,   383,  1671,   384,  1671,  1671,   357,  1671,  1671,
    1671,  1671,  1671,  1671,  1671,  1671,  1671,  1671,  1671,  1671,
    1671,  1671,   223,  -514,  -514,  1916,  -514,  -514,  -514,  -514,
    -514,  -514,  1837,  1837,  -514,   355,   356,  1837,  1837,  1837,
    1837,  -514,   359,  -514,   365,  -514,  -514,  -514,   366,  -514,
     367,  -514,   397,   403,   223,  1671,   -30,  1671,  1671,   102,
    2317,  2317,  2317,  2317,  2317,  2317,  2317,  2317,  2159,  2159,
    2159,  2159,  2159,  2159,  2159,  2159,  1671,  1671,  1671,  1671,
    1671,  1671,  1671,  1671,  1671,  1671,  1671,    36,  2621,  -514,
    -514,  -514,  -514,  -514,    40,  -514,   308,  1998,   317,   427,
    1671,   323,   324,  -514,  2317,  2317,  2317,  2317,  2317,  2317,
    2317,  2317,  2317,  -514,  -514,  -514,  -514,  -514,   392,  -514,
     392,  -514,   392,  -514,   392,  -514,  1671,  1671,   392,  -514,
    -514,  1671,   167,  -514,  -514,  1671,  -514,  -514,  1671,   424,
     431,   433,   391,   393,   435,   436,   395,   409,   418,   419,
     437,   439,   467,   421,   470,   425,   426,  -514,   422,   234,
     307,  -514,   133,   135,  -514,  -514,  -514,  -514,  -514,  -514,
     429,   432,   438,   440,   471,  -514,  -514,    16,   473,   474,
     477,  -514,  -514,   319,   231,   231,   231,   148,   148,    -6,
      -6,  -514,   252,   259,   259,   259,   259,   259,   259,  -514,
    -514,  -514,  -514,   224,   304,   304,   304,   475,  -514,  -514,
    -514,  -514,    27,  -514,   444,   444,   444,   444,  -514,  -514,
    1671,  1671,  1671,   753,   838,   923,   118,  -514,   450,  1008,
    1671,   490,  1671,   454,  -514,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  -514,   -13,   455,  -514,
    1671,  1998,   491,  1671,  1671,   223,   280,   280,   280,   119,
     119,   269,   258,   258,  -514,     4,     4,     4,     4,   446,
     447,     4,   494,  -514,  -514,  -514,   498,  -514,  -514,    25,
    1671,  1671,  -514,  -514,  1671,  2317,  2317,  1671,  -514,  -514,
    -514,  1671,  -514,  1671,  1671,  1837,  1837,  1837,  1837,  1837,
    1837,  1837,   -30,  1837,   -30,   458,   459,   460,   461,  -514,
    -514,  1671,  1671,  -514,  1671,  -514,   465,  -514,   469,  -514,
      64,   588,  -514,    82,  2404,  -514,    84,  2443,  -514,    86,
    2481,  2517,   504,   504,   504,    25,  -514,    25,  -514,    25,
    -514,    25,  -514,   308,    22,    25,  -514,   504,  1671,   504,
    -514,   322,  -514,  -514,   502,  -514,  -514,   507,   508,  1671,
     478,  -514,  -514,  -514,  -514,  1671,  1671,  -514,  -514,  -514,
      17,   510,   464,   513,     6,     8,   515,  -514,   516,   518,
    -514,   422,   422,   422,  -514,   234,   520,  1837,   521,  1837,
     523,   524,   525,   527,  -514,   529,  -514,  -514,  -514,  -514,
     674,   -18,   212,  -514,  -514,  1998,  -514,  -514,  1998,  -514,
    -514,  1998,  -514,  -514,     1,  -514,    34,  -514,  -514,  -514,
      46,    53,    56,    71,  -514,   450,    73,  -514,   472,  -514,
    -514,   532,   534,  -514,    77,   538,  -514,  -514,   535,  -514,
     536,   542,   497,  -514,  1671,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,   544,  -514,   545,  1671,  1671,  1671,  1671,  -514,
     142,  1509,   363,  -514,   549,  -514,   550,   511,  -514,  -514,
     554,   556,  -514,   557,   -26,  1423,   456,  1671,  1671,  1671,
     -39,   308,  1671,  1671,    25,    25,  1671,  1998,  -514,  -514,
    -514,  1671,   559,  -514,  -514,  -514,  -514,  -514,  -514,  2317,
     558,  -514,   560,  1588,  -514,  -514,   574,  -514,  -514,  -514,
    1998,  1998,  1423,   563,   586,   587,  -514,  -514,  -514,  -514,
    -514,   589,    28,    32,   592,  -514,   596,  -514,   590,  2080,
    -514,    29,  -514,  -514,  -514,   540,   553,   591,   600,  -514,
    -514,  -514,   504,   598,   599,  -514,  -514,   142,  -514,  -514,
    1671,   456,  -514,  -514,  -514,  1671,  1671,  -514,  -514,   606,
     607,  -514,  -514
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     335,     0,     0,     0,     0,     1,     0,   332,   189,   314,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   334,   312,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    13,    14,     2,     8,     9,    10,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,    20,    21,    23,
      22,    82,    27,    59,    25,    24,    65,    72,    78,    81,
      86,    88,    90,    97,   125,    98,   139,   126,   144,   146,
     150,   152,   154,   156,   160,   336,   192,   197,   190,   313,
     157,     0,     0,     0,   163,     0,     0,     0,     2,     0,
       0,     0,   167,    57,    61,    69,    75,     0,     0,     0,
     158,     0,     0,   300,   320,   300,   321,   300,   323,   159,
     300,   322,     0,     0,   300,   324,   308,   307,     0,     0,
       0,    84,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,   113,   138,     0,    99,   100,   101,   102,
     103,   104,     0,     0,     4,     0,     0,     0,     0,     0,
       0,   127,     0,   130,     0,   134,   128,   129,     0,   132,
       0,   136,     3,     2,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   318,
     181,   179,   180,   178,     0,   175,   177,     0,     0,     0,
       0,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   319,   315,   317,   316,   301,     0,   329,
       0,   276,     0,   286,     0,   280,     0,     0,     0,   290,
     325,     0,     0,    35,    83,     0,    47,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,   114,   116,   120,
     122,   124,     0,     0,     5,     6,   109,   111,   110,   112,
       0,     0,     0,     0,     0,    11,   187,     0,   157,     0,
       0,    31,    32,    60,    68,    66,    67,    73,    74,    79,
      80,    87,    89,    91,    92,    93,    94,    95,    96,   141,
     140,   143,   142,   145,   147,   148,   149,     0,   155,   153,
     193,   195,     0,   199,   220,   222,   224,   226,   248,   254,
       0,     0,     0,     0,     0,     0,     0,   294,   296,     0,
       0,     0,     0,     0,   264,   198,   201,   202,   203,   204,
     209,   210,   205,   206,   207,   208,   211,   212,   213,   214,
     215,   216,   218,   217,   219,   200,   168,     0,     0,   171,
       0,     0,     0,     0,     0,    58,    64,    62,    63,    70,
      71,    12,    76,    77,   326,   300,   300,   300,   300,     0,
       0,   300,     0,   309,   310,    85,     0,    40,    41,     0,
       0,     0,    43,    44,     0,     0,     0,     0,    17,    18,
      51,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      26,     0,     0,    33,     0,   194,     0,   302,     0,   228,
       0,     0,   231,     0,     0,   234,     0,     0,   237,     0,
       0,     0,   300,   300,   300,     0,   282,     0,   283,     0,
     288,     0,   292,   297,     0,     0,   278,   300,     0,   300,
     299,     0,   176,   182,     0,   170,   164,     0,     0,     0,
       0,   330,   277,   287,   281,     0,     0,   291,   311,    56,
       0,     0,     0,     0,     0,     0,     0,    53,     0,     0,
     115,   117,   118,   119,   123,   121,     0,     0,     0,     0,
       0,     0,     0,     0,   188,     0,   151,   196,   230,   229,
       0,     0,     0,   233,   232,     0,   236,   235,     0,   239,
     238,     0,   250,   249,     0,   256,     0,   270,   272,   271,
       0,     0,     0,     0,   295,     0,     0,   273,     0,   274,
     266,     0,     0,   265,     0,     0,   166,   165,     0,   327,
       0,     0,     0,    48,     0,    45,    15,    16,    46,    37,
      38,   106,     0,   105,     0,     0,     0,     0,     0,    34,
       0,     0,    29,   172,     0,   173,     0,     0,   303,   304,
       0,     0,   245,     0,     0,     0,     0,     0,     0,     0,
       0,   298,     0,     0,     0,     0,     0,     0,   328,   161,
     162,     0,     0,   108,   107,   131,   135,   133,   137,     0,
     183,   174,     0,     0,   240,   305,     0,   241,   242,   243,
       0,     0,     0,     0,     0,     0,   284,   285,   289,   293,
     279,     0,     0,     0,     0,   169,     0,    49,     0,     0,
     184,     0,   306,   244,   246,   262,   259,     0,     0,   251,
     252,   255,   300,     0,     0,   267,    50,     0,   186,   185,
       0,     0,   258,   257,   275,     0,     0,   261,   260,     0,
       0,   269,   268
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -514,  -514,  -107,  -514,  -514,  -514,  -514,   -23,  -112,  -514,
     441,  -514,     7,   195,   495,  -514,    78,   151,   145,   191,
     146,   193,   396,   -34,   442,  -514,   430,    95,  -514,    -3,
     -27,   -74,   190,  -514,   194,  -157,   -36,   605,   428,   154,
    -514,  -219,  -514,   434,    -4,     9,     2,  -249,   657,  -514,
      -8,  -514,  -514,   260,  -362,  -513,    10,  -514,   663,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,
    -514,   197,   198,   192,   185,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,  -222,   -40,   -29,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,  -514,  -514,  -371,  -514,  -330,  -514,  -369,  -514,
    -366,  -514,  -514,  -514,  -514,  -514,  -133,  -279,  -403,  -514,
    -514,   -22,  -514,  -514,  -514,  -514,  -514
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    75,    76,    77,    78,    79,    80,    81,   122,    82,
      83,    84,    85,   302,   152,   153,   124,    86,   125,    87,
     126,    88,   127,    89,    90,   150,    91,    92,    93,    94,
      95,   308,   309,   310,   311,   312,    96,    97,    98,    99,
     100,   101,   102,   103,   110,   111,   135,   140,   137,   144,
     515,   624,   244,   245,   246,   708,   327,     7,     8,   107,
     362,   238,   385,   386,   387,   388,   389,   478,   481,   484,
     487,   479,   482,   485,   488,   633,   634,   390,   490,   573,
     391,   491,   696,   697,   698,   392,   511,   593,   393,   394,
     395,   396,   397,   398,   136,   399,   141,   400,   138,   401,
     145,   402,   403,   404,   504,   405,   269,   480,   148,    21,
      22,   425,   134,     1,     2,     3,     4
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     104,   249,   271,   128,   273,   243,   500,   275,   506,   130,
     502,   279,   130,   104,   139,   131,   503,   359,   123,   149,
     151,   129,   154,   132,   133,   173,   313,   429,   430,   191,
     193,   195,   196,   197,   199,   201,   530,   280,   187,   188,
     189,   190,   267,   496,   498,   635,   606,   625,   607,   184,
     176,   177,   178,   179,   180,   181,   470,   602,   160,   172,
     584,   626,   670,   240,   241,   242,   184,   475,   703,   709,
     161,   146,   704,   267,   142,   143,   360,   267,   636,   251,
     204,   284,   109,   406,     6,   268,   483,   486,   489,   270,
     637,   252,   580,     5,   581,    -4,   582,   638,   583,   325,
     639,   147,   586,   471,   155,   185,   186,   661,   594,   585,
     182,   671,   361,   560,   476,   640,   471,   642,   627,   106,
     123,   646,   185,   186,   156,   285,   172,   407,   204,   214,
     215,   565,   183,   568,   202,   571,   216,   217,   216,   217,
     157,   281,   282,   561,   562,   501,   519,   520,   173,   154,
     260,   289,   290,   158,   292,   293,   294,   295,   296,   281,
     282,   299,   130,   130,   303,   304,   305,   306,   300,   301,
     281,   282,   297,   298,   281,   282,   561,   562,   331,   307,
     307,   332,   172,   159,   316,   317,   318,   319,   281,   282,
     349,   350,   351,   352,   160,   281,   282,   161,   281,   282,
     659,   324,   483,   130,   328,   486,   561,   562,   489,   326,
     330,   574,   576,   281,   282,   281,   282,   329,   660,   281,
     282,   267,   267,   641,   561,   562,   561,   562,   561,   562,
     357,   142,   143,   272,   274,   261,   262,   267,   461,   409,
     463,   682,   683,   433,   162,   462,   434,   464,   426,   278,
     427,   206,   428,   255,   123,   556,   431,   257,   163,   412,
     164,   415,   123,   123,   123,   123,   123,   123,   123,   123,
     678,   680,   139,   139,   679,   165,   600,   601,   231,   232,
     233,   435,   211,   234,   436,   212,   213,   166,   628,   167,
     432,   629,   521,   522,   523,   524,   216,   217,   527,   255,
     243,   168,   256,   257,   546,   169,   548,   676,   677,   220,
     221,   222,   223,   224,   225,   343,   344,   345,   346,   347,
     348,   170,  -263,   590,   456,   457,   458,  -263,   226,   227,
     228,   229,   171,   416,   417,   418,  -263,  -263,  -263,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,   205,
    -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,   207,   577,
     578,   579,   334,   335,   336,   208,   209,   130,   146,   139,
     139,   104,   210,   493,   587,   130,   589,   235,   236,   492,
     218,   494,   541,   542,   543,   354,   355,   356,   219,   507,
     612,   509,   614,   258,   259,   459,   460,   230,   147,   261,
     262,  -183,   663,   419,   420,   337,   338,   422,   423,   339,
     340,   534,   535,   674,   675,   237,   239,   250,   123,   514,
     253,   254,   517,   518,   263,   264,   265,   266,   276,   277,
     283,   286,   291,   288,   314,   315,   531,   532,   320,   547,
     533,   549,    -5,   536,   321,   322,   323,   303,    -6,   538,
     539,   408,   540,   307,   307,   307,   307,   307,   307,   410,
     307,   591,   592,   411,   437,   413,   414,   130,   424,  -221,
     558,   438,   439,   554,  -221,   442,   443,   448,   440,   449,
     441,   555,   444,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,   445,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,   446,   447,   450,   451,   662,
     452,   469,   453,   454,  -158,   455,   465,   588,   473,   466,
     477,   139,   139,   472,   474,   467,   240,   468,   598,   508,
     510,   513,   516,   525,   526,   528,   529,   550,   551,   552,
     553,   557,   267,   595,   307,   477,   307,   688,   596,   597,
     603,   604,   623,   605,   599,   608,   609,   630,   610,   643,
     631,   611,   613,   632,   615,   616,   617,   123,   618,   714,
     619,   644,   123,   645,   647,   123,   648,   649,   123,   655,
     656,   657,   658,   650,   651,   653,   654,   664,  -223,   563,
     666,   665,   667,  -223,   668,   669,   689,   663,   672,   687,
     652,   699,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,   692,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,   700,   701,   707,   710,   123,   702,
     705,   130,   712,   139,   139,   104,   706,   673,   130,   685,
     711,   713,   715,   716,   721,   722,   537,   686,   287,   342,
     545,   333,   681,   544,   123,   684,   421,   174,   353,   130,
     341,   105,   693,   694,   477,   326,   123,   512,   130,   358,
     108,   718,   570,   691,   695,   559,   567,   123,   123,   564,
     620,   717,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,     0,     0,     0,
       0,   130,   695,    23,     0,     0,   112,   719,     0,     0,
      25,    26,     0,     0,     0,   720,     0,     0,     0,     0,
       0,     0,   621,   114,   115,    27,    28,    29,    30,    31,
     116,   117,    34,    35,    36,    37,    38,    39,    40,     0,
     622,    42,    43,   118,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     495,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,    24,     0,     0,     0,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,   120,
     121,     0,     0,    74,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,     0,    53,
      54,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,    63,    64,   497,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,     0,    23,     0,     0,
      24,     0,     0,     0,    25,    26,     0,     0,    72,    73,
       0,     0,    74,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,    52,     0,    53,    54,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,    63,    64,
     499,     0,     0,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    23,     0,     0,    24,     0,     0,     0,    25,
      26,     0,     0,    72,    73,     0,     0,    74,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,     0,    53,
      54,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,    63,    64,   505,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,     0,    23,     0,     0,
      24,     0,     0,     0,    25,    26,     0,     0,    72,    73,
       0,     0,    74,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,    52,     0,    53,    54,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,    65,    66,    67,    68,    69,    70,    71,
      23,     0,     0,    24,     0,     0,     0,    25,    26,     0,
       0,     0,     0,    72,    73,     0,     0,    74,     0,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,    52,     0,    53,    54,    55,
      56,    57,    58,    59,    60,     0,     0,     0,     0,    61,
      62,    63,    64,     0,     0,     0,    65,    66,    67,    68,
      69,    70,    71,    23,     0,     0,    24,     0,     0,     0,
      25,    26,     0,     0,     0,     0,    72,    73,     0,     0,
      74,     0,     0,   192,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,    52,     0,
      53,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,    65,
      66,    67,    68,    69,    70,    71,    23,     0,     0,    24,
       0,     0,     0,    25,    26,     0,     0,     0,     0,    72,
      73,     0,     0,    74,     0,     0,   194,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,    52,     0,    53,    54,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,    61,    62,    63,    64,     0,
       0,     0,    65,    66,    67,    68,    69,    70,    71,    23,
       0,     0,    24,     0,     0,     0,    25,    26,     0,     0,
       0,     0,    72,    73,     0,     0,    74,     0,     0,   198,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,    52,     0,    53,    54,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,    65,    66,    67,    68,    69,
      70,    71,    23,     0,     0,    24,     0,     0,     0,    25,
      26,     0,     0,     0,     0,    72,    73,     0,     0,    74,
       0,     0,   200,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,     0,    53,
      54,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,    63,    64,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,   247,     0,     0,    23,     0,
       0,     0,     0,     0,     0,    25,    26,     0,    72,    73,
       0,     0,    74,     0,     0,   672,     0,     0,     0,   248,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,    41,    42,    43,   118,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,   690,     0,
      24,     0,     0,     0,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,   120,   121,     0,     0,    74,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,    52,     0,    53,    54,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,    65,    66,    67,    68,    69,    70,    71,
      23,     0,     0,    24,     0,     0,     0,    25,    26,     0,
       0,     0,     0,    72,    73,     0,     0,    74,     0,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,    52,     0,    53,    54,    55,
      56,    57,    58,    59,    60,     0,     0,     0,     0,    61,
      62,    63,    64,     0,     0,     0,    65,    66,    67,    68,
      69,    70,    71,    23,     0,     0,     0,     0,     0,     0,
      25,    26,     0,     0,     0,     0,    72,    73,     0,     0,
      74,     0,     0,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,    43,   118,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,    52,     0,
      53,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,    65,
      66,    67,    68,    69,    70,    71,    23,     0,     0,    24,
       0,     0,     0,    25,    26,     0,     0,     0,     0,   120,
     121,     0,     0,    74,     0,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,   175,     0,    53,    54,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,     0,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,     0,     0,    74,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,    43,   118,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
     175,     0,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     0,     0,
     112,     0,     0,     0,    25,    26,     0,     0,     0,     0,
       0,   120,   121,     0,     0,    74,   113,   114,   115,    27,
      28,    29,    30,    31,   116,   117,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,   118,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
       0,     0,   112,     0,     0,     0,    25,    26,     0,     0,
       0,     0,     0,   120,   121,     0,     0,    74,   621,   114,
     115,    27,    28,    29,    30,    31,   116,   117,    34,    35,
      36,    37,    38,    39,    40,     0,   622,    42,    43,   118,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
       0,    24,     0,     0,     0,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,   120,   121,     0,     0,    74,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,     0,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,     0,     0,    74,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,   203,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,   120,   121,     0,     0,    74,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,   118,    45,    46,    47,
      48,    49,    50,    51,  -225,   566,     0,     0,     0,  -225,
       0,   119,     0,     0,     0,     0,     0,     0,  -225,  -225,
    -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
    -225,     0,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
       0,     0,     0,  -227,   569,     0,     0,     0,  -227,     0,
       0,     0,   120,   121,     0,     0,    74,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
       0,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,     0,
     477,  -247,   572,     0,     0,     0,  -247,     0,     0,     0,
       0,     0,     0,     0,     0,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,     0,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -253,   575,   477,
       0,     0,  -253,     0,     0,     0,     0,     0,     0,     0,
       0,  -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,
    -253,  -253,  -253,  -253,     0,  -253,  -253,  -253,  -253,  -253,
    -253,  -253,  -253,     0,     0,     0,  -333,   477,  -333,  -333,
    -331,     0,     0,     0,     9,     0,    10,    11,     0,     0,
       0,     0,     0,     0,     0,  -333,  -333,     0,     0,     0,
       0,     0,     0,    12,    13,     0,  -333,     0,     0,     0,
       0,     0,     0,   477,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -333,  -333,  -333,     0,
    -333,  -333,  -333,     0,    15,    16,    17,     0,    18,    19,
      20,  -191,   363,     0,     0,     0,  -191,     0,     0,     0,
       0,     0,     0,     0,     0,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,     0,   377,
     378,   379,   380,   381,   382,   383,   384
};

static const yytype_int16 yycheck[] =
{
       4,   113,   135,    11,   137,   112,   375,   140,   379,    13,
     376,   144,    16,    17,    18,    13,   378,   236,    11,    23,
      24,    12,    26,    14,    15,    52,   183,   276,   277,    65,
      66,    67,    68,    69,    70,    71,   439,    38,    61,    62,
      63,    64,    38,   373,   374,    44,    40,   560,    40,    79,
      53,    54,    55,    56,    57,    58,    40,    40,    39,    52,
      38,    79,    88,    76,    77,    78,    79,    40,    40,    40,
      39,    46,    40,    38,   113,   114,    40,    38,    44,    60,
      73,    43,    38,    43,     5,    50,   365,   366,   367,    50,
      44,    60,   495,     0,   497,    45,   499,    44,   501,   206,
      44,    76,   505,    87,    39,   135,   136,   620,   511,    87,
     142,   137,    76,    49,    87,    44,    87,    44,   136,    76,
     113,    44,   135,   136,    39,    87,   119,    87,   121,   135,
     136,    49,   142,    49,    79,    49,   130,   131,   130,   131,
      39,   142,   143,   142,   143,    27,   142,   143,   175,   153,
      45,   155,   156,    39,   158,   159,   160,   161,   162,   142,
     143,   165,   166,   167,   168,   169,   170,   171,   166,   167,
     142,   143,   163,   164,   142,   143,   142,   143,    76,   182,
     183,    79,   175,    39,   187,   188,   189,   190,   142,   143,
     226,   227,   228,   229,    39,   142,   143,    39,   142,   143,
      58,   205,   481,   207,   208,   484,   142,   143,   487,   207,
     208,   490,   491,   142,   143,   142,   143,   208,    76,   142,
     143,    38,    38,   585,   142,   143,   142,   143,   142,   143,
     234,   113,   114,    50,    50,   130,   131,    38,   105,   247,
     105,   644,   645,    76,    39,   112,    79,   112,   270,    50,
     272,    45,   274,   134,   247,   474,   278,   138,    39,   250,
      39,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     639,   642,   276,   277,   640,    39,   525,   526,    90,    91,
      92,   285,   134,    95,   288,   137,   138,    39,    76,    39,
     281,    79,   425,   426,   427,   428,   130,   131,   431,   134,
     407,    39,   137,   138,   461,    39,   463,   637,   638,   122,
     123,   124,   125,   126,   127,   220,   221,   222,   223,   224,
     225,    39,     0,     1,    90,    91,    92,     5,   104,   105,
     106,   107,    39,   255,   256,   257,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    39,
      28,    29,    30,    31,    32,    33,    34,    35,    39,   492,
     493,   494,   211,   212,   213,   142,   143,   371,    46,   373,
     374,   375,   141,   371,   507,   379,   509,    88,    89,   370,
     128,   372,   456,   457,   458,   231,   232,   233,   129,   380,
     547,   382,   549,   135,   136,    88,    89,    93,    76,   130,
     131,    38,    39,   258,   259,   214,   215,   261,   262,   216,
     217,   445,   446,   635,   636,    39,    38,   142,   411,   410,
      79,   141,   413,   414,    38,    38,    38,    38,   142,   142,
      40,    48,    75,    49,    79,    79,   440,   441,    79,   462,
     444,   464,    45,   447,    79,    79,    79,   451,    45,   453,
     454,   143,   455,   456,   457,   458,   459,   460,   461,   142,
     463,   139,   140,    36,    40,   142,   142,   471,    76,     0,
       1,    40,    39,   471,     5,    40,    40,    40,    87,    40,
      87,   472,    87,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    87,    28,    29,    30,
      31,    32,    33,    34,    35,    87,    87,    40,    87,   621,
      40,    40,    87,    87,    41,    93,    87,   508,    41,    87,
      76,   525,   526,    49,    49,    87,    76,    87,   519,    39,
      76,    76,    41,    87,    87,    41,    38,    79,    79,    79,
      79,    76,    38,    41,   547,    76,   549,   659,    41,    41,
      40,    87,   560,    40,    76,    40,    40,   565,    40,    87,
     568,    41,    41,   571,    41,    41,    41,   560,    41,   702,
      41,    39,   565,    39,    36,   568,    41,    41,   571,   615,
     616,   617,   618,    41,    87,    41,    41,    38,     0,     1,
      79,    41,    38,     5,    38,    38,    36,    39,   142,    40,
     604,    38,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    41,    28,    29,    30,    31,
      32,    33,    34,    35,    38,    38,    36,    87,   621,    40,
      38,   635,    41,   637,   638,   639,    40,   635,   642,   647,
      87,    41,    44,    44,    38,    38,   451,   651,   153,   219,
     460,   210,   643,   459,   647,   646,   260,    52,   230,   663,
     218,     4,   670,   671,    76,   663,   659,   407,   672,   235,
       7,   711,   487,   663,   672,   478,   484,   670,   671,   481,
       6,   710,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   689,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   710,    -1,    -1,    -1,
      -1,   715,   710,    39,    -1,    -1,    42,   715,    -1,    -1,
      46,    47,    -1,    -1,    -1,   716,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,    -1,    -1,   139,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,   110,   111,    27,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    -1,   135,   136,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    96,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,   108,   109,   110,   111,
      27,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
      -1,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,    -1,    -1,   135,   136,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,   110,   111,    27,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    -1,   135,   136,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    96,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,   108,   109,   110,   111,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
      39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,   135,   136,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,    39,    -1,    -1,    42,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,   135,   136,    -1,    -1,
     139,    -1,    -1,   142,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      96,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,   108,   109,   110,   111,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,    39,    -1,    -1,    42,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,   135,
     136,    -1,    -1,   139,    -1,    -1,   142,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    96,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,    39,
      -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,   135,   136,    -1,    -1,   139,    -1,    -1,   142,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    96,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,   108,   109,
     110,   111,    -1,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,   135,   136,    -1,    -1,   139,
      -1,    -1,   142,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,   135,   136,
      -1,    -1,   139,    -1,    -1,   142,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,    -1,    -1,   139,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    96,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,   108,   109,   110,   111,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
      39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,   135,   136,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,   135,   136,    -1,    -1,
     139,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      96,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,   108,   109,   110,   111,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,    39,    -1,    -1,    42,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,   135,
     136,    -1,    -1,   139,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    96,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,   108,   109,   110,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,    -1,    -1,   139,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    96,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,   108,   109,   110,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,   135,   136,    -1,    -1,   139,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,   135,   136,    -1,    -1,   139,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,    -1,   139,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,    -1,    -1,   139,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,    -1,    -1,   139,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,     0,     1,    -1,    -1,    -1,     5,
      -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,     0,     1,    -1,    -1,    -1,     5,    -1,
      -1,    -1,   135,   136,    -1,    -1,   139,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      76,     0,     1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,     0,     1,    76,
      -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,     1,    76,     3,     4,
       5,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      55,    56,    57,    -1,    51,    52,    53,    -1,    55,    56,
      57,     0,     1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   258,   259,   260,   261,     0,     5,   202,   203,     1,
       3,     4,    20,    21,    31,    51,    52,    53,    55,    56,
      57,   254,   255,    39,    42,    46,    47,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    94,    96,    97,    98,    99,   100,   101,   102,
     103,   108,   109,   110,   111,   115,   116,   117,   118,   119,
     120,   121,   135,   136,   139,   146,   147,   148,   149,   150,
     151,   152,   154,   155,   156,   157,   162,   164,   166,   168,
     169,   171,   172,   173,   174,   175,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   193,    76,   204,   203,    38,
     189,   190,    42,    58,    59,    60,    66,    67,    79,    94,
     135,   136,   153,   157,   161,   163,   165,   167,   195,   190,
     189,   191,   190,   190,   257,   191,   239,   193,   243,   189,
     192,   241,   113,   114,   194,   245,    46,    76,   253,   189,
     170,   189,   159,   160,   189,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    39,   157,   175,   182,    94,   174,   174,   174,   174,
     174,   174,   142,   142,    79,   135,   136,   152,   152,   152,
     152,   181,   142,   181,   142,   181,   181,   181,   142,   181,
     142,   181,    79,    79,   157,    39,    45,    39,   142,   143,
     141,   134,   137,   138,   135,   136,   130,   131,   128,   129,
     122,   123,   124,   125,   126,   127,   104,   105,   106,   107,
      93,    90,    91,    92,    95,    88,    89,    39,   206,    38,
      76,    77,    78,   147,   197,   198,   199,    36,    60,   153,
     142,    60,    60,    79,   141,   134,   137,   138,   135,   136,
      45,   130,   131,    38,    38,    38,    38,    38,    50,   251,
      50,   251,    50,   251,    50,   251,   142,   142,    50,   251,
      38,   142,   143,    40,    43,    87,    48,   159,    49,   189,
     189,    75,   189,   189,   189,   189,   189,   190,   190,   189,
     191,   191,   158,   189,   189,   189,   189,   174,   176,   177,
     178,   179,   180,   180,    79,    79,   174,   174,   174,   174,
      79,    79,    79,    79,   189,   147,   191,   201,   189,   190,
     191,    76,    79,   155,   162,   162,   162,   164,   164,   166,
     166,   169,   171,   172,   172,   172,   172,   172,   172,   181,
     181,   181,   181,   183,   184,   184,   184,   189,   188,   186,
      40,    76,   205,     1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    28,    29,    30,
      31,    32,    33,    34,    35,   207,   208,   209,   210,   211,
     222,   225,   230,   233,   234,   235,   236,   237,   238,   240,
     242,   244,   246,   247,   248,   250,    43,    87,   143,   195,
     142,    36,   190,   142,   142,   157,   161,   161,   161,   163,
     163,   167,   165,   165,    76,   256,   256,   256,   256,   192,
     192,   256,   190,    76,    79,   189,   189,    40,    40,    39,
      87,    87,    40,    40,    87,    87,    87,    87,    40,    40,
      40,    87,    40,    87,    87,    93,    90,    91,    92,    88,
      89,   105,   112,   105,   112,    87,    87,    87,    87,    40,
      40,    87,    49,    41,    49,    40,    87,    76,   212,   216,
     252,   213,   217,   252,   214,   218,   252,   215,   219,   252,
     223,   226,   190,   191,   190,    27,   241,    27,   241,    27,
     243,    27,   245,   199,   249,    27,   239,   190,    39,   190,
      76,   231,   198,    76,   190,   195,    41,   190,   190,   142,
     143,   251,   251,   251,   251,    87,    87,   251,    41,    38,
     253,   189,   189,   189,   168,   168,   189,   158,   189,   189,
     174,   176,   176,   176,   179,   177,   180,   152,   180,   152,
      79,    79,    79,    79,   191,   190,   186,    76,     1,   216,
      49,   142,   143,     1,   217,    49,     1,   218,    49,     1,
     219,    49,     1,   224,   252,     1,   252,   251,   251,   251,
     253,   253,   253,   253,    38,    87,   253,   251,   190,   251,
       1,   139,   140,   232,   253,    41,    41,    41,   190,    76,
     192,   192,    40,    40,    87,    40,    40,    40,    40,    40,
      40,    41,   180,    41,   180,    41,    41,    41,    41,    41,
       6,    58,    76,   195,   196,   200,    79,   136,    76,    79,
     195,   195,   195,   220,   221,    44,    44,    44,    44,    44,
      44,   199,    44,    87,    39,    39,    44,    36,    41,    41,
      41,    87,   189,    41,    41,   181,   181,   181,   181,    58,
      76,   200,   153,    39,    38,    41,    79,    38,    38,    38,
      88,   137,   142,   191,   227,   227,   241,   241,   243,   245,
     239,   190,   253,   253,   190,   195,   189,    40,   153,    36,
      40,   201,    41,   195,   195,   191,   227,   228,   229,    38,
      38,    38,    40,    40,    40,    38,    40,    36,   200,    40,
      87,    87,    41,    41,   251,    44,    44,   229,   228,   191,
     190,    38,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   145,   146,   146,   147,   147,   147,   148,   149,   150,
     151,   152,   153,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   155,   155,   156,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   158,   158,   159,   159,   160,   161,   161,   162,
     162,   163,   163,   163,   163,   164,   164,   164,   164,   165,
     165,   165,   166,   166,   166,   167,   167,   167,   168,   168,
     168,   169,   169,   169,   170,   170,   171,   171,   172,   172,
     173,   173,   173,   173,   173,   173,   173,   174,   174,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   176,   176,   177,   177,   177,   177,
     178,   178,   179,   179,   180,   181,   181,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   183,
     183,   183,   183,   183,   184,   184,   185,   185,   185,   185,
     186,   186,   187,   187,   188,   188,   189,   190,   191,   192,
     193,   194,   194,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   196,   196,   196,   197,   197,   198,   198,   198,
     198,   199,   199,   200,   200,   200,   200,   201,   201,   202,
     202,   203,   204,   204,   204,   205,   205,   206,   206,   206,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     208,   208,   209,   209,   210,   210,   211,   211,   212,   212,
     212,   213,   213,   213,   214,   214,   214,   215,   215,   215,
     216,   217,   218,   219,   220,   221,   221,   222,   223,   223,
     223,   224,   224,   225,   226,   226,   226,   227,   227,   228,
     228,   229,   229,   230,   231,   231,   231,   232,   232,   232,
     233,   234,   235,   236,   237,   238,   239,   239,   240,   240,
     241,   241,   242,   242,   242,   242,   243,   243,   244,   244,
     245,   245,   246,   246,   247,   248,   249,   249,   249,   250,
     251,   251,   252,   252,   252,   252,   252,   253,   253,   253,
     253,   253,   254,   254,   254,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   256,   256,   256,   257,
     257,   259,   258,   260,   258,   261,   258
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     1,     1,     1,
       1,     3,     3,     1,     1,     6,     6,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     2,     1,
       1,     3,     3,     4,     6,     3,     4,     6,     6,     2,
       4,     4,     4,     4,     4,     6,     6,     3,     6,     8,
       9,     4,     1,     3,     1,     2,     4,     1,     3,     1,
       3,     1,     3,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     1,     1,     2,
       2,     2,     2,     2,     2,     6,     6,     7,     7,     3,
       3,     3,     3,     2,     1,     3,     1,     3,     3,     3,
       1,     3,     1,     3,     1,     1,     1,     2,     2,     2,
       2,     7,     2,     7,     2,     7,     2,     7,     2,     1,
       3,     3,     3,     3,     1,     3,     1,     3,     3,     3,
       1,     5,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     6,     6,     1,     4,     5,     5,     1,     3,     7,
       4,     3,     1,     1,     2,     1,     3,     1,     1,     1,
       1,     1,     3,     1,     3,     4,     4,     1,     3,     1,
       2,     3,     1,     3,     4,     1,     3,     0,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       4,     4,     4,     4,     3,     1,     3,     2,     0,     2,
       2,     4,     4,     2,     0,     5,     2,     3,     3,     1,
       3,     3,     1,     2,     0,     2,     2,     4,     7,     7,
       3,     3,     3,     3,     3,     7,     2,     4,     2,     5,
       2,     4,     2,     2,     5,     5,     2,     4,     2,     5,
       2,     4,     2,     5,     1,     3,     0,     1,     3,     2,
       0,     1,     1,     3,     3,     4,     5,     1,     1,     3,
       3,     4,     1,     2,     1,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     3,     1,     3,     4,     2,
       4,     0,     2,     0,     2,     0,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* number: TOK_PLUS TOK_NUMBER  */
#line 253 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2363 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 5: /* integer: TOK_PLUS TOK_NUMBER  */
#line 257 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 2369 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 6: /* integer: TOK_MINUS TOK_NUMBER  */
#line 259 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                {node_int_setcar((yyvsp[0].node), -(node_get_int((yyvsp[0].node)))); (yyval.node) = (yyvsp[0].node);}
#line 2375 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 11: /* subrange: integer TOK_TWODOTS integer  */
#line 272 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {(yyval.node) = new_lined_node(NODEMGR, TWODOTS, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno));}
#line 2381 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 12: /* subrangetype: shift_expr_type TOK_TWODOTS shift_expr_type  */
#line 276 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                {(yyval.node) = new_lined_node(NODEMGR, TWODOTS, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno));}
#line 2387 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 15: /* constant: TOK_UWCONST TOK_LP simple_expression TOK_COMMA shift_expr TOK_RP  */
#line 282 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
               {(yyval.node) = new_lined_node(NODEMGR, UWCONST, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 2393 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 16: /* constant: TOK_SWCONST TOK_LP simple_expression TOK_COMMA shift_expr TOK_RP  */
#line 284 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
               {(yyval.node) = new_lined_node(NODEMGR, SWCONST, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 2399 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 17: /* constant: TOK_WSIZEOF TOK_LP next_expression TOK_RP  */
#line 286 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
               {(yyval.node) = new_lined_node(NODEMGR, WSIZEOF, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno)); }
#line 2405 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 18: /* constant: TOK_WTOINT TOK_LP next_expression TOK_RP  */
#line 288 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
               {(yyval.node) = new_lined_node(NODEMGR, CAST_TOINT, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno)); }
#line 2411 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 21: /* constant: number_frac  */
#line 292 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
               {
                 nusmv_yyerror("fractional constants are not supported.");
                 YYABORT;
               }
#line 2420 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 22: /* constant: number_exp  */
#line 297 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
               {
                 nusmv_yyerror("exponential constants are not supported.");
                 YYABORT;
               }
#line 2429 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 23: /* constant: number_real  */
#line 302 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
               {
                 nusmv_yyerror("real constants are not supported.");
                 YYABORT;
               }
#line 2438 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 25: /* primary_expr: nfunc_expr  */
#line 311 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                           {
                 nusmv_yyerror("functions are not supported.");
                 YYABORT;
               }
#line 2447 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 26: /* nfunc_expr: primary_expr TOK_LP next_list_expression TOK_RP  */
#line 318 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                               {
                    int ntype = node_get_type((yyvsp[-3].node));
                    if (ATOM != ntype && DOT != ntype && SELF != ntype) {
                      nusmv_yyerror_lined("incorrect DOT expression", (yyvsp[-2].lineno));
                      YYABORT;
                    }
                (yyval.node) = new_lined_node(NODEMGR, NFUNCTION, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));
               }
#line 2460 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 28: /* primary_expr_type: TOK_MINUS primary_expr_type  */
#line 338 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                           { (yyval.node) = new_lined_node(NODEMGR, UMINUS, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2466 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 30: /* primary_expr_type: TOK_SELF  */
#line 340 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                {(yyval.node) = new_node(NODEMGR, SELF,Nil,Nil);}
#line 2472 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 31: /* primary_expr_type: primary_expr_type TOK_DOT TOK_ATOM  */
#line 342 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {
                    int ntype = node_get_type((yyvsp[-2].node));
                    if (ATOM != ntype && DOT != ntype && ARRAY != ntype && SELF != ntype) {
                      nusmv_yyerror_lined("incorrect DOT expression", (yyvsp[-1].lineno));
                      YYABORT;
                    }
                    (yyval.node) = new_lined_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)) ;
                  }
#line 2485 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 32: /* primary_expr_type: primary_expr_type TOK_DOT TOK_NUMBER  */
#line 351 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {
                   int ntype = node_get_type((yyvsp[-2].node));
                   if (ATOM != ntype && DOT != ntype && ARRAY != ntype && SELF != ntype) {
                     nusmv_yyerror_lined("incorrect DOT expression", (yyvsp[-1].lineno));
                     YYABORT;
                   }
                   (yyval.node) = new_lined_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)) ;
                  }
#line 2498 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 33: /* primary_expr_type: primary_expr_type TOK_LB next_expression TOK_RB  */
#line 360 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {
                   /* array may have any expression on the left.
                      The type check will detect any problems */
                   (yyval.node) = new_lined_node(NODEMGR, ARRAY, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));
                  }
#line 2508 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 34: /* primary_expr_type: primary_expr_type TOK_LB simple_expression TOK_COLON simple_expression TOK_RB  */
#line 366 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {
                    (yyval.node) = new_lined_node(NODEMGR, BIT_SELECTION, (yyvsp[-5].node),
                                        new_lined_node(NODEMGR, COLON, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno)), (yyvsp[-4].lineno));
                  }
#line 2517 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 35: /* primary_expr_type: TOK_LP basic_expr TOK_RP  */
#line 370 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                    { (yyval.node) = (yyvsp[-1].node); }
#line 2523 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 36: /* primary_expr_type: TOK_ABS TOK_LP basic_expr TOK_RP  */
#line 371 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                    { /* abs(a) := (a >= 0) ? a : - a */
                                                      node_ptr zero = new_lined_node(NODEMGR, NUMBER, NODE_FROM_INT((int)(0)), Nil, (yyvsp[-3].lineno));
                                                      node_ptr cond = new_lined_node(NODEMGR, GE, (yyvsp[-1].node), zero, (yyvsp[-3].lineno));
                                                      node_ptr minus_a = new_lined_node(NODEMGR, UMINUS, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno));
                                                      (yyval.node) = new_lined_node(NODEMGR, IFTHENELSE, new_lined_node(NODEMGR, COLON, cond, (yyvsp[-1].node), (yyvsp[-3].lineno)), minus_a, (yyvsp[-3].lineno)); ; }
#line 2533 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 37: /* primary_expr_type: TOK_MIN TOK_LP basic_expr TOK_COMMA basic_expr TOK_RP  */
#line 376 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                         { /* MIN(a,b) := a < b ? a : b */
                                                                           node_ptr cond = new_lined_node(NODEMGR, LT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno));
                                                                           (yyval.node) = new_lined_node(NODEMGR, IFTHENELSE, new_lined_node(NODEMGR, COLON, cond, (yyvsp[-3].node), (yyvsp[-5].lineno)), (yyvsp[-1].node), (yyvsp[-5].lineno)); ; }
#line 2541 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 38: /* primary_expr_type: TOK_MAX TOK_LP basic_expr TOK_COMMA basic_expr TOK_RP  */
#line 379 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                         { /* MAX(a,b) := a < b ? b : a */
                                                                           node_ptr cond = new_lined_node(NODEMGR, LT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno));
                                                                           (yyval.node) = new_lined_node(NODEMGR, IFTHENELSE, new_lined_node(NODEMGR, COLON, cond, (yyvsp[-1].node), (yyvsp[-5].lineno)), (yyvsp[-3].node), (yyvsp[-5].lineno)); ;}
#line 2549 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 39: /* primary_expr_type: TOK_NOT primary_expr_type  */
#line 382 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                         { (yyval.node) = new_lined_node(NODEMGR, NOT, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2555 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 40: /* primary_expr_type: TOK_BOOL TOK_LP basic_expr TOK_RP  */
#line 383 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                    { (yyval.node) = new_lined_node(NODEMGR, CAST_BOOL, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno)); }
#line 2561 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 41: /* primary_expr_type: TOK_WORD1 TOK_LP basic_expr TOK_RP  */
#line 384 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                    { (yyval.node) = new_lined_node(NODEMGR, CAST_WORD1, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno)); }
#line 2567 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 42: /* primary_expr_type: TOK_NEXT TOK_LP basic_expr TOK_RP  */
#line 385 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                    { (yyval.node) = new_lined_node(NODEMGR, NEXT, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno)); }
#line 2573 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 43: /* primary_expr_type: TOK_SIGNED TOK_LP basic_expr TOK_RP  */
#line 386 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                       { (yyval.node) = new_lined_node(NODEMGR, CAST_SIGNED, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno)); }
#line 2579 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 44: /* primary_expr_type: TOK_UNSIGNED TOK_LP basic_expr TOK_RP  */
#line 387 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                       { (yyval.node) = new_lined_node(NODEMGR, CAST_UNSIGNED, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno)); }
#line 2585 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 45: /* primary_expr_type: TOK_EXTEND TOK_LP basic_expr TOK_COMMA basic_expr TOK_RP  */
#line 388 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                            { (yyval.node) = new_lined_node(NODEMGR, EXTEND, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 2591 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 46: /* primary_expr_type: TOK_WRESIZE TOK_LP basic_expr TOK_COMMA basic_expr TOK_RP  */
#line 389 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                            { (yyval.node) = new_lined_node(NODEMGR, WRESIZE, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 2597 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 47: /* primary_expr_type: TOK_CASE case_element_list_expr TOK_ESAC  */
#line 390 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                        { (yyval.node) = (yyvsp[-1].node); }
#line 2603 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 48: /* primary_expr_type: TOK_WAREAD TOK_LP basic_expr TOK_COMMA basic_expr TOK_RP  */
#line 394 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                { (yyval.node) = new_lined_node(NODEMGR, WAREAD, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 2609 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 49: /* primary_expr_type: TOK_WAWRITE TOK_LP basic_expr TOK_COMMA basic_expr TOK_COMMA basic_expr TOK_RP  */
#line 397 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                { (yyval.node) = new_lined_node(NODEMGR, WAWRITE, (yyvsp[-5].node), new_node(NODEMGR, WAWRITE, (yyvsp[-3].node), (yyvsp[-1].node)), (yyvsp[-6].lineno)); }
#line 2615 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 50: /* primary_expr_type: TOK_CONST_ARRAY TOK_LP TOK_TYPEOF TOK_LP var_id TOK_RP TOK_COMMA basic_expr TOK_RP  */
#line 399 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                { (yyval.node) = new_lined_node(NODEMGR, CONST_ARRAY, new_node(NODEMGR, TYPEOF, (yyvsp[-4].node), Nil), (yyvsp[-1].node), (yyvsp[-8].lineno)); }
#line 2621 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 51: /* primary_expr_type: TOK_COUNT TOK_LP count_param_list TOK_RP  */
#line 401 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                { (yyval.node) = new_lined_node(NODEMGR, COUNT, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 2627 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 52: /* count_param_list: basic_expr  */
#line 405 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                          { (yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil); }
#line 2633 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 53: /* count_param_list: basic_expr TOK_COMMA count_param_list  */
#line 406 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                     { (yyval.node) = cons(NODEMGR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2639 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 54: /* case_element_list_expr: case_element_expr  */
#line 411 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
             {
               const ErrorMgr_ptr errmgr =
                 ERROR_MGR(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_ERROR_MANAGER));
               node_ptr fail =
                 ErrorMgr_failure_make(errmgr,
                                       "case conditions are not exhaustive",
                                       FAILURE_CASE_NOT_EXHAUSTIVE,
                                       nusmv_yylineno);
               (yyval.node) = new_node(NODEMGR, CASE, (yyvsp[0].node), fail);
             }
#line 2654 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 55: /* case_element_list_expr: case_element_expr case_element_list_expr  */
#line 421 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                        { (yyval.node) = new_node(NODEMGR, CASE, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2660 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 56: /* case_element_expr: basic_expr TOK_COLON basic_expr TOK_SEMI  */
#line 426 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                 { (yyval.node) = build_case_colon_node((yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno)); }
#line 2666 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 58: /* concatination_expr_type: concatination_expr_type TOK_CONCATENATION primary_expr_type  */
#line 432 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                           { (yyval.node) = new_lined_node(NODEMGR, CONCATENATION, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2672 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 60: /* concatination_expr: concatination_expr TOK_CONCATENATION primary_expr  */
#line 438 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                 { (yyval.node) = new_lined_node(NODEMGR, CONCATENATION, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2678 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 62: /* multiplicative_expr_type: multiplicative_expr_type TOK_TIMES concatination_expr_type  */
#line 444 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                           { (yyval.node) = new_lined_node(NODEMGR, TIMES, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2684 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 63: /* multiplicative_expr_type: multiplicative_expr_type TOK_DIVIDE concatination_expr_type  */
#line 445 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                           { (yyval.node) = new_lined_node(NODEMGR, DIVIDE, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2690 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 64: /* multiplicative_expr_type: multiplicative_expr_type TOK_MOD concatination_expr_type  */
#line 446 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                           { (yyval.node) = new_lined_node(NODEMGR, MOD, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2696 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 66: /* multiplicative_expr: multiplicative_expr TOK_TIMES concatination_expr  */
#line 451 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                 { (yyval.node) = new_lined_node(NODEMGR, TIMES, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2702 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 67: /* multiplicative_expr: multiplicative_expr TOK_DIVIDE concatination_expr  */
#line 452 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                 { (yyval.node) = new_lined_node(NODEMGR, DIVIDE, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2708 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 68: /* multiplicative_expr: multiplicative_expr TOK_MOD concatination_expr  */
#line 453 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                 { (yyval.node) = new_lined_node(NODEMGR, MOD, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2714 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 70: /* additive_expr_type: additive_expr_type TOK_PLUS multiplicative_expr_type  */
#line 459 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                     { (yyval.node) = new_lined_node(NODEMGR, PLUS, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2720 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 71: /* additive_expr_type: additive_expr_type TOK_MINUS multiplicative_expr_type  */
#line 460 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                     { (yyval.node) = new_lined_node(NODEMGR, MINUS, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2726 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 73: /* additive_expr: additive_expr TOK_PLUS multiplicative_expr  */
#line 466 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                           { (yyval.node) = new_lined_node(NODEMGR, PLUS, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2732 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 74: /* additive_expr: additive_expr TOK_MINUS multiplicative_expr  */
#line 467 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                           { (yyval.node) = new_lined_node(NODEMGR, MINUS, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2738 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 76: /* shift_expr_type: shift_expr_type TOK_LSHIFT additive_expr_type  */
#line 471 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                  { (yyval.node) = new_lined_node(NODEMGR, LSHIFT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2744 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 77: /* shift_expr_type: shift_expr_type TOK_RSHIFT additive_expr_type  */
#line 472 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                  { (yyval.node) = new_lined_node(NODEMGR, RSHIFT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2750 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 79: /* shift_expr: shift_expr TOK_LSHIFT additive_expr  */
#line 476 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                     { (yyval.node) = new_lined_node(NODEMGR, LSHIFT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2756 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 80: /* shift_expr: shift_expr TOK_RSHIFT additive_expr  */
#line 477 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                     { (yyval.node) = new_lined_node(NODEMGR, RSHIFT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2762 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 83: /* set_expr: TOK_LCB set_list_expr TOK_RCB  */
#line 485 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                               { (yyval.node) = (yyvsp[-1].node); }
#line 2768 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 85: /* set_list_expr: set_list_expr TOK_COMMA basic_expr  */
#line 489 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                  {(yyval.node) = new_lined_node(NODEMGR, UNION, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno));}
#line 2774 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 87: /* union_expr: union_expr TOK_UNION set_expr  */
#line 494 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                             { (yyval.node) = new_lined_node(NODEMGR, UNION, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2780 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 89: /* in_expr: in_expr TOK_SETIN union_expr  */
#line 498 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                            { (yyval.node) = new_lined_node(NODEMGR, SETIN, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2786 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 91: /* relational_expr: relational_expr TOK_EQUAL in_expr  */
#line 503 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                 { (yyval.node) = new_lined_node(NODEMGR, EQUAL, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2792 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 92: /* relational_expr: relational_expr TOK_NOTEQUAL in_expr  */
#line 504 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                    { (yyval.node) = new_lined_node(NODEMGR, NOTEQUAL, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2798 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 93: /* relational_expr: relational_expr TOK_LT in_expr  */
#line 505 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                              { (yyval.node) = new_lined_node(NODEMGR, LT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2804 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 94: /* relational_expr: relational_expr TOK_GT in_expr  */
#line 506 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                              { (yyval.node) = new_lined_node(NODEMGR, GT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2810 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 95: /* relational_expr: relational_expr TOK_LE in_expr  */
#line 507 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                              { (yyval.node) = new_lined_node(NODEMGR, LE, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2816 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 96: /* relational_expr: relational_expr TOK_GE in_expr  */
#line 508 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                              { (yyval.node) = new_lined_node(NODEMGR, GE, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2822 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 99: /* pure_ctl_expr: TOK_EX ctl_expr  */
#line 516 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     { (yyval.node) = new_lined_node(NODEMGR, EX, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2828 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 100: /* pure_ctl_expr: TOK_AX ctl_expr  */
#line 517 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     { (yyval.node) = new_lined_node(NODEMGR, AX, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2834 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 101: /* pure_ctl_expr: TOK_EF ctl_expr  */
#line 518 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     { (yyval.node) = new_lined_node(NODEMGR, EF, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2840 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 102: /* pure_ctl_expr: TOK_AF ctl_expr  */
#line 519 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     { (yyval.node) = new_lined_node(NODEMGR, AF, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2846 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 103: /* pure_ctl_expr: TOK_EG ctl_expr  */
#line 520 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     { (yyval.node) = new_lined_node(NODEMGR, EG, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2852 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 104: /* pure_ctl_expr: TOK_AG ctl_expr  */
#line 521 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     { (yyval.node) = new_lined_node(NODEMGR, AG, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2858 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 105: /* pure_ctl_expr: TOK_AA TOK_LB ctl_basic_expr TOK_UNTIL ctl_basic_expr TOK_RB  */
#line 523 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     { (yyval.node) = new_lined_node(NODEMGR, AU, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 2864 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 106: /* pure_ctl_expr: TOK_EE TOK_LB ctl_basic_expr TOK_UNTIL ctl_basic_expr TOK_RB  */
#line 525 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     { (yyval.node) = new_lined_node(NODEMGR, EU, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 2870 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 107: /* pure_ctl_expr: TOK_AA TOK_LB ctl_basic_expr TOK_BUNTIL subrange ctl_basic_expr TOK_RB  */
#line 527 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     { (yyval.node) = new_lined_node(NODEMGR, ABU, new_lined_node(NODEMGR, AU, (yyvsp[-4].node), (yyvsp[-1].node), (yyvsp[-6].lineno)), (yyvsp[-2].node), (yyvsp[-6].lineno)); }
#line 2876 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 108: /* pure_ctl_expr: TOK_EE TOK_LB ctl_basic_expr TOK_BUNTIL subrange ctl_basic_expr TOK_RB  */
#line 529 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     { (yyval.node) = new_lined_node(NODEMGR, EBU, new_lined_node(NODEMGR, EU, (yyvsp[-4].node), (yyvsp[-1].node), (yyvsp[-6].lineno)), (yyvsp[-2].node), (yyvsp[-6].lineno)); }
#line 2882 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 109: /* pure_ctl_expr: TOK_EBF subrange ctl_expr  */
#line 530 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                         { (yyval.node) = new_lined_node(NODEMGR, EBF, (yyvsp[0].node), (yyvsp[-1].node), (yyvsp[-2].lineno)); }
#line 2888 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 110: /* pure_ctl_expr: TOK_ABF subrange ctl_expr  */
#line 531 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                         { (yyval.node) = new_lined_node(NODEMGR, ABF, (yyvsp[0].node), (yyvsp[-1].node), (yyvsp[-2].lineno)); }
#line 2894 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 111: /* pure_ctl_expr: TOK_EBG subrange ctl_expr  */
#line 532 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                         { (yyval.node) = new_lined_node(NODEMGR, EBG, (yyvsp[0].node), (yyvsp[-1].node), (yyvsp[-2].lineno)); }
#line 2900 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 112: /* pure_ctl_expr: TOK_ABG subrange ctl_expr  */
#line 533 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                         { (yyval.node) = new_lined_node(NODEMGR, ABG, (yyvsp[0].node), (yyvsp[-1].node), (yyvsp[-2].lineno)); }
#line 2906 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 113: /* pure_ctl_expr: TOK_NOT pure_ctl_expr  */
#line 536 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     { (yyval.node) = new_lined_node(NODEMGR, NOT, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2912 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 115: /* ctl_and_expr: ctl_and_expr TOK_AND ctl_expr  */
#line 543 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                              { (yyval.node) = new_lined_node(NODEMGR, AND, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2918 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 117: /* ctl_or_expr: ctl_or_expr TOK_OR ctl_and_expr  */
#line 547 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                  { (yyval.node) = new_lined_node(NODEMGR, OR,(yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2924 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 118: /* ctl_or_expr: ctl_or_expr TOK_XOR ctl_and_expr  */
#line 548 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                  { (yyval.node) = new_lined_node(NODEMGR, XOR,(yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2930 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 119: /* ctl_or_expr: ctl_or_expr TOK_XNOR ctl_and_expr  */
#line 549 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                  { (yyval.node) = new_lined_node(NODEMGR, XNOR,(yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2936 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 121: /* ctl_iff_expr: ctl_iff_expr TOK_IFF ctl_or_expr  */
#line 553 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                  { (yyval.node) = new_lined_node(NODEMGR, IFF, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2942 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 123: /* ctl_implies_expr: ctl_iff_expr TOK_IMPLIES ctl_implies_expr  */
#line 558 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                         { (yyval.node) = new_lined_node(NODEMGR, IMPLIES, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2948 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 127: /* pure_ltl_unary_expr: TOK_OP_NEXT ltl_unary_expr  */
#line 571 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                           {(yyval.node) = new_lined_node(NODEMGR, OP_NEXT, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 2954 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 128: /* pure_ltl_unary_expr: TOK_OP_PREC ltl_unary_expr  */
#line 572 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                           {(yyval.node) = new_lined_node(NODEMGR, OP_PREC, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 2960 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 129: /* pure_ltl_unary_expr: TOK_OP_NOTPRECNOT ltl_unary_expr  */
#line 573 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                {(yyval.node) = new_lined_node(NODEMGR, OP_NOTPRECNOT, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 2966 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 130: /* pure_ltl_unary_expr: TOK_OP_GLOBAL ltl_unary_expr  */
#line 574 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                            {(yyval.node) = new_lined_node(NODEMGR, OP_GLOBAL, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 2972 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 131: /* pure_ltl_unary_expr: TOK_OP_GLOBAL TOK_LB TOK_NUMBER TOK_COMMA TOK_NUMBER TOK_RB ltl_unary_expr  */
#line 576 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
               {(yyval.node) = new_lined_node(NODEMGR, OP_GLOBAL, (yyvsp[0].node), new_lined_node(NODEMGR, TWODOTS, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-6].lineno)), (yyvsp[-6].lineno));}
#line 2978 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 132: /* pure_ltl_unary_expr: TOK_OP_HISTORICAL ltl_unary_expr  */
#line 577 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                {(yyval.node) = new_lined_node(NODEMGR, OP_HISTORICAL, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 2984 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 133: /* pure_ltl_unary_expr: TOK_OP_HISTORICAL TOK_LB TOK_NUMBER TOK_COMMA TOK_NUMBER TOK_RB ltl_unary_expr  */
#line 579 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
               {(yyval.node) = new_lined_node(NODEMGR, OP_HISTORICAL, (yyvsp[0].node), new_lined_node(NODEMGR, TWODOTS, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-6].lineno)), (yyvsp[-6].lineno));}
#line 2990 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 134: /* pure_ltl_unary_expr: TOK_OP_FUTURE ltl_unary_expr  */
#line 580 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                            {(yyval.node) = new_lined_node(NODEMGR, OP_FUTURE, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 2996 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 135: /* pure_ltl_unary_expr: TOK_OP_FUTURE TOK_LB TOK_NUMBER TOK_COMMA TOK_NUMBER TOK_RB ltl_unary_expr  */
#line 582 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
               {(yyval.node) = new_lined_node(NODEMGR, OP_FUTURE, (yyvsp[0].node), new_lined_node(NODEMGR, TWODOTS, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-6].lineno)), (yyvsp[-6].lineno));}
#line 3002 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 136: /* pure_ltl_unary_expr: TOK_OP_ONCE ltl_unary_expr  */
#line 583 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                          {(yyval.node) = new_lined_node(NODEMGR, OP_ONCE, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3008 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 137: /* pure_ltl_unary_expr: TOK_OP_ONCE TOK_LB TOK_NUMBER TOK_COMMA TOK_NUMBER TOK_RB ltl_unary_expr  */
#line 585 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
               {(yyval.node) = new_lined_node(NODEMGR, OP_ONCE, (yyvsp[0].node), new_lined_node(NODEMGR, TWODOTS, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-6].lineno)), (yyvsp[-6].lineno));}
#line 3014 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 138: /* pure_ltl_unary_expr: TOK_NOT pure_ltl_unary_expr  */
#line 587 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                           { (yyval.node) = new_lined_node(NODEMGR, NOT, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 3020 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 140: /* ltl_binary_expr: ltl_binary_expr TOK_UNTIL ltl_unary_expr  */
#line 596 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                {(yyval.node) = new_lined_node(NODEMGR, UNTIL, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno));}
#line 3026 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 141: /* ltl_binary_expr: ltl_binary_expr TOK_SINCE ltl_unary_expr  */
#line 598 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                {(yyval.node) = new_lined_node(NODEMGR, SINCE, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno));}
#line 3032 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 142: /* ltl_binary_expr: ltl_binary_expr TOK_RELEASES ltl_unary_expr  */
#line 600 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {(yyval.node) = new_lined_node(NODEMGR, NOT,
                           new_lined_node(NODEMGR, UNTIL,
                             new_lined_node(NODEMGR, NOT, (yyvsp[-2].node), Nil, node_get_lineno((yyvsp[-2].node))),
                             new_lined_node(NODEMGR, NOT, (yyvsp[0].node), Nil, node_get_lineno((yyvsp[0].node))),
                             (yyvsp[-1].lineno)), Nil, (yyvsp[-1].lineno));
                  }
#line 3043 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 143: /* ltl_binary_expr: ltl_binary_expr TOK_TRIGGERED ltl_unary_expr  */
#line 607 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {(yyval.node) = new_lined_node(NODEMGR, NOT,
                          new_lined_node(NODEMGR, SINCE,
                              new_lined_node(NODEMGR, NOT, (yyvsp[-2].node), Nil, node_get_lineno((yyvsp[-2].node))),
                              new_lined_node(NODEMGR, NOT, (yyvsp[0].node), Nil, node_get_lineno((yyvsp[0].node))),
                              (yyvsp[-1].lineno)), Nil, (yyvsp[-1].lineno));
                  }
#line 3054 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 145: /* and_expr: and_expr TOK_AND ltl_binary_expr  */
#line 617 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                 { (yyval.node) = new_lined_node(NODEMGR, AND, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 3060 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 147: /* or_expr: or_expr TOK_OR and_expr  */
#line 622 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                          { (yyval.node) = new_lined_node(NODEMGR, OR,(yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 3066 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 148: /* or_expr: or_expr TOK_XOR and_expr  */
#line 623 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                          { (yyval.node) = new_lined_node(NODEMGR, XOR,(yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 3072 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 149: /* or_expr: or_expr TOK_XNOR and_expr  */
#line 624 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                          { (yyval.node) = new_lined_node(NODEMGR, XNOR,(yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 3078 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 151: /* ite_expr: or_expr TOK_QUESTIONMARK basic_expr TOK_COLON ite_expr  */
#line 629 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                      { (yyval.node) = new_lined_node(NODEMGR, IFTHENELSE, new_lined_node(NODEMGR, COLON, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-3].lineno)), (yyvsp[0].node), (yyvsp[-3].lineno)); }
#line 3084 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 153: /* iff_expr: iff_expr TOK_IFF ite_expr  */
#line 634 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                           { (yyval.node) = new_lined_node(NODEMGR, IFF, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 3090 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 155: /* implies_expr: iff_expr TOK_IMPLIES implies_expr  */
#line 639 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                 { (yyval.node) = new_lined_node(NODEMGR, IMPLIES, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 3096 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 157: /* simple_expression: basic_expr  */
#line 650 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                 {if (!isCorrectExp((yyval.node), EXP_SIMPLE)) YYABORT;}
#line 3102 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 158: /* next_expression: basic_expr  */
#line 653 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                 {if (!isCorrectExp((yyval.node), EXP_NEXT)) YYABORT;}
#line 3108 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 159: /* ctl_expression: basic_expr  */
#line 656 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                 {if (!isCorrectExp((yyval.node), EXP_CTL)) YYABORT;}
#line 3114 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 160: /* ltl_expression: basic_expr  */
#line 659 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                 {if (!isCorrectExp((yyval.node), EXP_LTL)) YYABORT;}
#line 3120 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 161: /* compute_expression: TOK_MMIN TOK_LB ctl_expression TOK_COMMA ctl_expression TOK_RB  */
#line 664 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  { (yyval.node) = new_lined_node(NODEMGR, MINU, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 3126 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 162: /* compute_expression: TOK_MMAX TOK_LB ctl_expression TOK_COMMA ctl_expression TOK_RB  */
#line 666 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  { (yyval.node) = new_lined_node(NODEMGR, MAXU, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 3132 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 163: /* itype: TOK_BOOLEAN  */
#line 674 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                            {(yyval.node) = new_node(NODEMGR, BOOLEAN, Nil, Nil);}
#line 3138 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 164: /* itype: TOK_WORD TOK_LB simple_expression TOK_RB  */
#line 676 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {(yyval.node) = new_lined_node(NODEMGR, UNSIGNED_WORD, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno));}
#line 3144 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 165: /* itype: TOK_UNSIGNED TOK_WORD TOK_LB simple_expression TOK_RB  */
#line 678 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {(yyval.node) = new_lined_node(NODEMGR, UNSIGNED_WORD, (yyvsp[-1].node), Nil, (yyvsp[-4].lineno));}
#line 3150 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 166: /* itype: TOK_SIGNED TOK_WORD TOK_LB simple_expression TOK_RB  */
#line 680 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {(yyval.node) = new_lined_node(NODEMGR, SIGNED_WORD, (yyvsp[-1].node), Nil, (yyvsp[-4].lineno));}
#line 3156 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 168: /* itype: TOK_LCB type_value_list TOK_RCB  */
#line 683 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {(yyval.node) = new_lined_node(NODEMGR, SCALAR, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3162 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 169: /* itype: TOK_ARRAY TOK_WORD TOK_LB simple_expression TOK_RB TOK_OF itype  */
#line 685 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {(yyval.node) = new_lined_node(NODEMGR, WORDARRAY_TYPE, (yyvsp[-3].node), (yyvsp[0].node), (yyvsp[-6].lineno));}
#line 3168 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 170: /* itype: TOK_ARRAY subrangetype TOK_OF itype  */
#line 687 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {(yyval.node) = new_lined_node(NODEMGR, ARRAY_TYPE, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].lineno));}
#line 3174 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 171: /* itype: TOK_ARRAY TOK_OF itype  */
#line 689 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {nusmv_yyerror("unbounded arrays are not supported.");
                   YYABORT;
                  }
#line 3182 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 174: /* type: TOK_PROCESS module_type  */
#line 697 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {(yyval.node) = new_lined_node(NODEMGR, PROCESS, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3188 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 175: /* type_value_list: type_value  */
#line 700 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                             {(yyval.node) = cons(NODEMGR, find_atom(NODEMGR, (yyvsp[0].node)), Nil); free_node(NODEMGR, (yyvsp[0].node));}
#line 3194 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 176: /* type_value_list: type_value_list TOK_COMMA type_value  */
#line 701 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                       {(yyval.node) = cons(NODEMGR, find_atom(NODEMGR, (yyvsp[0].node)), (yyvsp[-2].node)); free_node(NODEMGR, (yyvsp[0].node));}
#line 3200 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 182: /* complex_atom: complex_atom TOK_DOT TOK_ATOM  */
#line 711 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                              {(yyval.node) = new_lined_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno));}
#line 3206 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 183: /* module_type: TOK_ATOM  */
#line 714 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                         {(yyval.node) = new_node(NODEMGR, MODTYPE, (yyvsp[0].node), Nil);}
#line 3212 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 184: /* module_type: TOK_ATOM TOK_LP TOK_RP  */
#line 715 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                       {(yyval.node) = new_node(NODEMGR, MODTYPE, (yyvsp[-2].node), Nil);}
#line 3218 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 185: /* module_type: TOK_ATOM TOK_LP next_list_expression TOK_RP  */
#line 717 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                {(yyval.node) = new_lined_node(NODEMGR, MODTYPE, (yyvsp[-3].node), (yyvsp[-1].node), node_get_lineno((yyvsp[-3].node)));}
#line 3224 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 186: /* module_type: TOK_ARRAY subrangetype TOK_OF module_type  */
#line 719 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {
                    /* $$ = new_lined_node(NODEMGR, ARRAY, $2, $4, $1); */
                    /* array of modules is not supported any more.
                       NOTE: In future if there are some syntact conflicts
                       this case can be removed */
                    nusmv_yyerror_lined("array of modules is no supported", (yyvsp[-3].lineno));
                    YYABORT;
                  }
#line 3237 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 187: /* next_list_expression: next_expression  */
#line 730 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                {(yyval.node) = cons(NODEMGR, (yyvsp[0].node),Nil);}
#line 3243 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 188: /* next_list_expression: next_list_expression TOK_COMMA next_expression  */
#line 731 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                               {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-2].node));}
#line 3249 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 189: /* module_list: module  */
#line 743 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                      {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil);}
#line 3255 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 190: /* module_list: module_list module  */
#line 744 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                  {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-1].node));}
#line 3261 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 191: /* module: TOK_MODULE module_sign declarations  */
#line 748 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                    {(yyval.node) = new_lined_node(NODEMGR, MODULE, (yyvsp[-1].node), (yyvsp[0].node), (yyvsp[-2].lineno));}
#line 3267 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 192: /* module_sign: TOK_ATOM  */
#line 750 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                        {(yyval.node) = new_node(NODEMGR, MODTYPE, (yyvsp[0].node), Nil);}
#line 3273 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 193: /* module_sign: TOK_ATOM TOK_LP TOK_RP  */
#line 751 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                      {(yyval.node) = new_node(NODEMGR, MODTYPE, (yyvsp[-2].node), Nil);}
#line 3279 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 194: /* module_sign: TOK_ATOM TOK_LP atom_list TOK_RP  */
#line 753 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                    {(yyval.node) = new_node(NODEMGR, MODTYPE, (yyvsp[-3].node), (yyvsp[-1].node));}
#line 3285 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 195: /* atom_list: TOK_ATOM  */
#line 755 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                        {(yyval.node) = cons(NODEMGR, find_atom(NODEMGR, (yyvsp[0].node)), Nil); free_node(NODEMGR, (yyvsp[0].node));}
#line 3291 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 196: /* atom_list: atom_list TOK_COMMA TOK_ATOM  */
#line 756 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                            {(yyval.node) = cons(NODEMGR, find_atom(NODEMGR, (yyvsp[0].node)), (yyvsp[-2].node)); free_node(NODEMGR, (yyvsp[0].node));}
#line 3297 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 197: /* declarations: %empty  */
#line 761 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
               {(yyval.node) = Nil;}
#line 3303 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 198: /* declarations: declarations declaration  */
#line 762 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                        {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-1].node));}
#line 3309 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 199: /* declarations: declarations error  */
#line 763 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                      { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3315 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 220: /* var: TOK_VAR  */
#line 794 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                        {(yyval.node) = new_lined_node(NODEMGR, VAR, Nil, Nil, (yyvsp[0].lineno));}
#line 3321 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 221: /* var: TOK_VAR var_decl_list  */
#line 795 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                      {(yyval.node) = new_lined_node(NODEMGR, VAR, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3327 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 222: /* frozen_var: TOK_FROZENVAR  */
#line 798 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                              {(yyval.node) = new_lined_node(NODEMGR, FROZENVAR, Nil, Nil, (yyvsp[0].lineno));}
#line 3333 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 223: /* frozen_var: TOK_FROZENVAR fvar_decl_list  */
#line 799 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                             {(yyval.node) = new_lined_node(NODEMGR, FROZENVAR, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3339 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 224: /* input_var: TOK_IVAR  */
#line 802 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                         {(yyval.node) = new_lined_node(NODEMGR, IVAR, Nil, Nil, (yyvsp[0].lineno));}
#line 3345 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 225: /* input_var: TOK_IVAR ivar_decl_list  */
#line 803 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                        {(yyval.node) = new_lined_node(NODEMGR, IVAR, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3351 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 226: /* fun_def: TOK_FUN  */
#line 805 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                        {
                 nusmv_yyerror("functions definitions are not supported.");
                 YYABORT;
               }
#line 3360 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 227: /* fun_def: TOK_FUN fun_decl_list  */
#line 809 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                      {
                 nusmv_yyerror("functions definitions are not supported.");
                 YYABORT;
               }
#line 3369 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 228: /* var_decl_list: var_decl  */
#line 815 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                        {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil);}
#line 3375 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 229: /* var_decl_list: var_decl_list var_decl  */
#line 816 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                        {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-1].node));}
#line 3381 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 230: /* var_decl_list: var_decl_list error  */
#line 817 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                        { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3387 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 231: /* fvar_decl_list: fvar_decl  */
#line 819 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                          {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil);}
#line 3393 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 232: /* fvar_decl_list: fvar_decl_list fvar_decl  */
#line 820 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                          {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-1].node));}
#line 3399 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 233: /* fvar_decl_list: fvar_decl_list error  */
#line 821 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                         { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3405 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 234: /* ivar_decl_list: ivar_decl  */
#line 823 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                          {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil);}
#line 3411 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 235: /* ivar_decl_list: ivar_decl_list ivar_decl  */
#line 824 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                          {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-1].node));}
#line 3417 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 236: /* ivar_decl_list: ivar_decl_list error  */
#line 825 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                         { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3423 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 237: /* fun_decl_list: fun_decl  */
#line 827 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                        {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil);}
#line 3429 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 238: /* fun_decl_list: fun_decl_list fun_decl  */
#line 828 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                        {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-1].node));}
#line 3435 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 239: /* fun_decl_list: fun_decl_list error  */
#line 829 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                        { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3441 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 240: /* var_decl: decl_var_id TOK_COLON type TOK_SEMI  */
#line 832 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                    {(yyval.node) = new_lined_node(NODEMGR, COLON, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));}
#line 3447 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 241: /* fvar_decl: decl_var_id TOK_COLON itype TOK_SEMI  */
#line 834 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                     {(yyval.node) = new_lined_node(NODEMGR, COLON, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));}
#line 3453 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 242: /* ivar_decl: decl_var_id TOK_COLON itype TOK_SEMI  */
#line 836 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                     {(yyval.node) = new_lined_node(NODEMGR, COLON, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));}
#line 3459 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 243: /* fun_decl: decl_var_id TOK_COLON nfun_type TOK_SEMI  */
#line 838 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                         {(yyval.node) = new_lined_node(NODEMGR, COLON, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));}
#line 3465 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 244: /* nfun_type: nfun_ftype TOK_IMPLIES itype  */
#line 841 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                             {(yyval.node) = new_node(NODEMGR, NFUNCTION_TYPE, (yyvsp[-2].node), (yyvsp[0].node));}
#line 3471 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 245: /* nfun_ftype: itype  */
#line 845 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                     { (yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil); }
#line 3477 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 246: /* nfun_ftype: nfun_ftype TOK_TIMES itype  */
#line 846 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                          { (yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-2].node)); }
#line 3483 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 247: /* define_decls: TOK_DEFINE define_list  */
#line 851 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                  {(yyval.node) = new_lined_node(NODEMGR, DEFINE, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3489 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 248: /* define_list: %empty  */
#line 853 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                {(yyval.node) = Nil;}
#line 3495 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 249: /* define_list: define_list define  */
#line 854 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                   {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-1].node));}
#line 3501 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 250: /* define_list: define_list error  */
#line 855 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                      { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3507 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 251: /* define: decl_var_id TOK_EQDEF next_expression TOK_SEMI  */
#line 859 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                 {(yyval.node) = new_lined_node(NODEMGR, EQDEF, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));}
#line 3513 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 252: /* define: decl_var_id TOK_EQDEF array_expression TOK_SEMI  */
#line 861 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                 {(yyval.node) = new_lined_node(NODEMGR, EQDEF, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));
                                 /* Note that array-define is declared
                                    as normal define.
                                    Then compile_instantiate in compileFlatten.c
                                    distinguish them by detecting
                                    ARRAY_DEF on right hand side.
                                   */
                                 }
#line 3526 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 253: /* array_define: TOK_ARRAY_DEFINE array_define_list  */
#line 873 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                      {(yyval.node) = new_lined_node(NODEMGR, DEFINE, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3532 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 254: /* array_define_list: %empty  */
#line 877 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                {(yyval.node) = Nil;}
#line 3538 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 255: /* array_define_list: array_define_list decl_var_id TOK_EQDEF array_expression TOK_SEMI  */
#line 878 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                                   {(yyval.node) = cons(NODEMGR, new_lined_node(NODEMGR, EQDEF, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno)), (yyvsp[-4].node));}
#line 3544 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 256: /* array_define_list: array_define_list error  */
#line 879 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                            { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3550 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 257: /* array_expression: TOK_LB array_contents TOK_RB  */
#line 883 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                             {(yyval.node) =  new_lined_node(NODEMGR, ARRAY_DEF, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3556 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 258: /* array_expression: TOK_LB array_expression_list TOK_RB  */
#line 884 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                    {(yyval.node) =  new_lined_node(NODEMGR, ARRAY_DEF, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3562 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 259: /* array_expression_list: array_expression  */
#line 888 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                 {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil);}
#line 3568 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 260: /* array_expression_list: array_expression TOK_COMMA array_expression_list  */
#line 889 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                 {(yyval.node) = cons(NODEMGR, (yyvsp[-2].node), (yyvsp[0].node));}
#line 3574 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 261: /* array_contents: next_expression TOK_COMMA array_contents  */
#line 893 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                         {(yyval.node) = cons(NODEMGR, (yyvsp[-2].node), (yyvsp[0].node));}
#line 3580 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 262: /* array_contents: next_expression  */
#line 894 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                {(yyval.node) = cons(NODEMGR, (yyvsp[0].node),Nil);}
#line 3586 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 263: /* assign: TOK_ASSIGN assign_list  */
#line 898 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                       {(yyval.node) = new_lined_node(NODEMGR, ASSIGN, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3592 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 264: /* assign_list: %empty  */
#line 900 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                {(yyval.node) = Nil;}
#line 3598 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 265: /* assign_list: assign_list one_assign  */
#line 901 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                       {(yyval.node) = new_node(NODEMGR, AND, (yyvsp[-1].node), (yyvsp[0].node));}
#line 3604 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 266: /* assign_list: assign_list error  */
#line 902 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                      { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3610 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 267: /* one_assign: var_id TOK_EQDEF simple_expression TOK_SEMI  */
#line 905 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {(yyval.node) = new_lined_node(NODEMGR, EQDEF, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));}
#line 3616 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 268: /* one_assign: TOK_SMALLINIT TOK_LP var_id TOK_RP TOK_EQDEF simple_expression TOK_SEMI  */
#line 907 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  { (yyval.node) = new_lined_node(NODEMGR, EQDEF,
                                        new_lined_node(NODEMGR, SMALLINIT, (yyvsp[-4].node), Nil, (yyvsp[-6].lineno)),
                                        (yyvsp[-1].node), (yyvsp[-2].lineno));
                  }
#line 3625 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 269: /* one_assign: TOK_NEXT TOK_LP var_id TOK_RP TOK_EQDEF next_expression TOK_SEMI  */
#line 912 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  { (yyval.node) = new_lined_node(NODEMGR, EQDEF,
                                        new_lined_node(NODEMGR, NEXT, (yyvsp[-4].node), Nil, (yyvsp[-6].lineno)),
                                        (yyvsp[-1].node), (yyvsp[-2].lineno));
                  }
#line 3634 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 270: /* init: TOK_INIT simple_expression optsemi  */
#line 919 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                     {(yyval.node) = new_lined_node(NODEMGR, INIT, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3640 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 271: /* invar: TOK_INVAR simple_expression optsemi  */
#line 921 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                    {(yyval.node) = new_lined_node(NODEMGR, INVAR, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3646 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 272: /* trans: TOK_TRANS next_expression optsemi  */
#line 923 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                  {(yyval.node) = new_lined_node(NODEMGR, TRANS, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3652 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 273: /* fairness: TOK_FAIRNESS simple_expression optsemi  */
#line 927 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                        {(yyval.node) = new_lined_node(NODEMGR, JUSTICE, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3658 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 274: /* justice: TOK_JUSTICE simple_expression optsemi  */
#line 930 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                       {(yyval.node) = new_lined_node(NODEMGR, JUSTICE, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3664 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 275: /* compassion: TOK_COMPASSION TOK_LP simple_expression TOK_COMMA simple_expression TOK_RP optsemi  */
#line 935 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                         {(yyval.node) = new_lined_node(NODEMGR, COMPASSION, cons(NODEMGR, (yyvsp[-4].node),(yyvsp[-2].node)), Nil, (yyvsp[-6].lineno));}
#line 3670 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 276: /* _invarspec: next_expression optsemi  */
#line 939 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                        { (yyval.node) = (yyvsp[-1].node); }
#line 3676 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 277: /* _invarspec: next_expression TOK_INCONTEXT context optsemi  */
#line 940 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                              {(yyval.node) = new_node(NODEMGR, CONTEXT, (yyvsp[-1].node), (yyvsp[-3].node));}
#line 3682 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 278: /* invarspec: TOK_INVARSPEC _invarspec  */
#line 942 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                         {(yyval.node) = new_lined_node(NODEMGR, INVARSPEC, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3688 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 279: /* invarspec: TOK_INVARSPEC TOK_NAME var_id TOK_EQDEF _invarspec  */
#line 943 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                   {(yyval.node) = new_lined_node(NODEMGR, INVARSPEC, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].lineno));}
#line 3694 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 280: /* _ctlspec: ctl_expression optsemi  */
#line 946 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                       { (yyval.node) = (yyvsp[-1].node); }
#line 3700 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 281: /* _ctlspec: ctl_expression TOK_INCONTEXT context optsemi  */
#line 947 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                             {(yyval.node) = new_node(NODEMGR, CONTEXT, (yyvsp[-1].node), (yyvsp[-3].node));}
#line 3706 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 282: /* ctlspec: TOK_SPEC _ctlspec  */
#line 949 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                  {(yyval.node) = new_lined_node(NODEMGR, SPEC, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3712 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 283: /* ctlspec: TOK_CTLSPEC _ctlspec  */
#line 950 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     {(yyval.node) = new_lined_node(NODEMGR, SPEC, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3718 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 284: /* ctlspec: TOK_SPEC TOK_NAME var_id TOK_EQDEF _ctlspec  */
#line 951 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                             {(yyval.node) = new_lined_node(NODEMGR, SPEC, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].lineno));}
#line 3724 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 285: /* ctlspec: TOK_CTLSPEC TOK_NAME var_id TOK_EQDEF _ctlspec  */
#line 952 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                               {(yyval.node) = new_lined_node(NODEMGR, SPEC, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].lineno));}
#line 3730 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 286: /* _ltlspec: ltl_expression optsemi  */
#line 955 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                       { (yyval.node) = (yyvsp[-1].node); }
#line 3736 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 287: /* _ltlspec: ltl_expression TOK_INCONTEXT context optsemi  */
#line 956 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                             {(yyval.node) = new_node(NODEMGR, CONTEXT, (yyvsp[-1].node), (yyvsp[-3].node));}
#line 3742 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 288: /* ltlspec: TOK_LTLSPEC _ltlspec  */
#line 959 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     {(yyval.node) = new_lined_node(NODEMGR, LTLSPEC, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3748 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 289: /* ltlspec: TOK_LTLSPEC TOK_NAME var_id TOK_EQDEF _ltlspec  */
#line 960 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                               {(yyval.node) = new_lined_node(NODEMGR, LTLSPEC, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].lineno));}
#line 3754 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 290: /* _compute: compute_expression optsemi  */
#line 963 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                           { (yyval.node) = (yyvsp[-1].node); }
#line 3760 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 291: /* _compute: compute_expression TOK_INCONTEXT context optsemi  */
#line 964 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                 {(yyval.node) = new_node(NODEMGR, CONTEXT, (yyvsp[-1].node), (yyvsp[-3].node));}
#line 3766 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 292: /* compute: TOK_COMPUTE _compute  */
#line 966 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     {(yyval.node) = new_lined_node(NODEMGR, COMPUTE, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3772 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 293: /* compute: TOK_COMPUTE TOK_NAME var_id TOK_EQDEF _compute  */
#line 967 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                               {(yyval.node) = new_lined_node(NODEMGR, COMPUTE, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].lineno));}
#line 3778 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 294: /* pslspec: TOK_PSLSPEC  */
#line 972 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
{
  if (nusmv_parse_psl() != 0) {
    YYABORT;
  }
  (yyval.node) = new_lined_node(NODEMGR, PSLSPEC, psl_parsed_tree, psl_property_name, (yyvsp[0].lineno));
  psl_property_name = Nil;
}
#line 3790 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 295: /* constants: TOK_CONSTANTS constants_expression TOK_SEMI  */
#line 982 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                  {(yyval.node) = new_lined_node(NODEMGR, CONSTANTS, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3796 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 296: /* constants_expression: %empty  */
#line 986 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
               {(yyval.node) = Nil;}
#line 3802 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 297: /* constants_expression: complex_atom  */
#line 987 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                            { (yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil);}
#line 3808 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 298: /* constants_expression: constants_expression TOK_COMMA complex_atom  */
#line 988 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                           {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-2].node));}
#line 3814 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 299: /* isa: TOK_ISA TOK_ATOM  */
#line 995 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                 {(yyval.node) = new_node(NODEMGR, ISA, (yyvsp[0].node), Nil);}
#line 3820 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 301: /* optsemi: TOK_SEMI  */
#line 999 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                          {}
#line 3826 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 303: /* decl_var_id: decl_var_id TOK_DOT TOK_ATOM  */
#line 1008 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                             {(yyval.node) = new_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node));}
#line 3832 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 304: /* decl_var_id: decl_var_id TOK_DOT TOK_NUMBER  */
#line 1009 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                               {(yyval.node) = new_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node));}
#line 3838 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 305: /* decl_var_id: decl_var_id TOK_LB TOK_NUMBER TOK_RB  */
#line 1010 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                      {(yyval.node) = new_node(NODEMGR, ARRAY, (yyvsp[-3].node), (yyvsp[-1].node));}
#line 3844 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 306: /* decl_var_id: decl_var_id TOK_LB TOK_MINUS TOK_NUMBER TOK_RB  */
#line 1012 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                      { node_ptr tmp = new_lined_node(NODEMGR, NUMBER,
                                                      PTR_FROM_INT(node_ptr, -node_get_int((yyvsp[-1].node))),
                                                      Nil,
                                                      (yyvsp[-2].lineno));
                        (yyval.node) = new_node(NODEMGR, ARRAY, (yyvsp[-4].node), tmp);
                      }
#line 3855 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 308: /* var_id: TOK_SELF  */
#line 1021 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                         {(yyval.node) = new_node(NODEMGR, SELF,Nil,Nil);}
#line 3861 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 309: /* var_id: var_id TOK_DOT TOK_ATOM  */
#line 1022 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                        {(yyval.node) = new_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node));}
#line 3867 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 310: /* var_id: var_id TOK_DOT TOK_NUMBER  */
#line 1023 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                          {(yyval.node) = new_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node));}
#line 3873 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 311: /* var_id: var_id TOK_LB simple_expression TOK_RB  */
#line 1024 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                       {(yyval.node) = new_node(NODEMGR, ARRAY, (yyvsp[-3].node), (yyvsp[-1].node));}
#line 3879 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 312: /* command: command_case  */
#line 1031 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                             {(yyval.node) = (yyvsp[0].node);}
#line 3885 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 313: /* command: error TOK_SEMI  */
#line 1032 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                               {return(1);}
#line 3891 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 314: /* command: error  */
#line 1033 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                      {return(1);}
#line 3897 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 315: /* command_case: TOK_INIT simple_expression TOK_SEMI  */
#line 1037 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                 {(yyval.node) = new_lined_node(NODEMGR, INIT, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3903 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 316: /* command_case: TOK_FAIRNESS simple_expression TOK_SEMI  */
#line 1039 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                 {(yyval.node) = new_lined_node(NODEMGR, JUSTICE, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3909 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 317: /* command_case: TOK_TRANS next_expression TOK_SEMI  */
#line 1041 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                 {(yyval.node) = new_lined_node(NODEMGR, TRANS, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3915 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 318: /* command_case: TOK_CONSTRAINT simple_expression TOK_SEMI  */
#line 1043 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
              {(yyval.node) = new_lined_node(NODEMGR, CONSTRAINT, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3921 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 319: /* command_case: TOK_ITYPE itype TOK_SEMI  */
#line 1045 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                 {(yyval.node) = new_lined_node(NODEMGR, ITYPE, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3927 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 320: /* command_case: TOK_SIMPWFF _simpwff  */
#line 1048 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     {(yyval.node) = new_lined_node(NODEMGR, SIMPWFF, node2maincontext((yyvsp[0].node)), Nil, (yyvsp[-1].lineno));}
#line 3933 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 321: /* command_case: TOK_NEXTWFF _invarspec  */
#line 1049 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                       {(yyval.node) = new_lined_node(NODEMGR, NEXTWFF, node2maincontext((yyvsp[0].node)), Nil, (yyvsp[-1].lineno));}
#line 3939 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 322: /* command_case: TOK_CTLWFF _ctlspec  */
#line 1050 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                    {(yyval.node) = new_lined_node(NODEMGR, CTLWFF, node2maincontext((yyvsp[0].node)), Nil, (yyvsp[-1].lineno));}
#line 3945 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 323: /* command_case: TOK_LTLWFF _ltlspec  */
#line 1051 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                    {(yyval.node) = new_lined_node(NODEMGR, LTLWFF, node2maincontext((yyvsp[0].node)), Nil, (yyvsp[-1].lineno));}
#line 3951 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 324: /* command_case: TOK_COMPWFF _compute  */
#line 1052 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                     {(yyval.node) = new_lined_node(NODEMGR, COMPWFF, node2maincontext((yyvsp[0].node)), Nil, (yyvsp[-1].lineno));}
#line 3957 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 325: /* command_case: TOK_COMPID var_id TOK_SEMI  */
#line 1053 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                            {(yyval.node) = new_lined_node(NODEMGR, COMPID, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3963 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 326: /* context: TOK_ATOM  */
#line 1057 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                  {(yyval.node) = find_atom(NODEMGR, (yyvsp[0].node)); free_node(NODEMGR, (yyvsp[0].node)); }
#line 3969 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 327: /* context: context TOK_DOT TOK_ATOM  */
#line 1058 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                  {(yyval.node) = find_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node));}
#line 3975 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 328: /* context: context TOK_LB simple_expression TOK_RB  */
#line 1059 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                        {(yyval.node) = find_node(NODEMGR, ARRAY, (yyvsp[-3].node), (yyvsp[-1].node));}
#line 3981 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 329: /* _simpwff: simple_expression optsemi  */
#line 1062 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                          { (yyval.node) = (yyvsp[-1].node); }
#line 3987 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 330: /* _simpwff: simple_expression TOK_INCONTEXT context optsemi  */
#line 1063 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                                                                {(yyval.node) = new_node(NODEMGR, CONTEXT, (yyvsp[-1].node), (yyvsp[-3].node));}
#line 3993 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 331: /* $@1: %empty  */
#line 1069 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                {
  if (PARSE_MODULES != parse_mode_flag) {
    nusmv_yyerror("unexpected MODULE definition encountered during parsing");
    YYABORT;
  }
}
#line 4004 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 332: /* begin: $@1 module_list  */
#line 1076 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                {
                  parsed_tree = (yyvsp[0].node);
                }
#line 4012 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 333: /* $@2: %empty  */
#line 1079 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                {
                  if (PARSE_COMMAND != parse_mode_flag) {
                    nusmv_yyerror("unexpected command encountered during parsing");
                    YYABORT;
                  }
                }
#line 4023 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 334: /* begin: $@2 command  */
#line 1085 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                       {parsed_tree = (yyvsp[0].node);}
#line 4029 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 335: /* $@3: %empty  */
#line 1086 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                {
                  if (PARSE_LTL_EXPR != parse_mode_flag){
                    nusmv_yyerror("unexpected expression encountered during parsing");
                    YYABORT;
                  }
                }
#line 4040 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;

  case 336: /* begin: $@3 ltl_expression  */
#line 1092 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"
                               {parsed_tree = (yyvsp[0].node);}
#line 4046 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"
    break;


#line 4050 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1095 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y"

  /* BEGINS: grammar.y.3.50 */
/***************************************************************  -*-C-*-  ***/

/* Additional source code */

/* outputs the current token with the provided string and then may terminate */
void nusmv_yyerror(char *s)
{
  /* In the input.l file we explicity tell flex that we want a pointer
     (see man flex -> %pointer). So we don't need to check if nusmv_yytext
     is declared as pointer or as array  */
  extern char* nusmv_yytext;
  extern int nusmv_yylineno;
  const OptsHandler_ptr opmgr = GET_OPTS;
  const ErrorMgr_ptr errmgr =
    ERROR_MGR(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_ERROR_MANAGER));
  const StreamMgr_ptr streams =
    STREAM_MGR(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_STREAM_MANAGER));

  parser_add_syntax_error(__nusmv_parser_env__, get_input_file(opmgr), nusmv_yylineno, nusmv_yytext, s);
  if (!OptsHandler_get_bool_option_value(opmgr, OPT_PARSER_IS_LAX)) {
    ErrorMgr_start_parsing_err(errmgr);
    StreamMgr_print_error(streams,  "at token \"%s\": %s\n", nusmv_yytext, s);
    if (opt_batch(opmgr)) { ErrorMgr_finish_parsing_err(errmgr); }
  }
}

/* the same as yyerror, except at first it sets the line number and does
 not output the current token
*/
void nusmv_yyerror_lined(const char *s, int line)
{
  extern char* nusmv_yytext;
  extern int nusmv_yylineno;
  const OptsHandler_ptr opmgr = GET_OPTS;
  const ErrorMgr_ptr errmgr =
    ERROR_MGR(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_ERROR_MANAGER));
  const StreamMgr_ptr streams =
    STREAM_MGR(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_STREAM_MANAGER));

  /*set the line number */
  nusmv_yylineno = line;

  parser_add_syntax_error(__nusmv_parser_env__, get_input_file(opmgr), line, nusmv_yytext, s);
  if (!OptsHandler_get_bool_option_value(opmgr, OPT_PARSER_IS_LAX)) {
    ErrorMgr_start_parsing_err(errmgr);
    StreamMgr_print_error(streams,  ": %s\n", s);
    if (opt_batch(opmgr)) { ErrorMgr_finish_parsing_err(errmgr); }
  }
}

int nusmv_yywrap()
{
  return(1);
}


/* Given a node (possibly a relative or absolute context)
   constructs a node that is contextualized absolutely
   (i.e. relatively to main module). This is used to construct
   context of properties that have to be instatiated in main
   module */
static node_ptr node2maincontext(node_ptr node)
{
  node_ptr ctx;

  if (node_get_type(node) == CONTEXT) {
    /* already a context */
    ctx = CompileFlatten_concat_contexts(__nusmv_parser_env__, Nil, car(node));
    return find_node(NODEMGR, CONTEXT, ctx, cdr(node));
  }

  /* an atom, array or dot */
  return find_node(NODEMGR, CONTEXT, Nil, node);
}

/* This functions build the COLON node for case expressions.  If
   backward compatibility is enabled, and the condition expression is
   found to be the constant "1", then a warning is printed and the
   condition is replaced with TRUE. */
static node_ptr build_case_colon_node(node_ptr l,
                                      node_ptr r,
                                      int linum)
{
  const OptsHandler_ptr opts = GET_OPTS;
  const StreamMgr_ptr streams =
    STREAM_MGR(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_STREAM_MANAGER));

  node_ptr res;

  static int user_warned = 0;

  if (opt_backward_comp(opts) &&
      (NUMBER == node_get_type(l)) && (1 == NODE_TO_INT(car(l)))) {

    /* Print this warning only once. */
    if (!user_warned) {
      StreamMgr_print_error(streams,
              "\nWARNING *** Option backward_compatibility (-old) is deprecate ***\n");
      StreamMgr_print_error(streams,
              "WARNING *** and will no longer be supported in future NuSMV versions. ***\n\n");
      user_warned = 1;
    }

    StreamMgr_print_error(streams,  "WARNING (");

    if (get_input_file(opts)) {
      StreamMgr_print_error(streams,  "file %s", get_input_file(opts));
    }
    else StreamMgr_print_error(streams,  "file stdin");

    StreamMgr_print_error(streams,
            ", line %d) : Deprecated use of \"1\" for case condition\n", linum);

    res = new_lined_node(NODEMGR, COLON, new_node(NODEMGR, TRUEEXP, Nil, Nil), r, linum);
  }
  else {
    res = new_lined_node(NODEMGR, COLON, l, r, linum);
  }

  return res;
}

/* this functions checks that the expression is formed syntactically correct.
   Takes the expression to be checked, the expected kind of the
   expression. Returns true if the expression is formed correctly, and
   false otherwise.
   See enum EXP_KIND for more info about syntactic well-formedness.
*/
static boolean isCorrectExp(node_ptr exp, enum EXP_KIND expectedKind)
{
  switch(node_get_type(exp))
    {
      /* atomic expression (or thier operands have been checked earlier) */
    case FAILURE:
    case FALSEEXP:
    case TRUEEXP:
    case NUMBER:
    case NUMBER_UNSIGNED_WORD:
    case NUMBER_SIGNED_WORD:
    case NUMBER_FRAC:
    case NUMBER_REAL:
    case NUMBER_EXP:
    case UWCONST:
    case SWCONST:
    case TWODOTS:
    case DOT:
    case ATOM:
    case SELF:
    case ARRAY:
    case COUNT:
      return true;

      /* unary operators incompatible with LTL and CTL operator */
    case CAST_BOOL:
    case CAST_WORD1:
    case CAST_SIGNED:
    case CAST_UNSIGNED:
    case WSIZEOF:
    case CAST_TOINT:
    case TYPEOF:
      if (EXP_CTL == expectedKind) {
        return isCorrectExp(car(exp), EXP_SIMPLE);
      }
      else if (EXP_LTL == expectedKind) {
        return isCorrectExp(car(exp), EXP_NEXT);
      }

      FALLTHROUGH

      /* unary operators compatible with LTL and CTL operator */
    case NOT:
    case UMINUS:
      return isCorrectExp(car(exp), expectedKind);

      /* binary opertors incompatible with LTL and CTL operator */
    case BIT_SELECTION:
    case CASE: case COLON:
    case CONCATENATION:
    case TIMES: case DIVIDE: case PLUS :case MINUS: case MOD:
    case LSHIFT: case RSHIFT: case LROTATE: case RROTATE:
    case WAREAD: case WAWRITE: /* AC ADDED THESE */
    case UNION: case SETIN:
    case EQUAL: case NOTEQUAL: case LT: case GT: case LE: case GE:
    case IFTHENELSE:
    case EXTEND:
    case WRESIZE:
    case CONST_ARRAY: /* AI ADDED */
      if (EXP_CTL == expectedKind) {
        return isCorrectExp(car(exp), EXP_SIMPLE)
          && isCorrectExp(cdr(exp), EXP_SIMPLE);
      }
      else if (EXP_LTL == expectedKind) {
        return isCorrectExp(car(exp), EXP_NEXT)
          && isCorrectExp(cdr(exp), EXP_NEXT);
      }

      FALLTHROUGH

      /* binary opertors compatible LTL and CTL operator */
    case AND: case OR: case XOR: case XNOR: case IFF: case IMPLIES:
      return isCorrectExp(car(exp), expectedKind)
        && isCorrectExp(cdr(exp), expectedKind);

      /* next expression (LTL is allowed to contain next) */
    case NEXT:
      if (EXP_NEXT != expectedKind &&
          EXP_LTL != expectedKind) {
        nusmv_yyerror_lined("unexpected 'next' operator", node_get_lineno(exp));
        return false;
      }
      return isCorrectExp(car(exp), EXP_SIMPLE); /* NEXT cannot contain NEXT */

      /* CTL unary expressions */
    case EX: case AX: case EF: case AF: case EG: case AG:
    case ABU: case EBU:
    case EBF: case ABF: case EBG: case ABG:
      if (EXP_CTL != expectedKind) {
        nusmv_yyerror_lined("unexpected CTL operator", node_get_lineno(exp));
        return false;
      }
      return isCorrectExp(car(exp), EXP_CTL); /* continue to check CTL */

      /* CTL binary expressions */
    case AU: case EU:
      if (EXP_CTL != expectedKind) {
        nusmv_yyerror_lined("unexpected CTL operator", node_get_lineno(exp));
        return false;
      }
      return isCorrectExp(car(exp), EXP_CTL)
        && isCorrectExp(cdr(exp), EXP_CTL); /* continue to check CTL */


      /* LTL unary expressions */
    case OP_NEXT: case OP_PREC: case OP_NOTPRECNOT: case OP_GLOBAL:
    case OP_HISTORICAL: case OP_FUTURE: case OP_ONCE:
      if (EXP_LTL != expectedKind) {
        nusmv_yyerror_lined("unexpected LTL operator", node_get_lineno(exp));
        return false;
      }
      return isCorrectExp(car(exp), EXP_LTL); /* continue to check LTL */


      /* LTL binary expressions */
    case UNTIL: case SINCE:
      if (EXP_LTL != expectedKind) {
        nusmv_yyerror_lined("unexpected LTL operator", node_get_lineno(exp));
        return false;
      }
      return isCorrectExp(car(exp), EXP_LTL)
        && isCorrectExp(cdr(exp), EXP_LTL); /* continue to check LTL */

    default: nusmv_assert(false); /* unknown expression */
    }
  return false; /* should never be invoked */
}


static int nusmv_parse_psl()
{
  int res;
  res = psl_yyparse();
  return res;
}
  /* ENDS: grammar.y.3.50 */
