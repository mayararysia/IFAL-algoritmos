#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 02 - lista 04 - USP
	Author: Mayara Rysia
	Date: 27/11/17 13:35
	Description: Faça um programa que leia dois números inteiros, o primeiro é o valor inicial de um contador, e o
				segundo é o valor final do contador (testar se o valor inicial fornecido é inferior ao valor final). Usando
				o comando While, escreva na tela uma contagem que comece no primeiro número lido, escreva os
				números seguintes colocando sempre apenas um número em cada nova linha da tela, e terminando a
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
		printf("\nInválido! O primeiro numero deve ser maior que o segundo!");
	}
}
