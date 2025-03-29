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
	printf("Enter the sentence: ");
	yylex();
	printf("No of Lines: %d", l);
	printf("No of Spaces: %d", s);
	printf("No of Words: %d", w);
}


