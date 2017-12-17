#include<stdio.h>
#include<stdlib.h>
#define MAX 5
/*
	Name: Questão 10 - vetores
	Author: Mayara Rysia
	Description: 10) Faça um algoritmo que leia um vetor U[15].
	Crie, a seguir, um vetor Primo[15] que conterá todos os valores primos do vetor U. Mostre o vetor Primo[15] no final.*/

main() {
	int U[MAX], Primo[MAX], i, j, cont, p=0;
	
	printf("Insira %d elementos para primeiro vetor: \n", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &U[i]);
		j=1;
		cont=0;
		while(j<=U[i]){
			if(U[i]%j==0) cont++;
			j++;
		}
		if(cont == 2){
			Primo[p] = U[i];
			p++;
		}
	}
	printf("\nPrimo(s):\n\n");
	for(i=0; i<p; i++) printf(" %d ", Primo[i]);
}
