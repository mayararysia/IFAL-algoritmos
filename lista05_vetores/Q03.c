#include<stdio.h>
#include<stdlib.h>
#define MAX 10
/*
	Name: Quest�o 03 - vetores
	Author: Mayara Rysia
	Description: 3) Ler um vetor A de 10 n�meros. Ap�s, ler mais um n�mero e guardar em uma vari�vel X.
	Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X. Logo ap�s, imprimir o vetor M.
*/

main() {
	int A[MAX], M[MAX], X, i;
	
	printf("Insira %d elementos: \n", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &A[i]);
	}
	printf("\nInsira um numero:\n");
	scanf("%d", &X);
	
	printf("\nVetor M: \n");
	for(i=0; i<MAX; i++){
		M[i] = A[i]*X;
		printf(" %d ", M[i]);
	}
}
