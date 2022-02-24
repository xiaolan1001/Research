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
#define yyparse         parser_ap_parse
#define yylex           parser_ap_lex
#define yyerror         parser_ap_error
#define yydebug         parser_ap_debug
#define yynerrs         parser_ap_nerrs
#define yylval          parser_ap_lval
#define yychar          parser_ap_char

/* First part of user prologue.  */
#line 1 "ap_grammar.y"

/**CFile***********************************************************************

  FileName    [ap_grammar.y]

  PackageName [parser.ap]

  Synopsis    [Yacc for apability input file]

  SeeAlso     [ap_input.l]

  Author      [Marco Roveri]

  Copyright   [
  This file is part of the ``compass.parser.ap'' package of NuSMV version 2.
  Copyright (C) 2008 by FBK-irst.

  NuSMV version 2 is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  NuSMV version 2 is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA.

  For more information on NuSMV see <http://nusmv.fbk.eu>
  or email to <nusmv-users@fbk.eu>.
  Please report bugs to <nusmv-users@fbk.eu>.

  To contact the NuSMV development board, email to <nusmv@fbk.eu>. ]

******************************************************************************/

#if HAVE_CONFIG_H
# include "nusmv-config.h"
#endif

#include "nusmv/core/utils/StreamMgr.h"
#include "nusmv/core/node/NodeMgr.h"
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

#include "nusmv/addons_core/compass/parser/ap/ParserAp.h"
#include "nusmv/addons_core/compass/parser/ap/ParserAp_private.h"
#include "nusmv/addons_core/compass/parser/ap/apInt.h"

#include "nusmv/core/node/node.h"
#include "nusmv/core/utils/ErrorMgr.h"
#include "nusmv/core/utils/utils.h"

#include "nusmv/core/parser/symbols.h"



void parser_ap_error(char *s);
int parser_ap_wrap(void);

enum EXP_KIND {EXP_SIMPLE, EXP_NEXT, EXP_LTL, EXP_CTL};
static boolean isCorrectExp(node_ptr exp, enum EXP_KIND expectedKind);

/* TODO[AMa] Check for performances, see main grammar */
#define NODEMGR                                                         \
  NODE_MGR(NuSMVEnv_get_value(EnvObject_get_environment(ENV_OBJECT(parser_ap_get_global_parser())), ENV_NODE_MGR))



#line 164 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"

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

