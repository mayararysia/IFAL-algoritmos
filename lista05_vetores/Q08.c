#include<stdio.h>
#include<stdlib.h>
#define MAX 10
/*
	Name: Questão 08 - vetores
	Author: Mayara Rysia
	Description: 8) Faça um algoritmo que leia um vetor X[10]. Substitua, a seguir, todos os valores nulos do vetor X por 1 e escreva novamente o vetor X.
*/

main() {
	int x[MAX], i;
	
	printf("Insira %d elementos para primeiro vetor: \n", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &x[i]);
	}
	printf("\n\n");
	for(i=0; i<MAX; i++){
		if(x[i] == 0) x[i] = 1;
		printf(" %d ", x[i]);
	}
}
