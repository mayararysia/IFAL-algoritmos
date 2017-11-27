#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 04 - lista 03
	Author: Mayara Rysia 
	Date: 18/11/17 21:07
	Description: 4) Leia 2 valores: X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
*/

main(){
	int x, y, maior=0, soma=0, i;
	
	printf("\nInsira dois valores: ");
	scanf("%d%d", &x, &y);
	if(x>0 && y>0){
		if(x<y){
			i=x;
			maior = y;
		}
		else{
			i=y;
			maior = x;
		}
		
		while(i<=maior){
			if(i%2 == 1)
				soma = soma + i;
			i++;
		}		
		printf("\nSoma dos Numeros Impares Entre Eles: %d", soma);
	}else
		printf("\nInvalido! Insira numeros positivos!");
	
}
