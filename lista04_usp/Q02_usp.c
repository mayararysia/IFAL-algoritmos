#include<stdio.h>
#include<stdlib.h>
/*
	Name: Quest�o 02 - lista 04 - USP
	Author: Mayara Rysia
	Date: 27/11/17 13:35
	Description: Fa�a um programa que leia dois n�meros inteiros, o primeiro � o valor inicial de um contador, e o
				segundo � o valor final do contador (testar se o valor inicial fornecido � inferior ao valor final). Usando
				o comando While, escreva na tela uma contagem que comece no primeiro n�mero lido, escreva os
				n�meros seguintes colocando sempre apenas um n�mero em cada nova linha da tela, e terminando a
				contagem quando chegar ao valor final indicado.
*/


main(){
	int a, b;
	
	printf("Insira dois numeros: \n");
	scanf("%d%d", &a, &b);
	if(a>b){
		
		while(a>=b){
			printf("\t%d\n", a);
			a--;
		}
		
	}else{
		printf("\nInv�lido! O primeiro numero deve ser maior que o segundo!");
	}
}
