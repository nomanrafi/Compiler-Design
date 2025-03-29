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
	print
}


