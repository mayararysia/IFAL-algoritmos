#include<stdio.h>
#include<stdlib.h>
#define MAX 10
/*
	Name: Questão 03 - segunda lista de vetores
	Author: Mayara Rysia
	Description: 3) Dado um array A, com 10 números inteiros, criar um vetor B que contenha os elementos de A maiores que 5.
*/

main() {
	int A[MAX], B[MAX];
	int i, j=0;
	
	printf("\nInsira %d numeros inteiros:\n\n", MAX);
	for(i=0; i<MAX; i++){
			scanf("%d", &A[i]);			
			if(A[i]>5){
				B[j] = A[i];
				j++;
			}
	}
	printf("Vetor A: \n\n\n");
	for(i=0; i<MAX; i++) printf(" %d ", A[i]);
	printf("\n\nVetor B: \n\n\n");
	for(i=0; i<j; i++) printf(" %d ", B[i]);
}
