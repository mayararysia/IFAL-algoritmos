#include<stdio.h>
#include<stdlib.h>
#define MAX 20
/*
	Name: Quest�o 04 - vetores
	Author: Mayara Rysia
	Description: 4) Fa�a um algoritmo para ler 20 n�meros e armazenar em um vetor.
	Ap�s a leitura total dos 20 n�meros, o algoritmo deve escrever esses 20 n�meros lidos na ordem inversa.
*/

main() {
	int v[MAX], i;
	
	printf("Insira %d elementos: \n", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &v[i]);
	}	
	printf("\nOrdem inversa: \n");
	for(i=MAX-1; i>=0; i--){
		printf(" %d ", v[i]);
	}
}
