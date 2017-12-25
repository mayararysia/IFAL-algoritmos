#include<stdio.h>
#include<stdlib.h>
#define MAX 3
/*
	Name: Questão 14 - segunda lista de vetores
	Author: Mayara Rysia
	Description: 14) Faça um algoritmo para ler um vetor de 20 números.
		Após isto, deverá ser lido mais um número qualquer e verificar se esse número existe no vetor ou não.
		Se existir, o algoritmo deve gerar um novo vetor sem esse número. (Considere que não haverão números repetidos no vetor).
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
