// A Bison parser, made by GNU Bison 3.7.5.

// Skeleton interface for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


/**
 ** \file parser/nssis.hh
 ** Define the yy::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_PARSER_NSSIS_HH_INCLUDED
# define YY_YY_PARSER_NSSIS_HH_INCLUDED
// "%code requires" blocks.
#line 6 "parser/nssis_new.yy"

#define USE(VALUE) /*empty*/

# include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include "types.hh"

class mcmas_driver;

#line 67 "parser/nssis.hh"


# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif
# include "location.hh"


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

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

namespace yy {
#line 196 "parser/nssis.hh"




  /// A Bison parser.
  class mcmas_parser
  {
  public:
#ifndef YYSTYPE
    /// Symbol semantic values.
    union semantic_type
    {
#line 37 "parser/nssis_new.yy"

  int ival;
  string* sval;
  map<string, basictype *>* map_basictype;
  pair<map<string, basictype *>*, vector<basictype*>*>* map_vec_basictype;
  basictype* _basictype;
  set<string>* set_string;
  vector<evolution_line*>* vector_evolution_line;
  evolution_line* _evolution_line;
  vector<assignment*>* vector_assignment;
  bool_expression* _bool_expression;
  arithmetic_expression* _arithmetic_expression;
  bit_expression* _bit_expression;
  expression* _expression;
  basic_agent* _basic_agent;
  vector<protocol_line*>* vector_protocol_line;
  protocol_line* _protocol_line;
  unsigned char _unsigned_char;
  bool_value* _bool_value;
  modal_formula* _modal_formula;
  fairness_expression* _fairness_expression;
  pair<modal_formula*, modal_formula*>* dual_modal_formula;
  pair<string*, modal_formula*>* ID_modal_formula;
  pair<pair<string*, string*>*, modal_formula*>* ID_ID_modal_formula;
  pair<fairness_expression*, fairness_expression*>* dual_fairness_expression;
  pair<string*, fairness_expression*>* ID_fairness_expression;
  pair<pair<string*, string*>*, fairness_expression*>* ID_ID_fairness_expression;
  map<string, variable*>* map_string_variable;

#line 239 "parser/nssis.hh"

    };
#else
    typedef YYSTYPE semantic_type;
#endif
    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        YYEMPTY = -2,
    END_OF_FILE = 0,               // "end of file"
    YYerror = 256,                 // error
    YYUNDEF = 257,                 // "invalid token"
    AGENT = 258,                   // AGENT
    ACTIONS = 259,                 // ACTIONS
    PROTOCOL = 260,                // PROTOCOL
    EVOLUTION = 261,               // EVOLUTION
    END = 262,                     // END
    LB = 263,                      // LB
    RB = 264,                      // RB
    LCB = 265,                     // LCB
    RCB = 266,                     // RCB
    LT = 267,                      // LT
    GT = 268,                      // GT
    IF = 269,                      // IF
    EQ = 270,                      // EQ
    AND = 271,                     // AND
    ENVIRONMENT = 272,             // ENVIRONMENT
    OBSVARS = 273,                 // OBSVARS
    VARS = 274,                    // VARS
    BOOLEAN = 275,                 // BOOLEAN
    BTRUE = 276,                   // BTRUE
    BFALSE = 277,                  // BFALSE
    TO = 278,                      // TO
    LE = 279,                      // LE
    GE = 280,                      // GE
    NEQ = 281,                     // NEQ
    MINUS = 282,                   // MINUS
    PLUS = 283,                    // PLUS
    TIMES = 284,                   // TIMES
    DIVIDE = 285,                  // DIVIDE
    ACTION = 286,                  // ACTION
    REDSTATES = 287,               // REDSTATES
    GREENSTATES = 288,             // GREENSTATES
    FAIRNESS = 289,                // FAIRNESS
    OTHER = 290,                   // OTHER
    LOBSVARS = 291,                // LOBSVARS
    OR = 292,                      // OR
    NOT = 293,                     // NOT
    COLON = 294,                   // COLON
    COMMA = 295,                   // COMMA
    DOT = 296,                     // DOT
    SEMICOLON = 297,               // SEMICOLON
    EVALUATION = 298,              // EVALUATION
    INITSTATES = 299,              // INITSTATES
    GROUPS = 300,                  // GROUPS
    FORMULAE = 301,                // FORMULAE
    LTLPREFIX = 302,               // LTLPREFIX
    CTLSPREFIX = 303,              // CTLSPREFIX
    IMPLIES = 304,                 // IMPLIES
    AG = 305,                      // AG
    EG = 306,                      // EG
    AX = 307,                      // AX
    EX = 308,                      // EX
    AF = 309,                      // AF
    EF = 310,                      // EF
    A = 311,                       // A
    E = 312,                       // E
    UNTIL = 313,                   // UNTIL
    K = 314,                       // K
    GK = 315,                      // GK
    GCK = 316,                     // GCK
    O = 317,                       // O
    DK = 318,                      // DK
    MULTIASSIGNMENT = 319,         // MULTIASSIGNMENT
    SINGLEASSIGNMENT = 320,        // SINGLEASSIGNMENT
    SEMANTICS = 321,               // SEMANTICS
    BITAND = 322,                  // BITAND
    BITOR = 323,                   // BITOR
    BITNOT = 324,                  // BITNOT
    BITXOR = 325,                  // BITXOR
    X = 326,                       // X
    F = 327,                       // F
    G = 328,                       // G
    LSB = 329,                     // LSB
    RSB = 330,                     // RSB
    QUESTION = 331,                // QUESTION
    ID = 332,                      // "identifier"
    NUMBER = 333                   // "number"
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::yytokentype token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 79, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_AGENT = 3,                             // AGENT
        S_ACTIONS = 4,                           // ACTIONS
        S_PROTOCOL = 5,                          // PROTOCOL
        S_EVOLUTION = 6,                         // EVOLUTION
        S_END = 7,                               // END
        S_LB = 8,                                // LB
        S_RB = 9,                                // RB
        S_LCB = 10,                              // LCB
        S_RCB = 11,                              // RCB
        S_LT = 12,                               // LT
        S_GT = 13,                               // GT
        S_IF = 14,                               // IF
        S_EQ = 15,                               // EQ
        S_AND = 16,                              // AND
        S_ENVIRONMENT = 17,                      // ENVIRONMENT
        S_OBSVARS = 18,                          // OBSVARS
        S_VARS = 19,                             // VARS
        S_BOOLEAN = 20,                          // BOOLEAN
        S_BTRUE = 21,                            // BTRUE
        S_BFALSE = 22,                           // BFALSE
        S_TO = 23,                               // TO
        S_LE = 24,                               // LE
        S_GE = 25,                               // GE
        S_NEQ = 26,                              // NEQ
        S_MINUS = 27,                            // MINUS
        S_PLUS = 28,                             // PLUS
        S_TIMES = 29,                            // TIMES
        S_DIVIDE = 30,                           // DIVIDE
        S_ACTION = 31,                           // ACTION
        S_REDSTATES = 32,                        // REDSTATES
        S_GREENSTATES = 33,                      // GREENSTATES
        S_FAIRNESS = 34,                         // FAIRNESS
        S_OTHER = 35,                            // OTHER
        S_LOBSVARS = 36,                         // LOBSVARS
        S_OR = 37,                               // OR
        S_NOT = 38,                              // NOT
        S_COLON = 39,                            // COLON
        S_COMMA = 40,                            // COMMA
        S_DOT = 41,                              // DOT
        S_SEMICOLON = 42,                        // SEMICOLON
        S_EVALUATION = 43,                       // EVALUATION
        S_INITSTATES = 44,                       // INITSTATES
        S_GROUPS = 45,                           // GROUPS
        S_FORMULAE = 46,                         // FORMULAE
        S_LTLPREFIX = 47,                        // LTLPREFIX
        S_CTLSPREFIX = 48,                       // CTLSPREFIX
        S_IMPLIES = 49,                          // IMPLIES
        S_AG = 50,                               // AG
        S_EG = 51,                               // EG
        S_AX = 52,                               // AX
        S_EX = 53,                               // EX
        S_AF = 54,                               // AF
        S_EF = 55,                               // EF
        S_A = 56,                                // A
        S_E = 57,                                // E
        S_UNTIL = 58,                            // UNTIL
        S_K = 59,                                // K
        S_GK = 60,                               // GK
        S_GCK = 61,                              // GCK
        S_O = 62,                                // O
        S_DK = 63,                               // DK
        S_MULTIASSIGNMENT = 64,                  // MULTIASSIGNMENT
        S_SINGLEASSIGNMENT = 65,                 // SINGLEASSIGNMENT
        S_SEMANTICS = 66,                        // SEMANTICS
        S_BITAND = 67,                           // BITAND
        S_BITOR = 68,                            // BITOR
        S_BITNOT = 69,                           // BITNOT
        S_BITXOR = 70,                           // BITXOR
        S_X = 71,                                // X
        S_F = 72,                                // F
        S_G = 73,                                // G
        S_LSB = 74,                              // LSB
        S_RSB = 75,                              // RSB
        S_QUESTION = 76,                         // QUESTION
        S_ID = 77,                               // "identifier"
        S_NUMBER = 78,                           // "number"
        S_YYACCEPT = 79,                         // $accept
        S_eis = 80,                              // eis
        S_semantics = 81,                        // semantics
        S_is = 82,                               // is
        S_envprefix = 83,                        // envprefix
        S_envsuffix = 84,                        // envsuffix
        S_environment = 85,                      // environment
        S_obsprefix = 86,                        // obsprefix
        S_obssuffix = 87,                        // obssuffix
        S_obsvardef = 88,                        // obsvardef
        S_varidlist = 89,                        // varidlist
        S_onevardef = 90,                        // onevardef
        S_enumlist = 91,                         // enumlist
        S_integer = 92,                          // integer
        S_varprefix = 93,                        // varprefix
        S_varsuffix = 94,                        // varsuffix
        S_envardef = 95,                         // envardef
        S_vardef = 96,                           // vardef
        S_redprefix = 97,                        // redprefix
        S_redsuffix = 98,                        // redsuffix
        S_enreddef = 99,                         // enreddef
        S_reddef = 100,                          // reddef
        S_enrboolcond = 101,                     // enrboolcond
        S_rboolcond = 102,                       // rboolcond
        S_evprefix = 103,                        // evprefix
        S_evsuffix = 104,                        // evsuffix
        S_envevdef = 105,                        // envevdef
        S_envevdeflist = 106,                    // envevdeflist
        S_envevline = 107,                       // envevline
        S_boolresult = 108,                      // boolresult
        S_boolresult1 = 109,                     // boolresult1
        S_agents = 110,                          // agents
        S_agprefix = 111,                        // agprefix
        S_agsuffix = 112,                        // agsuffix
        S_agent = 113,                           // agent
        S_lobsprefix = 114,                      // lobsprefix
        S_lobssuffix = 115,                      // lobssuffix
        S_lobsvarsdef = 116,                     // lobsvarsdef
        S_lobsvaridlist = 117,                   // lobsvaridlist
        S_actprefix = 118,                       // actprefix
        S_actsuffix = 119,                       // actsuffix
        S_enactiondef = 120,                     // enactiondef
        S_actiondef = 121,                       // actiondef
        S_actionidlist = 122,                    // actionidlist
        S_protprefix = 123,                      // protprefix
        S_protsuffix = 124,                      // protsuffix
        S_enprotdef = 125,                       // enprotdef
        S_protdef = 126,                         // protdef
        S_enprotdeflist = 127,                   // enprotdeflist
        S_protdeflist = 128,                     // protdeflist
        S_plprefix = 129,                        // plprefix
        S_plsuffix = 130,                        // plsuffix
        S_enprotline = 131,                      // enprotline
        S_protline = 132,                        // protline
        S_otherbranch = 133,                     // otherbranch
        S_enabledidlist = 134,                   // enabledidlist
        S_evdef = 135,                           // evdef
        S_evdeflist = 136,                       // evdeflist
        S_evline = 137,                          // evline
        S_enlboolcond = 138,                     // enlboolcond
        S_lboolcond = 139,                       // lboolcond
        S_expr1 = 140,                           // expr1
        S_term1 = 141,                           // term1
        S_element1 = 142,                        // element1
        S_expr4 = 143,                           // expr4
        S_term4 = 144,                           // term4
        S_factor4 = 145,                         // factor4
        S_element4 = 146,                        // element4
        S_expr5 = 147,                           // expr5
        S_term5 = 148,                           // term5
        S_factor5 = 149,                         // factor5
        S_element5 = 150,                        // element5
        S_expr6 = 151,                           // expr6
        S_term6 = 152,                           // term6
        S_factor6 = 153,                         // factor6
        S_element6 = 154,                        // element6
        S_expr2 = 155,                           // expr2
        S_term2 = 156,                           // term2
        S_element2 = 157,                        // element2
        S_expr3 = 158,                           // expr3
        S_term3 = 159,                           // term3
        S_element3 = 160,                        // element3
        S_eboolcond = 161,                       // eboolcond
        S_logicop = 162,                         // logicop
        S_gboolcond = 163,                       // gboolcond
        S_varvalue1 = 164,                       // varvalue1
        S_boolvalue = 165,                       // boolvalue
        S_varvalue2 = 166,                       // varvalue2
        S_varvalue3 = 167,                       // varvalue3
        S_varvalue4 = 168,                       // varvalue4
        S_evaprefix = 169,                       // evaprefix
        S_evasuffix = 170,                       // evasuffix
        S_evaluation = 171,                      // evaluation
        S_evalist = 172,                         // evalist
        S_evaboolcond = 173,                     // evaboolcond
        S_iniprefix = 174,                       // iniprefix
        S_inisuffix = 175,                       // inisuffix
        S_istates = 176,                         // istates
        S_isboolcond = 177,                      // isboolcond
        S_groupprefix = 178,                     // groupprefix
        S_groupsuffix = 179,                     // groupsuffix
        S_groups = 180,                          // groups
        S_gplprefix = 181,                       // gplprefix
        S_gplsufffix = 182,                      // gplsufffix
        S_groupdeflist = 183,                    // groupdeflist
        S_namelist = 184,                        // namelist
        S_agentname = 185,                       // agentname
        S_fairprefix = 186,                      // fairprefix
        S_fairsuffix = 187,                      // fairsuffix
        S_fairness = 188,                        // fairness
        S_fformlist = 189,                       // fformlist
        S_untilprefixfair = 190,                 // untilprefixfair
        S_epistemicprefixfair = 191,             // epistemicprefixfair
        S_gepistemicprefixfair = 192,            // gepistemicprefixfair
        S_fformula = 193,                        // fformula
        S_forprefix = 194,                       // forprefix
        S_forsuffix = 195,                       // forsuffix
        S_formulae = 196,                        // formulae
        S_formlist = 197,                        // formlist
        S_atlprefix = 198,                       // atlprefix
        S_untilprefix = 199,                     // untilprefix
        S_epistemicprefix = 200,                 // epistemicprefix
        S_gepistemicprefix = 201,                // gepistemicprefix
        S_formula = 202,                         // formula
        S_ltlformula = 203,                      // ltlformula
        S_epistemicprefixltl = 204,              // epistemicprefixltl
        S_gepistemicprefixltl = 205,             // gepistemicprefixltl
        S_pathformula = 206,                     // pathformula
        S_ctlsformula = 207,                     // ctlsformula
        S_epistemicprefixctls = 208,             // epistemicprefixctls
        S_gepistemicprefixctls = 209,            // gepistemicprefixctls
        S_terminalformula = 210                  // terminalformula
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol ()
        : value ()
        , location ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value (std::move (that.value))
        , location (std::move (that.location))
      {}
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);
      /// Constructor for valueless symbols.
      basic_symbol (typename Base::kind_type t,
                    YY_MOVE_REF (location_type) l);

