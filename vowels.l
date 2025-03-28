%{
#include<stdio.h>
int v=0, c=0;
%}

%%  
[ \t]+ ;
[aeiouAEIOU] { v++; }  
[A-Za-z] { c++; }  
\n { return 0; }
%%

int main() {  
    printf("Enter the string:\n");  
    yylex();  
    printf("Number of Vowels: %d\n", v);  
    printf("Number of Consonants: %d\n", c);  
    return 0;  
}  

int yywrap() {  
    return 1;
}  

