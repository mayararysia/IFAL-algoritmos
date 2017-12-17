#include<stdio.h>
#include<stdlib.h>
#define MAX 20
/*
	Name: Questão 01 - vetores
	Author: Mayara Rysia
	Description: 1) Ler um vetor Q de 20 posições (aceitar somente números positivos).
	Escrever a seguir o valor do maior elemento de Q e a respectiva posição que ele ocupa no vetor.
*/

main() {
	int Q[MAX], i, maior=0, p;
	
	printf("Insira %d elementos: \n", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &Q[i]);
		while(Q[i]<0){
			if(Q[i]<0) printf("\nInsira um numero positivo!\n");
			scanf("%d", &Q[i]);
		}
		
		if(Q[i] > maior){
			maior = Q[i];
			p=i;
		}
	}
	printf("\nO maior elemento eh %d e ocupa a posicao %d do vetor!", maior, p);
}