#include "ap_grammar.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_ATOM = 3,                   /* TOK_ATOM  */
  YYSYMBOL_TOK_FALSEEXP = 4,               /* TOK_FALSEEXP  */
  YYSYMBOL_TOK_TRUEEXP = 5,                /* TOK_TRUEEXP  */
  YYSYMBOL_TOK_NUMBER = 6,                 /* TOK_NUMBER  */
  YYSYMBOL_TOK_NUMBER_FRAC = 7,            /* TOK_NUMBER_FRAC  */
  YYSYMBOL_TOK_NUMBER_REAL = 8,            /* TOK_NUMBER_REAL  */
  YYSYMBOL_TOK_NUMBER_EXP = 9,             /* TOK_NUMBER_EXP  */
  YYSYMBOL_TOK_NUMBER_WORD = 10,           /* TOK_NUMBER_WORD  */
  YYSYMBOL_TOK_CONS = 11,                  /* TOK_CONS  */
  YYSYMBOL_TOK_SEMI = 12,                  /* TOK_SEMI  */
  YYSYMBOL_TOK_LP = 13,                    /* TOK_LP  */
  YYSYMBOL_TOK_RP = 14,                    /* TOK_RP  */
  YYSYMBOL_TOK_RB = 15,                    /* TOK_RB  */
  YYSYMBOL_TOK_LCB = 16,                   /* TOK_LCB  */
  YYSYMBOL_TOK_RCB = 17,                   /* TOK_RCB  */
  YYSYMBOL_TOK_TWODOTS = 18,               /* TOK_TWODOTS  */
  YYSYMBOL_TOK_SELF = 19,                  /* TOK_SELF  */
  YYSYMBOL_TOK_CASE = 20,                  /* TOK_CASE  */
  YYSYMBOL_TOK_ESAC = 21,                  /* TOK_ESAC  */
  YYSYMBOL_TOK_COLON = 22,                 /* TOK_COLON  */
  YYSYMBOL_TOK_COMMA = 23,                 /* TOK_COMMA  */
  YYSYMBOL_TOK_IMPLIES = 24,               /* TOK_IMPLIES  */
  YYSYMBOL_TOK_IFF = 25,                   /* TOK_IFF  */
  YYSYMBOL_TOK_OR = 26,                    /* TOK_OR  */
  YYSYMBOL_TOK_XOR = 27,                   /* TOK_XOR  */
  YYSYMBOL_TOK_XNOR = 28,                  /* TOK_XNOR  */
  YYSYMBOL_TOK_AND = 29,                   /* TOK_AND  */
  YYSYMBOL_TOK_NOT = 30,                   /* TOK_NOT  */
  YYSYMBOL_TOK_EX = 31,                    /* TOK_EX  */
  YYSYMBOL_TOK_AX = 32,                    /* TOK_AX  */
  YYSYMBOL_TOK_EF = 33,                    /* TOK_EF  */
  YYSYMBOL_TOK_AF = 34,                    /* TOK_AF  */
  YYSYMBOL_TOK_EG = 35,                    /* TOK_EG  */
  YYSYMBOL_TOK_AG = 36,                    /* TOK_AG  */
  YYSYMBOL_TOK_EE = 37,                    /* TOK_EE  */
  YYSYMBOL_TOK_AA = 38,                    /* TOK_AA  */
  YYSYMBOL_TOK_SINCE = 39,                 /* TOK_SINCE  */
  YYSYMBOL_TOK_UNTIL = 40,                 /* TOK_UNTIL  */
  YYSYMBOL_TOK_TRIGGERED = 41,             /* TOK_TRIGGERED  */
  YYSYMBOL_TOK_RELEASES = 42,              /* TOK_RELEASES  */
  YYSYMBOL_TOK_EBF = 43,                   /* TOK_EBF  */
  YYSYMBOL_TOK_EBG = 44,                   /* TOK_EBG  */
  YYSYMBOL_TOK_ABF = 45,                   /* TOK_ABF  */
  YYSYMBOL_TOK_ABG = 46,                   /* TOK_ABG  */
  YYSYMBOL_TOK_BUNTIL = 47,                /* TOK_BUNTIL  */
  YYSYMBOL_TOK_MMIN = 48,                  /* TOK_MMIN  */
  YYSYMBOL_TOK_MMAX = 49,                  /* TOK_MMAX  */
  YYSYMBOL_TOK_OP_NEXT = 50,               /* TOK_OP_NEXT  */
  YYSYMBOL_TOK_OP_GLOBAL = 51,             /* TOK_OP_GLOBAL  */
  YYSYMBOL_TOK_OP_FUTURE = 52,             /* TOK_OP_FUTURE  */
  YYSYMBOL_TOK_OP_PREC = 53,               /* TOK_OP_PREC  */
  YYSYMBOL_TOK_OP_NOTPRECNOT = 54,         /* TOK_OP_NOTPRECNOT  */
  YYSYMBOL_TOK_OP_HISTORICAL = 55,         /* TOK_OP_HISTORICAL  */
  YYSYMBOL_TOK_OP_ONCE = 56,               /* TOK_OP_ONCE  */
  YYSYMBOL_TOK_EQUAL = 57,                 /* TOK_EQUAL  */
  YYSYMBOL_TOK_NOTEQUAL = 58,              /* TOK_NOTEQUAL  */
  YYSYMBOL_TOK_LT = 59,                    /* TOK_LT  */
  YYSYMBOL_TOK_GT = 60,                    /* TOK_GT  */
  YYSYMBOL_TOK_LE = 61,                    /* TOK_LE  */
  YYSYMBOL_TOK_GE = 62,                    /* TOK_GE  */
  YYSYMBOL_TOK_UNION = 63,                 /* TOK_UNION  */
  YYSYMBOL_TOK_SETIN = 64,                 /* TOK_SETIN  */
  YYSYMBOL_TOK_LSHIFT = 65,                /* TOK_LSHIFT  */
  YYSYMBOL_TOK_RSHIFT = 66,                /* TOK_RSHIFT  */
  YYSYMBOL_TOK_LROTATE = 67,               /* TOK_LROTATE  */
  YYSYMBOL_TOK_RROTATE = 68,               /* TOK_RROTATE  */
  YYSYMBOL_TOK_MOD = 69,                   /* TOK_MOD  */
  YYSYMBOL_TOK_PLUS = 70,                  /* TOK_PLUS  */
  YYSYMBOL_TOK_MINUS = 71,                 /* TOK_MINUS  */
  YYSYMBOL_TOK_TIMES = 72,                 /* TOK_TIMES  */
  YYSYMBOL_TOK_DIVIDE = 73,                /* TOK_DIVIDE  */
  YYSYMBOL_TOK_NEXT = 74,                  /* TOK_NEXT  */
  YYSYMBOL_TOK_SMALLINIT = 75,             /* TOK_SMALLINIT  */
  YYSYMBOL_TOK_CONCATENATION = 76,         /* TOK_CONCATENATION  */
  YYSYMBOL_TOK_LB = 77,                    /* TOK_LB  */
  YYSYMBOL_TOK_DOT = 78,                   /* TOK_DOT  */
  YYSYMBOL_TOK_BIT = 79,                   /* TOK_BIT  */
  YYSYMBOL_TOK_SIGNED = 80,                /* TOK_SIGNED  */
  YYSYMBOL_TOK_UNSIGNED = 81,              /* TOK_UNSIGNED  */
  YYSYMBOL_TOK_EXTEND = 82,                /* TOK_EXTEND  */
  YYSYMBOL_TOK_BOOL = 83,                  /* TOK_BOOL  */
  YYSYMBOL_TOK_WORD1 = 84,                 /* TOK_WORD1  */
  YYSYMBOL_YYACCEPT = 85,                  /* $accept  */
  YYSYMBOL_begin = 86,                     /* begin  */
  YYSYMBOL_ap_list = 87,                   /* ap_list  */
  YYSYMBOL_ap_list_item = 88,              /* ap_list_item  */
  YYSYMBOL_optsemi = 89,                   /* optsemi  */
  YYSYMBOL_number = 90,                    /* number  */
  YYSYMBOL_integer = 91,                   /* integer  */
  YYSYMBOL_number_word = 92,               /* number_word  */
  YYSYMBOL_number_frac = 93,               /* number_frac  */
  YYSYMBOL_number_real = 94,               /* number_real  */
  YYSYMBOL_number_exp = 95,                /* number_exp  */
  YYSYMBOL_subrange = 96,                  /* subrange  */
  YYSYMBOL_constant = 97,                  /* constant  */
  YYSYMBOL_primary_expr = 98,              /* primary_expr  */
  YYSYMBOL_case_element_list_expr = 99,    /* case_element_list_expr  */
  YYSYMBOL_case_element_expr = 100,        /* case_element_expr  */
  YYSYMBOL_concatination_expr = 101,       /* concatination_expr  */
  YYSYMBOL_multiplicative_expr = 102,      /* multiplicative_expr  */
  YYSYMBOL_additive_expr = 103,            /* additive_expr  */
  YYSYMBOL_shift_expr = 104,               /* shift_expr  */
  YYSYMBOL_set_expr = 105,                 /* set_expr  */
  YYSYMBOL_set_list_expr = 106,            /* set_list_expr  */
  YYSYMBOL_union_expr = 107,               /* union_expr  */
  YYSYMBOL_in_expr = 108,                  /* in_expr  */
  YYSYMBOL_relational_expr = 109,          /* relational_expr  */
  YYSYMBOL_ctl_expr = 110,                 /* ctl_expr  */
  YYSYMBOL_pure_ctl_expr = 111,            /* pure_ctl_expr  */
  YYSYMBOL_ctl_and_expr = 112,             /* ctl_and_expr  */
  YYSYMBOL_ctl_or_expr = 113,              /* ctl_or_expr  */
  YYSYMBOL_ctl_iff_expr = 114,             /* ctl_iff_expr  */
  YYSYMBOL_ctl_implies_expr = 115,         /* ctl_implies_expr  */
  YYSYMBOL_ctl_basic_expr = 116,           /* ctl_basic_expr  */
  YYSYMBOL_ltl_unary_expr = 117,           /* ltl_unary_expr  */
  YYSYMBOL_pure_ltl_unary_expr = 118,      /* pure_ltl_unary_expr  */
  YYSYMBOL_ltl_binary_expr = 119,          /* ltl_binary_expr  */
  YYSYMBOL_and_expr = 120,                 /* and_expr  */
  YYSYMBOL_or_expr = 121,                  /* or_expr  */
  YYSYMBOL_iff_expr = 122,                 /* iff_expr  */
  YYSYMBOL_implies_expr = 123,             /* implies_expr  */
  YYSYMBOL_basic_expr = 124,               /* basic_expr  */
  YYSYMBOL_simple_expression = 125         /* simple_expression  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   549

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  249

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   339


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   143,   143,   147,   148,   154,   161,   161,   163,   164,
     167,   168,   169,   173,   175,   177,   179,   182,   186,   187,
     188,   189,   190,   194,   198,   211,   212,   213,   214,   215,
     226,   237,   248,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   264,   277,   281,   286,   287,   291,   292,   293,
     294,   298,   299,   300,   303,   304,   305,   311,   312,   313,
     316,   317,   321,   322,   325,   326,   330,   331,   332,   333,
     334,   335,   336,   339,   340,   344,   345,   346,   347,   348,
     349,   350,   352,   354,   356,   358,   359,   360,   361,   364,
     370,   371,   374,   375,   376,   377,   380,   381,   385,   386,
     389,   393,   394,   399,   400,   401,   402,   403,   404,   405,
     407,   412,   413,   415,   417,   423,   432,   433,   437,   438,
     439,   440,   444,   445,   449,   450,   453,   455
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
  "\"end of file\"", "error", "\"invalid token\"", "TOK_ATOM",
  "TOK_FALSEEXP", "TOK_TRUEEXP", "TOK_NUMBER", "TOK_NUMBER_FRAC",
  "TOK_NUMBER_REAL", "TOK_NUMBER_EXP", "TOK_NUMBER_WORD", "TOK_CONS",
  "TOK_SEMI", "TOK_LP", "TOK_RP", "TOK_RB", "TOK_LCB", "TOK_RCB",
  "TOK_TWODOTS", "TOK_SELF", "TOK_CASE", "TOK_ESAC", "TOK_COLON",
  "TOK_COMMA", "TOK_IMPLIES", "TOK_IFF", "TOK_OR", "TOK_XOR", "TOK_XNOR",
  "TOK_AND", "TOK_NOT", "TOK_EX", "TOK_AX", "TOK_EF", "TOK_AF", "TOK_EG",
  "TOK_AG", "TOK_EE", "TOK_AA", "TOK_SINCE", "TOK_UNTIL", "TOK_TRIGGERED",
  "TOK_RELEASES", "TOK_EBF", "TOK_EBG", "TOK_ABF", "TOK_ABG", "TOK_BUNTIL",
  "TOK_MMIN", "TOK_MMAX", "TOK_OP_NEXT", "TOK_OP_GLOBAL", "TOK_OP_FUTURE",
  "TOK_OP_PREC", "TOK_OP_NOTPRECNOT", "TOK_OP_HISTORICAL", "TOK_OP_ONCE",
  "TOK_EQUAL", "TOK_NOTEQUAL", "TOK_LT", "TOK_GT", "TOK_LE", "TOK_GE",
  "TOK_UNION", "TOK_SETIN", "TOK_LSHIFT", "TOK_RSHIFT", "TOK_LROTATE",
  "TOK_RROTATE", "TOK_MOD", "TOK_PLUS", "TOK_MINUS", "TOK_TIMES",
  "TOK_DIVIDE", "TOK_NEXT", "TOK_SMALLINIT", "TOK_CONCATENATION", "TOK_LB",
  "TOK_DOT", "TOK_BIT", "TOK_SIGNED", "TOK_UNSIGNED", "TOK_EXTEND",
  "TOK_BOOL", "TOK_WORD1", "$accept", "begin", "ap_list", "ap_list_item",
  "optsemi", "number", "integer", "number_word", "number_frac",
  "number_real", "number_exp", "subrange", "constant", "primary_expr",
  "case_element_list_expr", "case_element_expr", "concatination_expr",
  "multiplicative_expr", "additive_expr", "shift_expr", "set_expr",
  "set_list_expr", "union_expr", "in_expr", "relational_expr", "ctl_expr",
  "pure_ctl_expr", "ctl_and_expr", "ctl_or_expr", "ctl_iff_expr",
  "ctl_implies_expr", "ctl_basic_expr", "ltl_unary_expr",
  "pure_ltl_unary_expr", "ltl_binary_expr", "and_expr", "or_expr",
  "iff_expr", "implies_expr", "basic_expr", "simple_expression", YY_NULLPTR
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
     335,   336,   337,   338,   339
};
#endif

#define YYPACT_NINF (-136)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-13)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      26,    35,    87,  -136,    26,   215,  -136,  -136,  -136,  -136,
    -136,    17,  -136,  -136,  -136,  -136,   215,   215,  -136,   215,
     271,   327,   327,   327,   327,   327,   327,    21,    24,    18,
      18,    18,    18,   215,   215,   215,   215,   215,   215,   215,
      96,   428,    90,    91,    98,    99,   100,   101,  -136,   102,
    -136,  -136,  -136,  -136,  -136,  -136,   -27,    40,   -17,    -2,
     -12,  -136,    54,    57,   -20,  -136,  -136,  -136,  -136,    19,
      89,    36,    68,  -136,  -136,   115,   117,    13,  -136,   108,
     215,   110,  -136,   127,   465,   -27,  -136,  -136,   383,  -136,
    -136,  -136,  -136,  -136,  -136,   327,   327,  -136,   128,   129,
     327,   327,   327,   327,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,   118,   119,   465,   -27,   215,   215,   215,   215,   215,
     215,    18,   215,    25,   465,   465,   465,   465,   465,   465,
     465,   465,   156,   156,   156,   156,   156,   156,   156,   156,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
    -136,  -136,  -136,  -136,   215,  -136,  -136,   215,  -136,  -136,
     109,    39,    70,  -136,   -15,   -14,  -136,  -136,  -136,  -136,
    -136,  -136,   125,   126,   131,   120,   132,   135,  -136,    12,
    -136,  -136,   -27,    40,    40,    40,   -17,   -17,    -2,    -2,
    -136,    54,    57,    57,    57,    57,    57,    57,  -136,  -136,
    -136,  -136,    19,    89,    89,    89,  -136,    36,  -136,   130,
     327,   327,   327,   327,   327,   327,   327,    18,   327,    18,
    -136,  -136,  -136,   215,  -136,  -136,  -136,   215,  -136,  -136,
     109,   109,   109,  -136,    39,   136,   327,   137,   327,   139,
     140,  -136,   141,  -136,   142,  -136,  -136,  -136,  -136
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     2,     3,     0,     1,     4,    27,    18,
      19,     8,    14,    15,    16,    13,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
      21,    22,    24,    23,    58,    25,    45,    47,    51,    54,
      57,    62,    64,    66,    73,   101,    74,   111,   102,   116,
     118,   122,   124,   126,   127,     6,     0,     0,    60,     0,
      42,     0,     8,     0,     0,    34,    89,   110,     0,    75,
      76,    77,    78,    79,    80,     0,     0,    10,     0,     0,
       0,     0,     0,     0,   103,   106,   108,   104,   105,   107,
     109,     9,     8,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     5,    33,    59,     0,    41,    43,     0,     9,    90,
      92,    96,    98,   100,     0,     0,    11,    12,    85,    87,
      86,    88,     0,     0,     0,     0,     0,     0,    17,     0,
      29,    30,    46,    50,    48,    49,    52,    53,    55,    56,
      63,    65,    67,    68,    69,    70,    71,    72,   113,   112,
     115,   114,   117,   119,   120,   121,   125,   123,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,     0,    35,    36,    31,     0,    44,    91,
      93,    94,    95,    99,    97,     0,     0,     0,     0,     0,
       0,    82,     0,    81,     0,    40,    32,    84,    83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,   150,  -136,  -136,  -136,    20,  -136,  -136,  -136,
    -136,   -19,  -136,     2,    78,  -136,   -54,   -32,   -31,  -136,
      38,  -136,    34,   -90,  -136,   -21,     3,  -135,   -47,  -136,
     -43,   -88,   -18,   153,    30,   -62,    28,  -136,    31,   -10,
    -108
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,   151,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    79,    80,    57,    58,    59,    60,
      61,    77,    62,    63,    64,    65,    66,   160,   161,   162,
     163,   164,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,    90,    91,    92,    93,    94,    76,    78,   165,    81,
     100,   101,   102,   103,   179,   104,   105,   106,   107,   108,
     109,   110,    85,    86,    97,   216,   218,   226,   180,     1,
     153,   181,   217,   219,   227,   -10,   154,   134,   135,   136,
     137,   138,   139,   114,   192,   193,   194,   195,   196,   197,
     122,   123,   125,   130,   131,   126,   127,     5,   140,   141,
     142,   143,   145,   146,   147,   211,   212,   213,   128,   129,
      81,   183,   184,   185,   159,   159,   230,   231,   232,   168,
     169,   170,   171,   203,   204,   205,   114,     6,    98,    99,
      85,    86,   148,   149,   214,   215,   186,   187,    95,   188,
     189,    96,   111,   115,   116,   172,   173,   174,   175,   176,
     177,   117,   118,   119,   120,    85,   124,   132,   144,   240,
     121,   133,   198,   199,   200,   201,   182,   150,   235,   155,
     237,   152,   157,   158,   166,   167,   -11,   -12,   210,   220,
     221,   178,   228,   223,   208,   222,   224,   209,   242,   225,
     244,   241,   243,   245,     7,   246,   247,   248,   156,     8,
       9,    10,    11,    12,    13,    14,    15,   191,   234,    16,
     190,   233,    17,    87,   202,    18,    19,   207,     0,   206,
       0,     0,     0,     0,     0,     0,   113,     0,     0,   229,
     159,   159,   159,   159,   159,   159,     0,   159,   236,     0,
     238,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   239,     0,   159,     0,   159,     8,     9,
      10,    11,    12,    13,    14,    15,    40,    41,    16,     0,
      42,    17,     0,     0,    18,    19,    43,    44,    45,    46,
      47,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    29,    30,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,     0,     0,     8,     9,    10,    82,    12,    13,
      14,    15,     0,     0,    16,    40,    41,     0,     0,    42,
      18,    19,     0,     0,     0,    43,    44,    45,    46,    47,
       0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    29,    30,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
      16,    83,    84,    17,     0,    42,    18,    19,     0,     0,
       0,    43,    44,    45,    46,    47,     0,    88,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      29,    30,    31,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    82,
      12,    13,    14,    15,     0,     0,    16,    40,    41,     0,
       0,    42,    18,    19,     0,     0,     0,    43,    44,    45,
      46,    47,     0,    88,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    29,    30,    31,    32,
       0,     8,     9,    10,   112,    12,    13,    14,    15,     0,
       0,    16,     0,     0,     0,     0,     0,    18,    19,     0,
       0,     0,     0,    83,    84,     0,     0,    42,   113,     0,
       0,     0,     0,    43,    44,    45,    46,    47,     8,     9,
      10,    82,    12,    13,    14,    15,     0,     0,    16,     0,
       0,     0,     0,     0,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,    83,    84,
       0,     0,    42,     0,     0,     0,     0,     0,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    84,     0,     0,    42,
       0,     0,     0,     0,     0,    43,    44,    45,    46,    47
};

static const yytype_int16 yycheck[] =
{
      21,    22,    23,    24,    25,    26,    16,    17,    96,    19,
      29,    30,    31,    32,   122,    33,    34,    35,    36,    37,
      38,    39,    20,    20,     6,    40,    40,    15,     3,     3,
      17,     6,    47,    47,    22,    18,    23,    57,    58,    59,
      60,    61,    62,    41,   134,   135,   136,   137,   138,   139,
      77,    78,    69,    65,    66,    72,    73,    22,    39,    40,
      41,    42,    26,    27,    28,    26,    27,    28,    70,    71,
      80,   125,   126,   127,    95,    96,   211,   212,   213,   100,
     101,   102,   103,   145,   146,   147,    84,     0,    70,    71,
      88,    88,    24,    25,    24,    25,   128,   129,    77,   130,
     131,    77,     6,    13,    13,   115,   116,   117,   118,   119,
     120,    13,    13,    13,    13,   113,    76,    63,    29,   227,
      18,    64,   140,   141,   142,   143,   124,    12,   216,    21,
     218,    14,    22,     6,     6,     6,    18,    18,    29,    14,
      14,   121,    12,    23,   154,    14,    14,   157,   236,    14,
     238,    15,    15,    14,     4,    15,    15,    15,    80,     3,
       4,     5,     6,     7,     8,     9,    10,   133,   215,    13,
     132,   214,    16,    20,   144,    19,    20,   149,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,   210,
     211,   212,   213,   214,   215,   216,    -1,   218,   217,    -1,
     219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   223,    -1,   236,    -1,   238,     3,     4,
       5,     6,     7,     8,     9,    10,    70,    71,    13,    -1,
      74,    16,    -1,    -1,    19,    20,    80,    81,    82,    83,
      84,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    13,    70,    71,    -1,    -1,    74,
      19,    20,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      13,    70,    71,    16,    -1,    74,    19,    20,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    13,    70,    71,    -1,
      -1,    74,    19,    20,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,
      -1,    -1,    -1,    70,    71,    -1,    -1,    74,    30,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    70,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    86,    87,    88,    22,     0,    87,     3,     4,
       5,     6,     7,     8,     9,    10,    13,    16,    19,    20,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    43,
      44,    45,    46,    50,    51,    52,    53,    54,    55,    56,
      70,    71,    74,    80,    81,    82,    83,    84,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   101,   102,   103,
     104,   105,   107,   108,   109,   110,   111,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   124,   106,   124,    99,
     100,   124,     6,    70,    71,    98,   111,   118,    30,   110,
     110,   110,   110,   110,   110,    77,    77,     6,    70,    71,
      96,    96,    96,    96,   117,   117,   117,   117,   117,   117,
     117,     6,     6,    30,    98,    13,    13,    13,    13,    13,
      13,    18,    77,    78,    76,    69,    72,    73,    70,    71,
      65,    66,    63,    64,    57,    58,    59,    60,    61,    62,
      39,    40,    41,    42,    29,    26,    27,    28,    24,    25,
      12,    89,    14,    17,    23,    21,    99,    22,     6,   110,
     112,   113,   114,   115,   116,   116,     6,     6,   110,   110,
     110,   110,   124,   124,   124,   124,   124,   124,    91,   125,
       3,     6,    98,   101,   101,   101,   102,   102,   103,   103,
     105,   107,   108,   108,   108,   108,   108,   108,   117,   117,
     117,   117,   119,   120,   120,   120,   123,   121,   124,   124,
      29,    26,    27,    28,    24,    25,    40,    47,    40,    47,
      14,    14,    14,    23,    14,    14,    15,    22,    12,   110,
     112,   112,   112,   115,   113,   116,    96,   116,    96,   124,
     125,    15,   116,    15,   116,    14,    15,    15,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    85,    86,    87,    87,    88,    89,    89,    90,    90,
      91,    91,    91,    92,    93,    94,    95,    96,    97,    97,
      97,    97,    97,    97,    97,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    99,    99,   100,   101,   101,   102,   102,   102,
     102,   103,   103,   103,   104,   104,   104,   105,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   109,   109,
     109,   109,   109,   110,   110,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     112,   112,   113,   113,   113,   113,   114,   114,   115,   115,
     116,   117,   117,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   119,   119,   119,   119,   120,   120,   121,   121,
     121,   121,   122,   122,   123,   123,   124,   125
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     4,     0,     1,     1,     2,
       1,     2,     2,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     3,
       3,     4,     6,     3,     2,     4,     4,     4,     4,     4,
       6,     3,     1,     2,     4,     1,     3,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     1,     1,     2,     2,     2,     2,     2,
       2,     6,     6,     7,     7,     3,     3,     3,     3,     2,
       1,     3,     1,     3,     3,     3,     1,     3,     1,     3,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     3,     3,     3,     3,     1,     3,     1,     3,
       3,     3,     1,     3,     1,     3,     1,     1
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
  case 2: /* begin: ap_list  */
