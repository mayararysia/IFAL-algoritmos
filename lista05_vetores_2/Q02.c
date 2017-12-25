#include<stdio.h>
#include<stdlib.h>
#define MAX 10
/*
	Name: Questão 02 - segunda lista de vetores
	Author: Mayara Rysia
	Description: 2) Dada um array A, obter o último número par.
*/

main() {
	int A[MAX], qtd, ultimoPar=0;
	int i, cont=0;
	
	printf("Insira uma quantidade de elementos para o array: ");
	scanf("%d", &qtd);
	if(qtd<=MAX){
		printf("\nInsira %d elementos:\n\n", qtd);
		for(i=0; i<qtd; i++){
			scanf("%d", &A[i]);			
			if(A[i]%2 == 0){
				ultimoPar=A[i];
				cont++;
			}
		}
		if(ultimoPar!=0){
			if(cont==1) printf("\n\tHa apenas um unico par no array: %d", ultimoPar);
			else printf("\n\tO ultimo elemento par do array eh: %d", ultimoPar);
		}else printf("\nNao ha numero par no array!");
		
	}else printf("\nExcede ao maximo! Tente novamente!!");
	printf("\n\n\n");
	for(i=0; i<qtd; i++) printf(" %d ", A[i]);
}
