#include<stdio.h>
#include<stdlib.h>
/*
	Name: Quest�o 8 - lista 04
	Author: Mayara Rysia
	Date: 22/11/17 15:23
	Description: 8) Escreva um algoritmo que leia um n�mero e diga se este n�mero � perfeito ou n�o.
	Um n�mero perfeito � aquele que � igual � soma de seus divisores (excluindo ele mesmo). Ex: 1+2+3=6 , 1+2+4+7=28 , etc...
*/

int main(){
	int numero, i;
	int soma=0;
	
	printf("Insira um numero: \n");
	scanf("%d", &numero);
	
	for(i=(numero-1); i>=1; i--){
		if(numero%i == 0)
			soma+=i;
	}
	if(soma == numero)
		printf("\n\nO Numero %d eh perfeito!", numero);
	else
		printf("\n\nO Numero %d nao eh perfeito!", numero);
	
	return 0;
}