#line 143 "ap_grammar.y"
                        { }
#line 1533 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 3: /* ap_list: %empty  */
#line 147 "ap_grammar.y"
              {}
#line 1539 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 4: /* ap_list: ap_list_item ap_list  */
#line 149 "ap_grammar.y"
             {
               parser_ap_add(parser_ap_get_global_parser(), (yyvsp[-1].node));
             }
#line 1547 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 5: /* ap_list_item: TOK_ATOM TOK_COLON simple_expression optsemi  */
#line 155 "ap_grammar.y"
{
  (yyval.node) = parser_ap_mk_ap(parser_ap_get_global_parser(), (yyvsp[-3].node), (yyvsp[-1].node));
}
#line 1555 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 7: /* optsemi: TOK_SEMI  */
#line 161 "ap_grammar.y"
                     {}
#line 1561 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 9: /* number: TOK_PLUS TOK_NUMBER  */
#line 164 "ap_grammar.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1567 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 11: /* integer: TOK_PLUS TOK_NUMBER  */
#line 168 "ap_grammar.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1573 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 12: /* integer: TOK_MINUS TOK_NUMBER  */
#line 170 "ap_grammar.y"
                  {node_int_setcar((yyvsp[0].node), -(node_get_int((yyvsp[0].node)))); (yyval.node) = (yyvsp[0].node);}
