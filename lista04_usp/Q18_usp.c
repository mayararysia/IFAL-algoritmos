#include<stdio.h>
#include<stdlib.h>
/*
	Name: Quest�o 18 - lista04 - USP
	Author: Mayara Rysia
	Date: 10/12/17 12:31
	Description: Fa�a um programa que leia dois n�meros, o primeiro � o valor inicial de um contador, e o segundo � o
		valor final do contador (verifique se o valor inicial fornecido � inferior ao valor final). Usando o
		comando For, escreva na tela uma contagem que comece no primeiro n�mero lido, escreva os n�meros
		seguintes colocando apenas um n�mero em cada nova linha da tela, at� chegar ao valor final indicado
*/

main(){
	int a,b, i;
	printf("Insira o valor inicial e o final de um contador: \n");
	scanf("%d%d", &a, &b);
	if(a<b){
		for(i=a; i<=b; i++){
			printf("%d\n", i);
		}
	}else printf("\nInvalido! O valor inicial deve ser menor que o final!");
}
