#include<stdio.h>
#include<stdlib.h>

/*
	Name: Quest�o 05 - lista experimento - etapa 1
	Author: Mayara Rysia
	Description: 5) Usando o comando WHILE, fa�a um programa que leia um n�mero inteiro e calcule a soma de todos
	 os divisores desse n�mero, com exce��o dele pr�prio.
Exemplo: a soma dos divisores do n�mero 66 � 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.*/

main(){
	int n, i, soma=0;
	
	printf("Insira um numero: ");
	scanf("%d", &n);
	
	if(n>0){
		i=1;
		while(i<n){
			if(n%i==0) soma+=i;
			i++;
		}
		printf("A soma de todos os divisores de %d eh: %d", n, soma);
	}else printf("\nInvalido!");
}
