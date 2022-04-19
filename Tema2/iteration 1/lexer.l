%{
	//definitions
	#include "parser.tab.h"

	//complete the lexer with print_token or print
%}


%%
	//rules
[0-9]+ { yylval.num = atoi(yytext); return NUMBER;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MULTIPLY;}
\n {return EOL;}
. {}



#.* {}
[ ] {}
"\n"  {yycolumn=1; print_token("NL"); return TOKEN_newLine;}

[\t]* {
        indent_depth = strlen(yytext) + 1;
        printf("indent_depth: %d ",  indent_depth);
        indentation_type = indent_type(indent_depth);
        if(indentation_type == 1) return Dedent;
        else if(indentation_type == 2) return Nodent;
        else return Indent;
      }



<<EOF>> {print_token("EOF"); return TOKEN_EOF;}
"True" {print_token("True"); return TOKEN_True;}
"False" {print_token("False"); return TOKEN_False;}
"if" {print_token("if"); return TOKEN_if;}
"in" {print_token("in"); return TOKEN_in;}
"while" {print_token("while"); return TOKEN_while;}
"continue" {print_token("continue"); return TOKEN_continue;}
"break" {print_token("break"); return TOKEN_break;}
"pass" {print_token("pass"); return TOKEN_pass;}
"return" {print_token("return"); return TOKEN_return;}
":" {print_token("colon"); return TOKEN_colon;}
">" {print_token("greaterThan"); return TOKEN_greaterThan;}
"<" {print_token("lesserThan"); return TOKEN_lesserThan;}
">=" {print_token("greaterThanEqualTo"); return TOKEN_greaterThanEqualTo;}
"<=" {print_token("lesserThanEqualTo"); return TOKEN_lesserThanEqualTo;}
"==" {print_token("Equal Operator"); return TOKEN_equalOP;}
"!=" {print_token("Not Equal Operator"); return TOKEN_notEqualOP;}
"None" {print_token("None"); return TOKEN_None;}
"and" {print_token("and"); return TOKEN_and;}
"or" {print_token("or"); return TOKEN_or;}
"not" {print_token("not"); return TOKEN_not;}
"elif" {print_token("elif"); return TOKEN_elif;}
"else" {print_token("else"); return TOKEN_else;}
"def" {print_token("def"); return TOKEN_def;}
"[" {print_token("openBracket"); return TOKEN_openBracket;}
"]" {print_token("closeBracket"); return TOKEN_closeBracket;}
"," {print_token("comma"); return TOKEN_comma;}
"=" {print_token("assignOP"); return TOKEN_assignOP;}
"+" {print_token("plus"); return TOKEN_plus;}
"-" {print_token("minus"); return TOKEN_minus;}
"*" {print_token("multiply"); return TOKEN_multiply;}
"/" {print_token("division"); return TOKEN_division;}
"(" { print_token("openParanthesis"); return TOKEN_openParanthesis;}
")" {print_token("closeParanthesis"); return TOKEN_closeParanthesis;}
"list" {print_token("list"); return TOKEN_List;}
"range" {print_token("range"); return TOKEN_range;}
"import" {print_token("import"); return TOKEN_import;}
"print"  {print_token("print"); return TOKEN_print;}
%%

yywrap() {}

// int main() {
// 	yylex();

// 	return 0;

// }