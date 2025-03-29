%{
#include<stdio.h>
int l=0, s=0, w=0, c=0;
%}

%%
[\n] {l++; c+=yyleng;}
%%

int main(){
	
}


