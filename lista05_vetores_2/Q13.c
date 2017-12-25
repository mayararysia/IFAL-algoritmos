#include<stdio.h>
#include<stdlib.h>
#define MAX 10
/*
	Name: Questão 13 - segunda lista de vetores
	Author: Mayara Rysia
	Description: 13) Faça um algoritmo que leia 2 vetores A[10] e B[10]. A seguir, Crie um vetor C que seja a intersecção de A com B e mostre este vetor C.
	Obs.: Intersecção é quando um valor estiver nos dois vetores. Considere que não há elementos duplicados em cada um dos vetores.
*/

main() {
	int A[MAX], B[MAX], C[MAX];
	int i, j=0;
	
	printf("Insira %d elementos para o vetor A: \n", MAX);
	for(i=0; i<MAX; i++) scanf("%d", &A[i]);
	
	printf("Insira %d elementos para o vetor B: \n", MAX);
	for(i=0; i<MAX; i++) scanf("%d", &B[i]);
	
	for(i=0; i<MAX; i++){
		if(A[i] == B[i]){
			C[j] = A[i];
			j++;
		}
	}
	
	printf("\n\n\n");
	for(i=0; i<j; i++) printf(" %d ", C[i]);	
	
	
	
}
