#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 01 - lista 04
	Author: Mayara Rysia
	Date: 16/11/17 00:00
	Description: estruturas de repetição*/

int main(){
	int i, A, qtd_par=0, qtd_impar=0, qtd_positivo=0, qtd_negativo=0;
	
	printf("\nInsira 5 Valores: \n");
	for(i=0; i<5; i++){
		scanf("%d", &A);
		if(A%2==0)
			qtd_par++;
		else
			qtd_impar++;
		if(A>0)
			qtd_positivo++;
		else
			qtd_negativo++;
	}
	printf("\n\nQuantidade de numeros pares: %d\nQuantidade de numeros impares: %d", qtd_par, qtd_impar);
	printf("\n\nQuantidade de numeros positivos: %d\nQuantidade de numeros negativos: %d", qtd_positivo, qtd_negativo);
	return 0;
}
