%{
	#include <string.h>
	#include "parser.tab.h"
  #include "stack.h"

  /***
      ensures that if a rule matches but it doesn't return a
      value (for instance, a rule skipping whitespace or comments),
      the location of that non-token is skipped
  ***/
  #define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno; 		\
    yylloc.first_column = yycolumn; yylloc.last_column = yycolumn + yyleng - 1; 	\
    yycolumn += yyleng;

  //Declarations
  int yycolumn = 1;
  int beginning = 1;
  int indentation_type;
 	void print_token(char *token);
  int indent_type(int indent_depth);

  //Definitions
 	void print_token(char *token){
      if(beginning==1){
          printf("Token sequence:-\n");
          beginning--;
      }
 	  printf("%s\n", token);
 	}

  int indent_type(int indent_depth){
        if(indent_depth < peek())
        {
          while (indent_depth < peek()) pop();
          yylval.indent_depth = indent_depth;
          print_token("Dedent");
          return 1;
        }

        if(indent_depth == peek())
        {
          print_token("Nodent");
          yylval.indent_depth = indent_depth;
          return 2;
        }
        if(indent_depth > peek())
        {
          push(indent_depth);
          print_token("Indent");
          yylval.indent_depth = indent_depth;
          return 3;
        }
  }

%}

%option yylineno
multiline_comment_single  \'\'\'.+\'\'\'
multiline_comment_double  \"\"\".+\"\"\"
digit	[0-9]
letter	[a-zA-Z]
id	{letter}({letter}|{digit})*
digits	{digit}+
opFraction	(\.{digits})?
opExponent	([Ee][+-]?{digits})?
number	{digits}{opFraction}{opExponent}
single_quote_string \'([^\'\n])*\'
double_quote_string \"([^\"\n])*\"
%%

#.* {}
{multiline_comment_single} {}
{multiline_comment_double} {}
[ ] {}
"\n"  {yycolumn=1; print_token("NL"); return T_newLine;}

[\t]* {
        indent_depth = strlen(yytext) + 1;
        printf("indent_depth: %d ",  indent_depth);
        indentation_type = indent_type(indent_depth);
        if(indentation_type == 1) return Dedent;
        else if(indentation_type == 2) return Nodent;
        else return Indent;
      }


<<EOF>> {print_token("EOF"); return T_EOF;}
"True" {print_token("True"); return T_True;}
"False" {print_token("False"); return T_False;}
"if" {print_token("if"); return T_if;}
"in" {print_token("in"); return T_in;}
"while" {print_token("while"); return T_while;}
"continue" {print_token("continue"); return T_continue;}
"break" {print_token("break"); return T_break;}
"pass" {print_token("pass"); return T_pass;}
"return" {print_token("return"); return T_return;}
":" {print_token("colon"); return T_colon;}
">" {print_token("greaterThan"); return T_greaterThan;}
"<" {print_token("lesserThan"); return T_lesserThan;}
">=" {print_token("greaterThanEqualTo"); return T_greaterThanEqualTo;}
"<=" {print_token("lesserThanEqualTo"); return T_lesserThanEqualTo;}
"==" {print_token("Equal Operator"); return T_equalOP;}
"!=" {print_token("Not Equal Operator"); return T_notEqualOP;}
"None" {print_token("None"); return T_None;}
"and" {print_token("and"); return T_and;}
"or" {print_token("or"); return T_or;}
"not" {print_token("not"); return T_not;}
"elif" {print_token("elif"); return T_elif;}
"else" {print_token("else"); return T_else;}
"def" {print_token("def"); return T_def;}
"[" {print_token("openBracket"); return T_openBracket;}
"]" {print_token("closeBracket"); return T_closeBracket;}
"," {print_token("comma"); return T_comma;}
"=" {print_token("assignOP"); return T_assignOP;}
"+" {print_token("plus"); return T_plus;}
"-" {print_token("minus"); return T_minus;}
"*" {print_token("multiply"); return T_multiply;}
"/" {print_token("division"); return T_division;}
"(" { print_token("openParanthesis"); return T_openParanthesis;}
")" {print_token("closeParanthesis"); return T_closeParanthesis;}
"list" {print_token("list"); return T_List;}
"range" {print_token("range"); return T_range;}
"import" {print_token("import"); return T_import;}
"print"  {print_token("print"); return T_print;}


{single_quote_string} {yylval.data = strdup(yytext); print_token(yylval.data); return T_string;}
{double_quote_string} {yylval.data = strdup(yytext); print_token(yylval.data); return T_string;}
{number} {yylval.data = strdup(yytext); print_token(yylval.data); return T_number;}
{id} {yylval.data = strdup(yytext); print_token(yylval.data); return T_identifier;}

%%

int yywrap()
{
    strcpy(yylval.data,yytext);return 1;
}