#line 1579 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 17: /* subrange: integer TOK_TWODOTS integer  */
#line 183 "ap_grammar.y"
                  {(yyval.node) = new_node(NODEMGR, TWODOTS, (yyvsp[-2].node), (yyvsp[0].node));}
#line 1585 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 22: /* constant: number_frac  */
#line 191 "ap_grammar.y"
               {
                 (yyval.node) = (yyvsp[0].node);
               }
#line 1593 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 23: /* constant: number_exp  */
#line 195 "ap_grammar.y"
               {
                 (yyval.node) = (yyvsp[0].node);
               }
#line 1601 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 24: /* constant: number_real  */
#line 199 "ap_grammar.y"
               {
                 (yyval.node) = (yyvsp[0].node);
               }
#line 1609 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 26: /* primary_expr: TOK_MINUS primary_expr  */
#line 212 "ap_grammar.y"
                                      { (yyval.node) = new_node(NODEMGR, UMINUS, (yyvsp[0].node), Nil); }
#line 1615 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 28: /* primary_expr: TOK_SELF  */
#line 214 "ap_grammar.y"
                                {(yyval.node) = new_node(NODEMGR, SELF,Nil,Nil);}
#line 1621 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 29: /* primary_expr: primary_expr TOK_DOT TOK_ATOM  */
#line 216 "ap_grammar.y"
                    {
                      if (ATOM != node_get_type((yyvsp[-2].node)) &&
                          DOT != node_get_type((yyvsp[-2].node)) &&
                          ARRAY != node_get_type((yyvsp[-2].node)) &&
                          SELF != node_get_type((yyvsp[-2].node))) {
                        yyerror("incorrect DOT expression");
                        YYABORT;
                      }
                      (yyval.node) = new_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node)) ;
                    }
