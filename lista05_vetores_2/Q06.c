#include<stdio.h>
#include<stdlib.h>
#define MAX 10
/*
	Name: Questão 06 - segunda lista de vetores
	Author: Mayara Rysia
	Description: 6) Faça um algoritmo que leia um array de inteiros positivos e substitui seus elementos de valor ímpar por -1 e os pares por +1.
*/

main() {
	int v[MAX];
	int i, cond=0;
	
	printf("\nInsira %d numeros positivos:\n\n", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &v[i]);
		if(v[i]>0){
		
			if(v[i]%2 == 1) v[i] = -1;
			else v[i] = 1;
		}else{
			cond=1;
			break;
		}
	}
	if(cond==0){
		printf("\n\n\n");
		for(i=0; i<MAX; i++) printf(" %d ", v[i]);
	}
}
