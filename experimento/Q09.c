#include<stdio.h>
#include<stdlib.h>
#define MAX 100
/*
	Name: Quest�o 09 - lista experimento - etapa 1
	Author: Mayara Rysia
	Description: 9) Usando o comando FOR, fa�a um programa que receba um valor inteiro n
	e imprima um tri�ngulo lateral formado por asteriscos conforme o exemplo a seguir, em que usamos n = 4:
*
**
***
****
***
**
*
*/
main(){
	int n, i, j;
	char triang[MAX];
	
	printf("Insira um valor: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		triang[i]='*';
	}
	for(i=0; i<=n; i++){
		for(j=0; j<i; j++){
		   printf("%c", triang[j]);
		}
		printf("\n");
	}
	for(i=n-1; i>=0; i--){
		for(j=0; j<i; j++){
		   printf("%c", triang[j]);
		}
		printf("\n");
	}	
}
