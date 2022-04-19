/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    TOKEN_identifier = 258,
    TOKEN_False = 259,
    TOKEN_True = 260,
    TOKEN_number = 261,
    Indent = 262,
    Nodent = 263,
    Dedent = 264,
    TOKEN_string = 265,
    TOKEN_print = 266,
    TOKEN_colon = 267,
    TOKEN_newLine = 268,
    TOKEN_lesserThan = 269,
    TOKEN_greaterThanEqualTo = 270,
    TOKEN_lesserThanEqualTo = 271,
    TOKEN_or = 272,
    TOKEN_and = 273,
    TOKEN_not = 274,
    TOKEN_assignOP = 275,
    TOKEN_notEqualOP = 276,
    TOKEN_equalOP = 277,
    TOKEN_greaterThan = 278,
    TOKEN_in = 279,
    TOKEN_if = 280,
    TOKEN_elif = 281,
    TOKEN_while = 282,
    TOKEN_else = 283,
    TOKEN_import = 284,
    TOKEN_break = 285,
    TOKEN_pass = 286,
    TOKEN_minus = 287,
    TOKEN_plus = 288,
    TOKEN_division = 289,
    TOKEN_multiply = 290,
    TOKEN_openParanthesis = 291,
    TOKEN_closeParanthesis = 292,
    TOKEN_EOF = 293,
    TOKEN_return = 294,
    TOKEN_openBracket = 295,
    TOKEN_closeBracket = 296,
    TOKEN_def = 297,
    TOKEN_comma = 298,
    TOKEN_List = 299,
    TOKEN_range = 300,
    TOKEN_None = 301,
    TOKEN_continue = 302
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "parser.y"
char *data; int indent_depth;

#line 108 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
