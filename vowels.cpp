%{
#include<stdio.h>
int v=0, c=0;
%}

%%  
[ \t]+ ;  // Ignore spaces and tabs
[aeiouAEIOU] { v++; }  
[A-Za-z] { c++; }  
\n { return 0; }  // Stop processing when Enter is pressed
%%

int main() {  
    printf("Enter the string:\n");  
    yylex();  // Read and process input  
    printf("Number of Vowels: %d\n", v);  
    printf("Number of Consonants: %d\n", c);  
    return 0;  
}  

int yywrap() {  
    return 1;  // Signals end of input
}  

