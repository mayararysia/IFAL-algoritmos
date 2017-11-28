#include<stdio.h>
#include<stdlib.h>

/*
	Name: Quest�o 06 - lista 04 - USP 
	Author: Mayara Rysia
	Date: 27/11/17 14:40
	Description: Fazer um programa que calcule e exiba na tela o fatorial de um n�mero fornecido pelo usu�rio, usando
	o comando While. Repetir a execu��o do programa tantas vezes quantas o usu�rio quiser. Lembre-se
	que o resultado do c�lculo de um fatorial pode ser um n�mero �grande� (Exemplo: Fatorial de 8 =
	40320). 
*/

main(){
	int numero, fatorial, validacao=0, n;
	char opcao[3];
	
	while(validacao==0){
		fatorial = 1;
		printf("\nEntre com um numero: ");
		scanf("%d", &numero);
		n=numero;
		while(n>0){
			fatorial*=n;
			n--;
		}
		printf("\nO fatorial de %d eh %d\n", numero, fatorial);
		printf("Outro numero (sim/nao): ");
		scanf("%s", &opcao);
		
		validacao = strcmp(opcao, "sim");
	}
	
}
