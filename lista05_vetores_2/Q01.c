#include<stdio.h>
#include<stdlib.h>
/*
	Name: Quest�o 01 - segunda lista de vetores
	Author: Mayara Rysia
	Description: 1) Fa�a um algoritmo que gere os 10 primeiros n�meros primos acima de 100 e armazena-os em um vetor X[10]. Mostre ent�o o vetor X.
*/

main() {
	int X[10], n=101;
	int i, j=0, cont;
	
	while(n>100 && j!=10){
		cont=0;
		for(i=1; i<=n; i++){
			if(n%i == 0) cont++;
		}
		if(cont == 2){
			X[j] = n;
			j++;	
		}
		n++;		
	}
	
	printf("\n\n");
	for(i=0; i<j; i++) printf(" %d ", X[i]);
}