#line 1636 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 30: /* primary_expr: primary_expr TOK_DOT TOK_NUMBER  */
#line 227 "ap_grammar.y"
                    {
                      if (ATOM != node_get_type((yyvsp[-2].node)) &&
                          DOT != node_get_type((yyvsp[-2].node)) &&
                          ARRAY != node_get_type((yyvsp[-2].node)) &&
                          SELF != node_get_type((yyvsp[-2].node))) {
                        yyerror("incorrect DOT expression");
                        YYABORT;
                      }
                      (yyval.node) = new_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node)) ;
                    }
#line 1651 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 31: /* primary_expr: primary_expr TOK_LB simple_expression TOK_RB  */
#line 238 "ap_grammar.y"
                     {
                       if (ATOM != node_get_type((yyvsp[-3].node)) &&
                           DOT != node_get_type((yyvsp[-3].node)) &&
                           ARRAY != node_get_type((yyvsp[-3].node)) &&
                           SELF != node_get_type((yyvsp[-3].node))) {
                        yyerror("incorrect ARRAY expression");
                        YYABORT;
                       }
                       (yyval.node) = new_node(NODEMGR, ARRAY, (yyvsp[-3].node), (yyvsp[-1].node));
                     }
#line 1666 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 32: /* primary_expr: primary_expr TOK_LB simple_expression TOK_COLON simple_expression TOK_RB  */
#line 249 "ap_grammar.y"
                       {
                        (yyval.node) = new_node(NODEMGR, BIT_SELECTION, (yyvsp[-5].node), new_node(NODEMGR, COLON, (yyvsp[-3].node), (yyvsp[-1].node)));
                       }
#line 1674 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 33: /* primary_expr: TOK_LP basic_expr TOK_RP  */
#line 252 "ap_grammar.y"
                                                    { (yyval.node) = (yyvsp[-1].node); }
#line 1680 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 34: /* primary_expr: TOK_NOT primary_expr  */
#line 253 "ap_grammar.y"
                                                    { (yyval.node) = new_node(NODEMGR, NOT, (yyvsp[0].node), Nil); }
#line 1686 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 35: /* primary_expr: TOK_BOOL TOK_LP basic_expr TOK_RP  */
#line 254 "ap_grammar.y"
                                                    { (yyval.node) = new_node(NODEMGR, CAST_BOOL, (yyvsp[-1].node), Nil); }
#line 1692 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 36: /* primary_expr: TOK_WORD1 TOK_LP basic_expr TOK_RP  */
#line 255 "ap_grammar.y"
                                                    { (yyval.node) = new_node(NODEMGR, CAST_WORD1, (yyvsp[-1].node), Nil); }
