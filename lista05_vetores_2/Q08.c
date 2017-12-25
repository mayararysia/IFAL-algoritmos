#include<stdio.h>
#include<stdlib.h>
#define MAX 10
/*
	Name: Questão 08 - segunda lista de vetores
	Author: Mayara Rysia
	Description: 8) Escreva um algoritmo que leia dois vetores de 10 posições 
	e faça a multiplicação dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
*/

main() {
	int v1[MAX], v2[MAX], R[MAX];
	int i, j;
	
	printf("Insira %d elementos para o primeiro vetor: \n", MAX);
	for(i=0; i<MAX; i++) scanf("%d", &v1[i]);
	
	printf("Insira %d elementos para o segundo vetor: \n", MAX);
	for(i=0; i<MAX; i++) scanf("%d", &v2[i]);
	
	printf("\n\n");
	for(i=0; i<MAX; i++){
		R[i] = v1[i]*v2[i];
		printf(" %d ", R[i]);
	}	
}
