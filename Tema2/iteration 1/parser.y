%{
//definitions
int yylex();
void yyerror(const char *s);
#include <stdio.h>
%}


%union{
	int num;
	char sym;
}

%token EOL
%token<num> NUMBER
%token PLUS MINUS MULTIPLY
%type<num> exp

%%
//rules
input: | line input;

line: exp EOL { printf("%d\n", $1); }
 | EOL 


exp: NUMBER {$$ = $1; } // the cause pentru reduce warnings
| exp PLUS exp {$$ = $1 + $3;}
| exp MINUS exp {$$ = $1 - $3;}
| exp MULTIPLY exp {$$ = $1 * $3;}
;



%%


int main(){
	yyparse();

	return 0;

}

yyerror(char* s){
	printf("ERROR: %s", s);
	return 0;
}