#line 1698 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 37: /* primary_expr: TOK_NEXT TOK_LP basic_expr TOK_RP  */
#line 256 "ap_grammar.y"
                                                    { (yyval.node) = new_node(NODEMGR, NEXT, (yyvsp[-1].node), Nil); }
#line 1704 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 38: /* primary_expr: TOK_SIGNED TOK_LP basic_expr TOK_RP  */
#line 257 "ap_grammar.y"
                                                       { (yyval.node) = new_node(NODEMGR, CAST_SIGNED, (yyvsp[-1].node), Nil); }
#line 1710 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 39: /* primary_expr: TOK_UNSIGNED TOK_LP basic_expr TOK_RP  */
#line 258 "ap_grammar.y"
                                                       { (yyval.node) = new_node(NODEMGR, CAST_UNSIGNED, (yyvsp[-1].node), Nil); }
#line 1716 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 40: /* primary_expr: TOK_EXTEND TOK_LP basic_expr TOK_COMMA basic_expr TOK_RP  */
#line 259 "ap_grammar.y"
                                                                            { (yyval.node) = new_node(NODEMGR, EXTEND, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1722 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 41: /* primary_expr: TOK_CASE case_element_list_expr TOK_ESAC  */
#line 260 "ap_grammar.y"
                                                        { (yyval.node) = (yyvsp[-1].node); }
#line 1728 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 42: /* case_element_list_expr: case_element_expr  */
#line 265 "ap_grammar.y"
             {
               const ParserAp_ptr ap = parser_ap_get_global_parser();
               const NuSMVEnv_ptr env = EnvObject_get_environment(ENV_OBJECT(ap));
               const ErrorMgr_ptr errmgr =
                 ERROR_MGR(NuSMVEnv_get_value(env, ENV_ERROR_MANAGER));
               node_ptr fail =
                 ErrorMgr_failure_make(errmgr,
                                       "case conditions are not exhaustive",
                                       FAILURE_CASE_NOT_EXHAUSTIVE,
                                       parser_ap_lineno);
               (yyval.node) = new_node(NODEMGR, CASE, (yyvsp[0].node), fail);
             }
#line 1745 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 43: /* case_element_list_expr: case_element_expr case_element_list_expr  */
#line 277 "ap_grammar.y"
                                                        { (yyval.node) = new_node(NODEMGR, CASE, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1751 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 44: /* case_element_expr: basic_expr TOK_COLON basic_expr TOK_SEMI  */
#line 282 "ap_grammar.y"
                                    {(yyval.node) = new_node(NODEMGR, COLON, (yyvsp[-3].node), (yyvsp[-1].node));}
#line 1757 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 46: /* concatination_expr: concatination_expr TOK_CONCATENATION primary_expr  */
#line 287 "ap_grammar.y"
                                                                 { (yyval.node) = new_node(NODEMGR, CONCATENATION, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1763 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 48: /* multiplicative_expr: multiplicative_expr TOK_TIMES concatination_expr  */
#line 292 "ap_grammar.y"
                                                                 { (yyval.node) = new_node(NODEMGR, TIMES, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1769 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 49: /* multiplicative_expr: multiplicative_expr TOK_DIVIDE concatination_expr  */
#line 293 "ap_grammar.y"
                                                                 { (yyval.node) = new_node(NODEMGR, DIVIDE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1775 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 50: /* multiplicative_expr: multiplicative_expr TOK_MOD concatination_expr  */
#line 294 "ap_grammar.y"
                                                                 { (yyval.node) = new_node(NODEMGR, MOD, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1781 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 52: /* additive_expr: additive_expr TOK_PLUS multiplicative_expr  */
#line 299 "ap_grammar.y"
                                                           { (yyval.node) = new_node(NODEMGR, PLUS, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1787 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 53: /* additive_expr: additive_expr TOK_MINUS multiplicative_expr  */
#line 300 "ap_grammar.y"
                                                           { (yyval.node) = new_node(NODEMGR, MINUS, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1793 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 55: /* shift_expr: shift_expr TOK_LSHIFT additive_expr  */
#line 304 "ap_grammar.y"
                                                     { (yyval.node) = new_node(NODEMGR, LSHIFT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1799 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 56: /* shift_expr: shift_expr TOK_RSHIFT additive_expr  */
#line 305 "ap_grammar.y"
                                                     { (yyval.node) = new_node(NODEMGR, RSHIFT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1805 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 59: /* set_expr: TOK_LCB set_list_expr TOK_RCB  */
#line 313 "ap_grammar.y"
                                               { (yyval.node) = (yyvsp[-1].node); }
#line 1811 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 61: /* set_list_expr: set_list_expr TOK_COMMA basic_expr  */
#line 317 "ap_grammar.y"
                                                  {(yyval.node) = new_node(NODEMGR, UNION, (yyvsp[-2].node), (yyvsp[0].node));}
#line 1817 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 63: /* union_expr: union_expr TOK_UNION set_expr  */
#line 322 "ap_grammar.y"
                                             { (yyval.node) = new_node(NODEMGR, UNION, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1823 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 65: /* in_expr: in_expr TOK_SETIN union_expr  */
#line 326 "ap_grammar.y"
                                            { (yyval.node) = new_node(NODEMGR, SETIN, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1829 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 67: /* relational_expr: relational_expr TOK_EQUAL in_expr  */
#line 331 "ap_grammar.y"
                                                 { (yyval.node) = new_node(NODEMGR, EQUAL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1835 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 68: /* relational_expr: relational_expr TOK_NOTEQUAL in_expr  */
#line 332 "ap_grammar.y"
                                                    { (yyval.node) = new_node(NODEMGR, NOTEQUAL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1841 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 69: /* relational_expr: relational_expr TOK_LT in_expr  */
#line 333 "ap_grammar.y"
                                              { (yyval.node) = new_node(NODEMGR, LT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1847 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 70: /* relational_expr: relational_expr TOK_GT in_expr  */
#line 334 "ap_grammar.y"
                                              { (yyval.node) = new_node(NODEMGR, GT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1853 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 71: /* relational_expr: relational_expr TOK_LE in_expr  */
#line 335 "ap_grammar.y"
                                              { (yyval.node) = new_node(NODEMGR, LE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1859 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 72: /* relational_expr: relational_expr TOK_GE in_expr  */
#line 336 "ap_grammar.y"
                                              { (yyval.node) = new_node(NODEMGR, GE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1865 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 75: /* pure_ctl_expr: TOK_EX ctl_expr  */
#line 344 "ap_grammar.y"
                                     { (yyval.node) = new_node(NODEMGR, EX, (yyvsp[0].node), Nil); }
#line 1871 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 76: /* pure_ctl_expr: TOK_AX ctl_expr  */
#line 345 "ap_grammar.y"
                                     { (yyval.node) = new_node(NODEMGR, AX, (yyvsp[0].node), Nil); }
#line 1877 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 77: /* pure_ctl_expr: TOK_EF ctl_expr  */
#line 346 "ap_grammar.y"
                                     { (yyval.node) = new_node(NODEMGR, EF, (yyvsp[0].node), Nil); }
#line 1883 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 78: /* pure_ctl_expr: TOK_AF ctl_expr  */
#line 347 "ap_grammar.y"
                                     { (yyval.node) = new_node(NODEMGR, AF, (yyvsp[0].node), Nil); }
#line 1889 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 79: /* pure_ctl_expr: TOK_EG ctl_expr  */
#line 348 "ap_grammar.y"
                                     { (yyval.node) = new_node(NODEMGR, EG, (yyvsp[0].node), Nil); }
#line 1895 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 80: /* pure_ctl_expr: TOK_AG ctl_expr  */
#line 349 "ap_grammar.y"
                                     { (yyval.node) = new_node(NODEMGR, AG, (yyvsp[0].node), Nil); }
#line 1901 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 81: /* pure_ctl_expr: TOK_AA TOK_LB ctl_basic_expr TOK_UNTIL ctl_basic_expr TOK_RB  */
#line 351 "ap_grammar.y"
                                     { (yyval.node) = new_node(NODEMGR, AU, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1907 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 82: /* pure_ctl_expr: TOK_EE TOK_LB ctl_basic_expr TOK_UNTIL ctl_basic_expr TOK_RB  */
#line 353 "ap_grammar.y"
                                     { (yyval.node) = new_node(NODEMGR, EU, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1913 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 83: /* pure_ctl_expr: TOK_AA TOK_LB ctl_basic_expr TOK_BUNTIL subrange ctl_basic_expr TOK_RB  */
#line 355 "ap_grammar.y"
                                     { (yyval.node) = new_node(NODEMGR, ABU, new_node(NODEMGR, AU, (yyvsp[-4].node), (yyvsp[-1].node)), (yyvsp[-2].node)); }
#line 1919 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 84: /* pure_ctl_expr: TOK_EE TOK_LB ctl_basic_expr TOK_BUNTIL subrange ctl_basic_expr TOK_RB  */
#line 357 "ap_grammar.y"
                                     { (yyval.node) = new_node(NODEMGR, EBU, new_node(NODEMGR, EU, (yyvsp[-4].node), (yyvsp[-1].node)), (yyvsp[-2].node)); }
#line 1925 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 85: /* pure_ctl_expr: TOK_EBF subrange ctl_expr  */
#line 358 "ap_grammar.y"
                                         { (yyval.node) = new_node(NODEMGR, EBF, (yyvsp[0].node), (yyvsp[-1].node)); }
#line 1931 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 86: /* pure_ctl_expr: TOK_ABF subrange ctl_expr  */
#line 359 "ap_grammar.y"
                                         { (yyval.node) = new_node(NODEMGR, ABF, (yyvsp[0].node), (yyvsp[-1].node)); }
#line 1937 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 87: /* pure_ctl_expr: TOK_EBG subrange ctl_expr  */
#line 360 "ap_grammar.y"
                                         { (yyval.node) = new_node(NODEMGR, EBG, (yyvsp[0].node), (yyvsp[-1].node)); }
#line 1943 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 88: /* pure_ctl_expr: TOK_ABG subrange ctl_expr  */
#line 361 "ap_grammar.y"
                                         { (yyval.node) = new_node(NODEMGR, ABG, (yyvsp[0].node), (yyvsp[-1].node)); }
#line 1949 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 89: /* pure_ctl_expr: TOK_NOT pure_ctl_expr  */
#line 364 "ap_grammar.y"
                                     { (yyval.node) = new_node(NODEMGR, NOT, (yyvsp[0].node), Nil); }
#line 1955 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 91: /* ctl_and_expr: ctl_and_expr TOK_AND ctl_expr  */
#line 371 "ap_grammar.y"
                                              { (yyval.node) = new_node(NODEMGR, AND, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1961 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 93: /* ctl_or_expr: ctl_or_expr TOK_OR ctl_and_expr  */
#line 375 "ap_grammar.y"
                                                  { (yyval.node) = new_node(NODEMGR, OR,(yyvsp[-2].node), (yyvsp[0].node)); }
#line 1967 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 94: /* ctl_or_expr: ctl_or_expr TOK_XOR ctl_and_expr  */
#line 376 "ap_grammar.y"
                                                  { (yyval.node) = new_node(NODEMGR, XOR,(yyvsp[-2].node), (yyvsp[0].node)); }
#line 1973 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 95: /* ctl_or_expr: ctl_or_expr TOK_XNOR ctl_and_expr  */
#line 377 "ap_grammar.y"
                                                  { (yyval.node) = new_node(NODEMGR, XNOR,(yyvsp[-2].node), (yyvsp[0].node)); }
#line 1979 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 97: /* ctl_iff_expr: ctl_iff_expr TOK_IFF ctl_or_expr  */
#line 381 "ap_grammar.y"
                                                  { (yyval.node) = new_node(NODEMGR, IFF, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1985 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 99: /* ctl_implies_expr: ctl_iff_expr TOK_IMPLIES ctl_implies_expr  */
#line 386 "ap_grammar.y"
                                                         { (yyval.node) = new_node(NODEMGR, IMPLIES, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1991 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 103: /* pure_ltl_unary_expr: TOK_OP_NEXT ltl_unary_expr  */
#line 399 "ap_grammar.y"
                                           {(yyval.node) = new_node(NODEMGR, OP_NEXT, (yyvsp[0].node), Nil);}
#line 1997 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 104: /* pure_ltl_unary_expr: TOK_OP_PREC ltl_unary_expr  */
#line 400 "ap_grammar.y"
                                           {(yyval.node) = new_node(NODEMGR, OP_PREC, (yyvsp[0].node), Nil);}
#line 2003 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 105: /* pure_ltl_unary_expr: TOK_OP_NOTPRECNOT ltl_unary_expr  */
#line 401 "ap_grammar.y"
                                                {(yyval.node) = new_node(NODEMGR, OP_NOTPRECNOT, (yyvsp[0].node), Nil);}
#line 2009 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 106: /* pure_ltl_unary_expr: TOK_OP_GLOBAL ltl_unary_expr  */
#line 402 "ap_grammar.y"
                                            {(yyval.node) = new_node(NODEMGR, OP_GLOBAL, (yyvsp[0].node), Nil);}
#line 2015 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 107: /* pure_ltl_unary_expr: TOK_OP_HISTORICAL ltl_unary_expr  */
#line 403 "ap_grammar.y"
                                                {(yyval.node) = new_node(NODEMGR, OP_HISTORICAL, (yyvsp[0].node), Nil);}
#line 2021 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 108: /* pure_ltl_unary_expr: TOK_OP_FUTURE ltl_unary_expr  */
#line 404 "ap_grammar.y"
                                            {(yyval.node) = new_node(NODEMGR, OP_FUTURE, (yyvsp[0].node), Nil);}
#line 2027 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 109: /* pure_ltl_unary_expr: TOK_OP_ONCE ltl_unary_expr  */
#line 405 "ap_grammar.y"
                                          {(yyval.node) = new_node(NODEMGR, OP_ONCE, (yyvsp[0].node), Nil);}
#line 2033 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 110: /* pure_ltl_unary_expr: TOK_NOT pure_ltl_unary_expr  */
#line 407 "ap_grammar.y"
                                           { (yyval.node) = new_node(NODEMGR, NOT, (yyvsp[0].node), Nil); }
#line 2039 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 112: /* ltl_binary_expr: ltl_binary_expr TOK_UNTIL ltl_unary_expr  */
#line 414 "ap_grammar.y"
                                {(yyval.node) = new_node(NODEMGR, UNTIL, (yyvsp[-2].node), (yyvsp[0].node));}
#line 2045 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 113: /* ltl_binary_expr: ltl_binary_expr TOK_SINCE ltl_unary_expr  */
#line 416 "ap_grammar.y"
                                {(yyval.node) = new_node(NODEMGR, SINCE, (yyvsp[-2].node), (yyvsp[0].node));}
#line 2051 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 114: /* ltl_binary_expr: ltl_binary_expr TOK_RELEASES ltl_unary_expr  */
#line 418 "ap_grammar.y"
                  {(yyval.node) = new_node(NODEMGR, NOT,
                           new_node(NODEMGR, UNTIL,
                             new_node(NODEMGR, NOT, (yyvsp[-2].node), Nil),
                             new_node(NODEMGR, NOT, (yyvsp[0].node), Nil)), Nil);
                  }
#line 2061 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 115: /* ltl_binary_expr: ltl_binary_expr TOK_TRIGGERED ltl_unary_expr  */
#line 424 "ap_grammar.y"
                  {(yyval.node) = new_node(NODEMGR, NOT,
                          new_node(NODEMGR, SINCE,
                              new_node(NODEMGR, NOT, (yyvsp[-2].node), Nil),
                              new_node(NODEMGR, NOT, (yyvsp[0].node), Nil)), Nil);
                  }
#line 2071 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 117: /* and_expr: and_expr TOK_AND ltl_binary_expr  */
#line 433 "ap_grammar.y"
                                                 { (yyval.node) = new_node(NODEMGR, AND, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2077 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 119: /* or_expr: or_expr TOK_OR and_expr  */
#line 438 "ap_grammar.y"
                                          { (yyval.node) = new_node(NODEMGR, OR,(yyvsp[-2].node), (yyvsp[0].node)); }
#line 2083 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 120: /* or_expr: or_expr TOK_XOR and_expr  */
#line 439 "ap_grammar.y"
                                          { (yyval.node) = new_node(NODEMGR, XOR,(yyvsp[-2].node), (yyvsp[0].node)); }
#line 2089 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 121: /* or_expr: or_expr TOK_XNOR and_expr  */
#line 440 "ap_grammar.y"
                                          { (yyval.node) = new_node(NODEMGR, XNOR,(yyvsp[-2].node), (yyvsp[0].node)); }
#line 2095 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 123: /* iff_expr: iff_expr TOK_IFF or_expr  */
#line 445 "ap_grammar.y"
                                          { (yyval.node) = new_node(NODEMGR, IFF, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2101 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 125: /* implies_expr: iff_expr TOK_IMPLIES implies_expr  */
#line 450 "ap_grammar.y"
                                                 { (yyval.node) = new_node(NODEMGR, IMPLIES, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2107 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;

  case 127: /* simple_expression: basic_expr  */
#line 455 "ap_grammar.y"
                                 {if (!isCorrectExp((yyval.node), EXP_SIMPLE)) YYABORT;}
#line 2113 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"
    break;


#line 2117 "/home/summer/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/ap/ap_grammar.c"

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

#line 469 "ap_grammar.y"



/* Additional source code */
void parser_ap_error(char *s)
{
  const ParserAp_ptr ap = parser_ap_get_global_parser();
  const NuSMVEnv_ptr env = EnvObject_get_environment(ENV_OBJECT(ap));
  const OptsHandler_ptr opts =
    OPTS_HANDLER(NuSMVEnv_get_value(env, ENV_OPTS_HANDLER));
  const ErrorMgr_ptr errmgr =
    ERROR_MGR(NuSMVEnv_get_value(env, ENV_ERROR_MANAGER));
  const StreamMgr_ptr streams =
    STREAM_MGR(NuSMVEnv_get_value(env, ENV_STREAM_MANAGER));

  extern char* parser_ap_text;

  StreamMgr_print_error(streams, "\n");
  if (get_output_order_file(opts)) {
    StreamMgr_print_error(streams,  "file %s: ", get_output_order_file(opts));
  }
  else {
    StreamMgr_print_error(streams,  "file stdin: ");
  }

  if (parser_ap_lineno) {
    StreamMgr_print_error(streams,  "line %d: ", parser_ap_lineno);
  }

  StreamMgr_print_error(streams,  "at token \"%s\": %s\n", parser_ap_text, s);
  if (opt_batch(opts)) {
    /* exits the execution */
    StreamMgr_print_error(streams,  "\n");
    ErrorMgr_print_io_atom_stack(errmgr);
    ErrorMgr_nusmv_exit(errmgr, 1);
  }
}

int parser_ap_wrap(void)  { return 1; }

void nusmv_yyerror_lined(const char *s, int line);

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
    case TWODOTS:
    case DOT:
    case ATOM:
    case SELF:
    case ARRAY:
    case BIT_SELECTION:
      return true;

      /* unary operators incompatible with LTL and CTL operator */
    case CAST_BOOL:
    case CAST_WORD1:
    case CAST_SIGNED:
    case CAST_UNSIGNED:
    case EXTEND:
      if (EXP_LTL == expectedKind || EXP_CTL == expectedKind) {
        return isCorrectExp(car(exp), EXP_SIMPLE);
      }
      /* unary operators compatible with LTL and CTL operator */
    case NOT:
    case UMINUS:
      return isCorrectExp(car(exp), expectedKind);

      /* binary opertors incompatible with LTL and CTL operator */
    case CASE: case COLON:
    case CONCATENATION:
    case TIMES: case DIVIDE: case PLUS :case MINUS: case MOD:
    case LSHIFT: case RSHIFT: case LROTATE: case RROTATE:
    case WAREAD: case WAWRITE: /* AC ADDED THESE */
    case UNION: case SETIN:
    case EQUAL: case NOTEQUAL: case LT: case GT: case LE: case GE:
      if (EXP_LTL == expectedKind || EXP_CTL == expectedKind) {
        return isCorrectExp(car(exp), EXP_SIMPLE)
          && isCorrectExp(cdr(exp), EXP_SIMPLE);
      }
      /* binary opertors compatible LTL and CTL operator */
    case AND: case OR: case XOR: case XNOR: case IFF: case IMPLIES:
      return isCorrectExp(car(exp), expectedKind)
        && isCorrectExp(cdr(exp), expectedKind);

      /* next expression */
    case NEXT:
      if (EXP_NEXT != expectedKind) {
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
