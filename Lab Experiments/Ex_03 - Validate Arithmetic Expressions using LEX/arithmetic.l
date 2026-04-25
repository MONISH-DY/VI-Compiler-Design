%{
#include <stdio.h>

int id_count = 0;
int op_count = 0;
%}

%%
[0-9]+      { 
                printf("Identifier (Integer): %s\n", yytext);
                id_count++; 
            }

[+*]        { 
                printf("Operator: %s\n", yytext);
                op_count++; 
            }

\n          {
                printf("\nTotal Identifiers: %d\n", id_count);
                printf("Total Operators: %d\n", op_count);
                yyterminate();
            }

[ \t]       ;   /* ignore whitespace */

.           { 
                printf("Invalid Expression\n");
                return 0; 
            }
%%

int main() {
    printf("Enter arithmetic expression:\n");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}