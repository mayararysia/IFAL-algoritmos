#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 07 - lista 03
	Author: Mayara Rysia
	Date: 14/11/17 13:54
*/

int main(){
	
	int opcao;
	
	printf("\n1 - Domingo");
	printf("\n2 - Segunda-feira");
	printf("\n3 - Terça-feira");
	printf("\n4 - Quarta-feira");
	printf("\n5 - Quinta-feira");
	printf("\n6 - Sexta-feira");
	printf("\n7 - Sabado");
	
	printf("\nEscolha: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("\nDOMINGO - Inicio de Semana.");
			break;
		case 2:
			printf("\nSEGUNDA-FEIRA - Dia de Semana.");
			break;
		case 3:
			printf("\nTERCA-FEIRA - Dia de Semana.");
			break;
		case 4:
			printf("\nQUARTA-FEIRA - Dia de Semana.");
			break;
		case 5:
			printf("\nQUINTA-FEIRA - Dia de Semana.");
			break;
		case 6:
			printf("\nSEXTA-FEIRA - Dia de Semana.");	
			break;
		case 7:
			printf("\nSABADO - Fim de Semana.");	
			break;
		default:
			printf("\nDia Invalido!");		
	}
	return 0;
}
