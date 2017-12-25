#include<stdio.h>
#include<stdlib.h>
#define MAX 3
/*
	Name: Quest�o 14 - segunda lista de vetores
	Author: Mayara Rysia
	Description: 14) Fa�a um algoritmo para ler um vetor de 20 n�meros.
		Ap�s isto, dever� ser lido mais um n�mero qualquer e verificar se esse n�mero existe no vetor ou n�o.
		Se existir, o algoritmo deve gerar um novo vetor sem esse n�mero. (Considere que n�o haver�o n�meros repetidos no vetor).
*/

main() {
	int Q[MAX], Q2[MAX], i, j, n, cont=0;
	
	printf("Insira %d elementos: \n", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &Q[i]);
	}
	
	printf("\nInsira um numero: \n");
	scanf("%d", &n);
	
	for(i=0; i<MAX; i++){
		if(Q[i] == n){
			cont++;
			break;
		}
	}
	
	if(cont > 0) {
		j=0;
		for(i=0; i<MAX; i++){
			if(Q[i] != n) {
				Q2[j] = Q[i];
				j++;
			}
		}
	}
	
	printf("Primeiro Vetor:\n");
	for(i=0; i<MAX; i++) printf(" %d ", Q[i]);
	printf("\nSegundo Vetor:\n");
	for(i=0; i<j; i++) printf(" %d ", Q2[i]);
}
