%{
#include<stdio.h>
int l=0, s=0, w=0, c=0;
%}

%%
[\n] {l++; c+=yyleng;}
[ \t] {s++; c+=yyleng;}
[^\t\n ]+ {w++; c+=yyleng;}
%%

int main(){
	printf("Enter the sentence: \n");
	yylex();
	printf("No of Lines: %d\n", l);
	printf("No of Spaces: %d\n", s);
	printf("No of Words: %d\n", w);
	printf("No of Characters: %d\n", c);
}

int yywrap()
{
	return 1;
}

