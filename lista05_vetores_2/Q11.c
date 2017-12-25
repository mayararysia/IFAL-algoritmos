#include<stdio.h>
#include<stdlib.h>
#define MAX 3
/*
	Name: Questão 11 - segunda lista de vetores
	Author: Mayara Rysia
	Description: 11) Leia um conjunto de valores inteiros e em seguida exiba-os na ordem inversa do que foram digitados.
*/

main() {
	int v[MAX];
	int i;
	
	printf("\nInsira %d numeros:\n\n", MAX);
	for(i=0; i<MAX; i++) scanf("%d", &v[i]);
	
	printf("\n\n\n");
	for(i=(MAX-1); i>=0; i--) printf(" %d ", v[i]);	
	
}
