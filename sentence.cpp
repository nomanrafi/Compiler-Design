%{
#include<stdio.h>
int flag=0;
%}

%%  
and |
or |
but |
because |
if |
then |
nevertheless {flag=1;}
. ;
\n {return 0;}
%%

int main() {  
    printf("Enter the sentence: ");  
    yylex();  
    if(flag==0)
	{
    	printf("sentence is simple");  
    }
    else{
		printf("sentence is compound");  
    }
	return 0;  
}  

int yywrap() {  
    return 1;
}  


