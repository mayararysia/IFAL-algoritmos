#include<stdio.h>
#include<stdlib.h>
#define MAX 30
/*
	Name: Questão 07 - vetores
	Author: Mayara Rysia
	Description: 7) Faça um algoritmo para ler um vetor de 30 números.
	Após isto, ler mais um número qualquer, calcular e escrever quantas vezes esse número aparece no vetor.
*/

main() {
	int v[MAX], x, i, cont=0;
	
	printf("Insira %d elementos para primeiro vetor: \n", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &v[i]);
	}
		
	printf("Insira um numero: \n");
	scanf("%d", &x);
	
	for(i=0; i<MAX; i++) if(v[i] == x) cont++;
	
	printf("\nQuantidade de vezes em que %d aparece no vetor: %d", x, cont);
}
