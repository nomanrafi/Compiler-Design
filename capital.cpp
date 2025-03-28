%{
#include<stdio.h>
%}

%%  
[A-Z]+ {printf("%s capital\n", yytext);}  
. ;  
%%

int main() {  
    printf("\nEnter the string: ");  
    yylex();  
}  

int yywrap() {  
    return 1;  
}  

