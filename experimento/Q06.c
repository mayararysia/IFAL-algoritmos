#include<stdio.h>
#include<stdlib.h>

/*
	Name: Questão 06 - lista experimento - etapa 1
	Author: Mayara Rysia
	Description: 6) Escreva um programa utilizando WHILE que leia um número inteiro positivo
	 N e em seguida imprima N linhas do chamado triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
*/
main(){
	int n, valor=0, i, j;
	
	printf("Insira um numero: ");
	scanf("%d", &n);
	if(n>0){
		i=1;
		while(i<=n){
			j=1;
			while(j<=i){
				valor++;
				printf("%d ", valor);
				j++;
			}
			i++;
			printf("\n");
		}
	}else printf("\nInvalido!");
}