      /// Constructor for symbols with semantic value.
      basic_symbol (typename Base::kind_type t,
                    YY_RVREF (semantic_type) v,
                    YY_RVREF (location_type) l);

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }

      /// Destroy contents, and record that is empty.
      void clear () YY_NOEXCEPT
      {
        Base::clear ();
      }

      /// The user-facing name of this symbol.
      std::string name () const YY_NOEXCEPT
      {
        return mcmas_parser::symbol_name (this->kind ());
      }

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      semantic_type value;

      /// The location.
      location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind
    {
      /// Default constructor.
      by_kind ();

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_kind (by_kind&& that);
#endif

      /// Copy constructor.
      by_kind (const by_kind& that);

      /// The symbol kind as needed by the constructor.
      typedef token_kind_type kind_type;

      /// Constructor from (external) token numbers.
      by_kind (kind_type t);

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_kind& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// The symbol kind.
      /// \a S_YYEMPTY when empty.
      symbol_kind_type kind_;
    };

    /// Backward compatibility for a private implementation detail (Bison 3.6).
    typedef by_kind by_type;

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind>
    {};

    /// Build a parser object.
    mcmas_parser (mcmas_driver& driver_yyarg);
    virtual ~mcmas_parser ();

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    mcmas_parser (const mcmas_parser&) = delete;
    /// Non copyable.
    mcmas_parser& operator= (const mcmas_parser&) = delete;
