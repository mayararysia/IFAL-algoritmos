#include<stdio.h>
#include<stdlib.h>
#define MAX 10
/*
	Name: Questão 05 - segunda lista de vetores
	Author: Mayara Rysia
	Description: 5) Faça um algoritmo que leia um vetor V[10] e o escreve. Mostre a seguir, todos os valores distintos que aparecem no vetor.
*/

main() {
	int v[MAX], aux;
	int i, j, cont;
	
	printf("\nInsira %d numeros:\n\n", MAX);
	for(i=0; i<MAX; i++) scanf("%d", &v[i]);
	
	printf("\n\n\n");
	for(i=0; i<MAX; i++) printf(" %d ", v[i]);	
	printf("\n\n\n");
	for(i=0; i<MAX; i++){
		cont=0;
		for(j=0; j<MAX; j++){
			if(v[i] == v[j] && i!=j) cont++;
		}
		
		if(cont==0) printf(" %d ", v[i]);
	}
	
}
