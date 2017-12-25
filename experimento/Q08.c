#include<stdio.h>
#include<stdlib.h>
#define MAX 100
/*
	Name: Questão 08 - lista experimento - etapa 1
	Author: Mayara Rysia
	Description: 8) Usando o comando DO-WHILE, faça um programa que receba um valor inteiro n e imprima 
	n linhas com asteriscos, 
	conforme o exemplo a seguir, em que usamos n = 5:
*
**
***
****
*****
*/
main(){
	int n, i, j;
	char asterisco[MAX];
	
	printf("Insira um valor: ");
	scanf("%d", &n);
	i=0;
	do{
		asterisco[i]='*';
		i++;
	}while(i<n);
	i=0;
	do{
		j=0;
		do{
			printf("%c", asterisco[j]);
			j++;
		}while(j<=i);
		printf("\n");
		i++;
	}while(i<n);
}
