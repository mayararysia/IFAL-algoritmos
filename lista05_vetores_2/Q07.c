#include<stdio.h>
#include<stdlib.h>
#define MAX 10
/*
	Name: Quest�o 07 - segunda lista de vetores
	Author: Mayara Rysia
	Description: 7) Fa�a um algoritmo que leia um vetor K[10].
				Troque a seguir, todos os elementos de ordem
				�mpar do vetor com os elementos de ordem par imediatamente posteriores.
*/

main() {
	int K[MAX], i, aux;
	
	printf("Insira %d elementos para primeiro vetor: \n", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &K[i]);
	}
	
	printf("\n\n");
	for(i=0; i<MAX; i++) printf(" %d ", K[i]);
	
	printf("\nNovo Vetor:\n\n");
	for(i=0; i<MAX; i=i+2){
		/*condi��o  de i diferente de  MAX-1 para um caso de teste em que o vetor for de ordem �mpar.*/
		if(i!=MAX-1){
			aux=K[i];
			K[i]=K[i+1];
			K[i+1]=aux;
		}
	}
	
	for(i=0; i<MAX; i++) printf(" %d ", K[i]);
	
}
