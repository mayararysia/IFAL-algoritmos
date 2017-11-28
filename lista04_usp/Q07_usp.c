#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 07 - lista 04 - USP
	Author: Mayara Rysia
	Date: 27/11/17 15:08
	Description: Escrever um programa que calcule todos os números inteiros divisíveis por um certo valor indicado
		pelo usuário, e compreendidos em um intervalo também especificado pelo usuário. O usuário deve
		entrar com um primeiro valor correspondente ao divisor e após ele vai fornecer o valor inicial do
		intervalo, seguido do valor final deste intervalo. Usar o comando While. 
*/

main(){
	int divisor, a, b;
	
	printf("\nEntre com o valor do divisor: ");
	scanf("%d", &divisor);
	printf("\nInicio do intervalo: ");
	scanf("%d", &a);
	printf("\nFinal do intervalo: ");
	scanf("%d", &b);
	if(a<b){
		printf("\nNumeros divisiveis por %d no intervalo de %d a %d: ", divisor, a, b);
		
		while(a<=b){
			if(a%divisor == 0) printf(" %d ", a);
			a++;
		}
	}else printf("\nInvalido!\n");
	
}
