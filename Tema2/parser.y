%{
//definitions
int yylex();
%}


%union{
	int num;
	char sym;
}

%token EOL
%token<num> NUMBER
%token PLUS
%type<num> exp

%%
//rules
input: exp EOL { printf("%d\n", $1); }
 | EOL 


exp: NUMBER {$$ = $1; }
| exp PLUS exp {$$ = $1 + $3;}
;

%%


int main(){
	yyparse();

	return 0;

}

yyerror(char * err)
{
	printf("ERROR %s", err);
	return 0;
}