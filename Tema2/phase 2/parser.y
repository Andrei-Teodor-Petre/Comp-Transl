%{
	#include <stdio.h>
	#include <stdarg.h>
	#include "symTab_new.h"

	int yylex();
	void yyerror(const char *msg);
    extern int yylineno;

	void finish()
	{
		printf("\n------------------->Valid python syntax<--------------------\n\n\n\n");
		print_symbol_table();
		exit(0);
	}

%}

%union {char *data; int indent_depth;};

%token TOKEN_identifier TOKEN_False TOKEN_True TOKEN_number Indent Nodent Dedent TOKEN_string TOKEN_print TOKEN_colon TOKEN_newLine TOKEN_lesserThan TOKEN_greaterThanEqualTo TOKEN_lesserThanEqualTo TOKEN_or TOKEN_and TOKEN_not TOKEN_assignOP TOKEN_notEqualOP TOKEN_equalOP TOKEN_greaterThan TOKEN_in TOKEN_if TOKEN_elif TOKEN_while TOKEN_else TOKEN_import TOKEN_break TOKEN_pass TOKEN_minus TOKEN_plus TOKEN_division TOKEN_multiply TOKEN_openParanthesis TOKEN_closeParanthesis TOKEN_EOF TOKEN_return TOKEN_openBracket TOKEN_closeBracket TOKEN_def TOKEN_comma TOKEN_List TOKEN_range TOKEN_None TOKEN_continue

%left TOKEN_plus TOKEN_minus
%left TOKEN_multiply TOKEN_division
%right TOKEN_assignOP
%nonassoc TOKEN_if
%nonassoc TOKEN_elif
%nonassoc TOKEN_else
%start Start

%%

Start : StartParse TOKEN_EOF {finish();};

constant : TOKEN_number {appned_token("Constant", $<data>1, @1.first_line, strlen($<data>1));}
         | TOKEN_string {appned_token("Constant", $<data>1, @1.first_line, strlen($<data>1));}
		 | TOKEN_None {appned_token("Constant", "None", @1.first_line, strlen($<data>1));};

term : TOKEN_identifier {check_scope($<data>1, @1.first_line); appned_token("Identifier", $<data>1, @1.first_line, strlen($<data>1));}
     | constant
     | list_index;


list_index : TOKEN_identifier TOKEN_openBracket constant TOKEN_closeBracket {check_scope($<data>1, @1.first_line); is_iter($<data>1, @1.first_line);};

StartParse : TOKEN_newLine StartParse | finalStatements TOKEN_newLine {reset_depth();} StartParse | ;

basic_stmt : pass_stmt
           | break_stmt
		   | continue_stmt
           | import_stmt
           | assign_stmt
           | arith_exp
           | bool_exp
           | print_stmt
           | return_stmt;

arith_exp : term
          | arith_exp  TOKEN_plus  arith_exp
          | arith_exp  TOKEN_minus  arith_exp
          | arith_exp  TOKEN_multiply  arith_exp
          | arith_exp  TOKEN_division  arith_exp
          | TOKEN_minus arith_exp
          | TOKEN_openParanthesis arith_exp TOKEN_closeParanthesis;


bool_exp : bool_term TOKEN_or bool_term
         | arith_exp TOKEN_lesserThan arith_exp
         | bool_term TOKEN_and bool_term
         | arith_exp TOKEN_greaterThan arith_exp
         | arith_exp TOKEN_lesserThanEqualTo arith_exp
         | arith_exp TOKEN_greaterThanEqualTo arith_exp
         | arith_exp TOKEN_in TOKEN_identifier
         | bool_term ;

bool_term : bool_factor
          | arith_exp TOKEN_equalOP arith_exp
          | TOKEN_True {appned_token("Constant", "True", @1.first_line, strlen($<data>1));}
          | TOKEN_False {appned_token("Constant", "False", @1.first_line, strlen($<data>1));};

bool_factor : TOKEN_not bool_factor
            | TOKEN_openParanthesis bool_exp TOKEN_closeParanthesis;

import_stmt : TOKEN_import TOKEN_identifier {appned_token("Package name", $<data>2, @2.first_line, strlen($<data>2));};
pass_stmt : TOKEN_pass
continue_stmt : TOKEN_continue
break_stmt : TOKEN_break
return_stmt : TOKEN_return

