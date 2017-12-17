#include<stdio.h>
#include<stdlib.h>
#define MAX 30
/*
	Name: Questão 09 - vetores
	Author: Mayara Rysia
	Description: 9) Faça um algoritmo que leia um vetor K[30].
	Troque a seguir, todos os elementos de ordem ímpar do vetor com os elementos de ordem par imediatamente posteriores. Mostre o vetor modificado.
*/

main() {
	int K[MAX], i;
	
	printf("Insira %d elementos para primeiro vetor: \n", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &K[i]);
	}
	printf("\n\n");
	for(i=0; i<MAX; i++) printf(" %d ", K[i]);
	printf("\nNovo Vetor:\n\n");
	for(i=0; i<MAX; i++){
		if(K[i]%2==1) K[i]=K[i]+1;
		printf(" %d ", K[i]);
	}
}
