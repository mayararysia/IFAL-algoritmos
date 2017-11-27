#include<stdio.h>
#include<stdlib.h>

/*
	Name: Questão 10 - lista 04
	Author: Mayara Rysia
	Date: 24/11/17 14:31
	Description: 10) Leia uma quantidade de valores para X indeterminadamente (parar quando o valor digitado para x for igual a zero).
	Para cada valor lido, mostrar se este valor é primo ou não.
*/

int main(){
	int x, cont, i;
	printf("\nInsira valores para x [digite 0 (zero) para parar]: \n");
	do{
		printf("->\n");
		scanf("%d", &x);
		
		if(x!=0){
			cont=0;
			for(i=x; i>=1; i--) if(x%i == 0) cont++;
			
			if(cont == 2) printf("\n\t%d - eh primo!", x);
			else printf("\n\t%d - nao eh primo!", x);
		}
		
	}while(x!=0);
}