#endif

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static std::string symbol_name (symbol_kind_type yysymbol);



    class context
    {
    public:
      context (const mcmas_parser& yyparser, const symbol_type& yyla);
      const symbol_type& lookahead () const YY_NOEXCEPT { return yyla_; }
      symbol_kind_type token () const YY_NOEXCEPT { return yyla_.kind (); }
      const location_type& location () const YY_NOEXCEPT { return yyla_.location; }

      /// Put in YYARG at most YYARGN of the expected tokens, and return the
      /// number of tokens stored in YYARG.  If YYARG is null, return the
      /// number of expected tokens (guaranteed to be less than YYNTOKENS).
      int expected_tokens (symbol_kind_type yyarg[], int yyargn) const;

    private:
      const mcmas_parser& yyparser_;
      const symbol_type& yyla_;
    };

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    mcmas_parser (const mcmas_parser&);
    /// Non copyable.
    mcmas_parser& operator= (const mcmas_parser&);
#endif


    /// Stored state numbers (used for stacks).
    typedef short state_type;

    /// The arguments of the error message.
    int yy_syntax_error_arguments_ (const context& yyctx,
                                    symbol_kind_type yyarg[], int yyargn) const;

    /// Generate an error message.
    /// \param yyctx     the context in which the error occurred.
    virtual std::string yysyntax_error_ (const context& yyctx) const;
    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue);

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue);

    static const short yypact_ninf_;
    static const short yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_type enum.
    static symbol_kind_type yytranslate_ (int t);

    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *yystr);

    /// For a symbol, its name in clear.
    static const char* const yytname_[];


    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const short yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const short yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const short yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const short yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const short yytable_[];

    static const short yycheck_[];

    // YYSTOS[STATE-NUM] -- The (internal number of the) accessing
    // symbol of state STATE-NUM.
    static const unsigned char yystos_[];

    // YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
    static const unsigned char yyr1_[];

    // YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
    static const signed char yyr2_[];


#if YYDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_ () const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol kind as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_state& that);

      /// The symbol kind (corresponding to \a state).
      /// \a symbol_kind::S_YYEMPTY when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::iterator iterator;
      typedef typename S::const_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200)
        : seq_ (n)
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Non copyable.
      stack (const stack&) = delete;
      /// Non copyable.
      stack& operator= (const stack&) = delete;
#endif

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.begin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.end ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range)
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
#if YY_CPLUSPLUS < 201103L
      /// Non copyable.
      stack (const stack&);
      /// Non copyable.
      stack& operator= (const stack&);
#endif
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1);

    /// Constants.
    enum
    {
      yylast_ = 10088,     ///< Last index in yytable_.
      yynnts_ = 132,  ///< Number of nonterminal symbols.
      yyfinal_ = 16 ///< Termination state number.
    };


    // User arguments.
    mcmas_driver& driver;

  };


} // yy
#line 1100 "parser/nssis.hh"




#endif // !YY_YY_PARSER_NSSIS_HH_INCLUDED