assign_stmt : TOKEN_identifier TOKEN_assignOP arith_exp {appned_token("Identifier", $<data>1, @1.first_line, strlen($<data>1));}
            | TOKEN_identifier TOKEN_assignOP bool_exp {appned_token("Identifier", $<data>1, @1.first_line, strlen($<data>1));}
            | TOKEN_identifier  TOKEN_assignOP func_call {appned_token("Identifier", $<data>1, @1.first_line, strlen($<data>1));}
            | TOKEN_identifier TOKEN_assignOP TOKEN_openBracket list_elements TOKEN_closeBracket {appned_token("List identifier", $<data>1, @1.first_line, strlen($<data>1));}
			| TOKEN_identifier TOKEN_assignOP TOKEN_range {appned_token("List identifier", $<data>1, @1.first_line, strlen($<data>1));} TOKEN_openParanthesis range_args TOKEN_closeParanthesis ;

print_stmt : TOKEN_print TOKEN_openParanthesis term TOKEN_closeParanthesis

finalStatements : basic_stmt
                | cmpd_stmt
                | func_def
                | func_call
                | error TOKEN_newLine {yyerrok; yyclearin;};

cmpd_stmt : if_stmt
          | while_stmt;


if_stmt : TOKEN_if bool_exp TOKEN_colon start_suite 		%prec TOKEN_if
        | TOKEN_if bool_exp TOKEN_colon start_suite elif_stmts;

elif_stmts : else_stmt
           | TOKEN_elif bool_exp TOKEN_colon start_suite elif_stmts;

else_stmt : TOKEN_else TOKEN_colon start_suite;

func_def : TOKEN_def TOKEN_identifier {appned_token("Func_Name", $<data>2, @2.first_line, strlen($<data>2));} TOKEN_openParanthesis{flag = 1; func_no++;} param TOKEN_closeParanthesis TOKEN_colon start_suite

func_call : TOKEN_identifier {appned_token("Func_Name", $<data>1, @1.first_line, strlen($<data>1));} TOKEN_openParanthesis list_elements TOKEN_closeParanthesis

range_args : TOKEN_number TOKEN_comma TOKEN_number TOKEN_comma TOKEN_number {appned_token("Constant", $<data>1, @1.first_line, strlen($<data>1)); appned_token("Constant", $<data>3, @3.first_line, strlen($<data>3)); appned_token("Constant", $<data>5, @5.first_line, strlen($<data>5));}
		   | TOKEN_number TOKEN_comma TOKEN_number {appned_token("Constant", $<data>1, @1.first_line, strlen($<data>1)); appned_token("Constant", $<data>3, @3.first_line, strlen($<data>3));}
		   | TOKEN_number {appned_token("Constant", $<data>1, @1.first_line, strlen($<data>1));};

while_stmt : TOKEN_while bool_exp TOKEN_colon start_suite;

start_suite : basic_stmt
            | TOKEN_newLine Indent finalStatements suite;

suite : TOKEN_newLine Nodent finalStatements suite
      | TOKEN_newLine end_suite;
      | {reset_depth();} elif_stmts;

end_suite : Dedent finalStatements
          | Dedent
          | {flag = 0; cur_scope = 0;reset_depth();} finalStatements
          | {reset_depth();};

param : TOKEN_identifier {appned_token("Identifier", $<data>1, @1.first_line, strlen($<data>1));} params | ;

params : TOKEN_comma TOKEN_identifier {appned_token("Identifier", $<data>2, @1.first_line, strlen($<data>2));} params | ;

list_element : TOKEN_comma term list_element | ;

list_elements : TOKEN_identifier {appned_token("Identifier", $<data>1, @1.first_line, strlen($<data>1));} list_element | TOKEN_number {appned_token("Constant", $<data>1, @1.first_line, strlen($<data>1));} list_element | TOKEN_string {appned_token("Constant", $<data>1, @1.first_line, strlen($<data>1));} list_element |


%%

void yyerror(const char *msg)
{
	printf("\nSyntax Error at Line %d, Column : %d\n",  yylineno, yylloc.last_column);
	exit(0);
}

int main()
{
    init_hash_table();
	yyparse();
	return 0;
}
