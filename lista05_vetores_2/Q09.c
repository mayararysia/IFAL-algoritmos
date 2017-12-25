#include<stdio.h>
#include<stdlib.h>
#define MAX 10
/*
	Name: Questão 09 - segunda lista de vetores
	Author: Mayara Rysia
	Description: 9) Faça um algoritmo que leia um vetor V[10] e o imprima.
		Crie, a seguir, um vetor COMP que conterá somente os valores não repetidos de V. Imprima então o vetor COMP.
*/

main() {
	int v[MAX], COMP[MAX];
	int i, j, cont, k=0;
	
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
		
		if(cont==0){
			COMP[k] = v[i];
			k++;
		}
	}
	printf("\n\n\n");
	for(i=0; i<k; i++) printf(" %d ", COMP[i]);	
}
