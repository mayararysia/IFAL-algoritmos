#include<stdio.h>
#include<stdlib.h>
#define MAX 15
/*
	Name: Quest�o 06 - vetores
	Author: Mayara Rysia
	Description: 6) Fa�a um algoritmo para ler dois vetores V1 e V2 de 15 n�meros cada.
	Calcular e escrever a quantidade de vezes que V1 e V2 possuem os mesmos n�meros e nas mesmas posi��es.
*/

main() {
	int v1[MAX], v2[MAX], i, cont=0;
	
	printf("Insira %d elementos para primeiro vetor: \n", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &v1[i]);
	}	
	printf("Insira %d elementos para o segundo vetor: \n", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &v2[i]);
	}
	
	for(i=0; i<MAX; i++){
		if(v1[i] == v2[i]) cont++;
	}
	printf("\nQuantidade de vezes: %d", cont);
}
