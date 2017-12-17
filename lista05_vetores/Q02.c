#include<stdio.h>
#include<stdlib.h>
#define MAX 20
/*
	Name: Questão 02 - vetores
	Author: Mayara Rysia
	Description: 2) O mesmo exercício anterior, mas agora deve escrever o menor elemento do vetor e a respectiva posição dele nesse vetor.
*/

main() {
	int Q[MAX], i, menor, p;
	
	printf("Insira %d elementos: \n", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &Q[i]);
		while(Q[i]<0){
			if(Q[i]<0) printf("\nInsira um numero positivo!\n");
			scanf("%d", &Q[i]);
		}
	}
	menor = Q[0];
	for(i=0; i<MAX; i++){
		if(Q[i] < menor){
			menor = Q[i];
			p=i;
		}
	
	}	
	printf("\nO menor elemento eh %d e ocupa a posicao %d do vetor!", menor, p);
}
