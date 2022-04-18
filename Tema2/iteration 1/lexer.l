%{
	//definitions
	#include "parser.tab.h"
%}


%%
	//rules
[0-9]+ { yylval.num = atoi(yytext); return NUMBER;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MULTIPLY;}
\n {return EOL;}
. {}

%%

yywrap() {}

// int main() {
// 	yylex();

// 	return 0;

// }