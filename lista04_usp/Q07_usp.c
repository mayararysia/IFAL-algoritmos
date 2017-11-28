#include<stdio.h>
#include<stdlib.h>
/*
	Name: Quest�o 07 - lista 04 - USP
	Author: Mayara Rysia
	Date: 27/11/17 15:08
	Description: Escrever um programa que calcule todos os n�meros inteiros divis�veis por um certo valor indicado
		pelo usu�rio, e compreendidos em um intervalo tamb�m especificado pelo usu�rio. O usu�rio deve
		entrar com um primeiro valor correspondente ao divisor e ap�s ele vai fornecer o valor inicial do
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
