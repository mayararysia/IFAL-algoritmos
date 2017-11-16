#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questao 02 - lista 3
	Author: Mayara
	Date: 15/10/17 17:30
*/

main(){
	int dia;
	
	printf("Insira um numero referente ao dia: ");
	scanf("%d", &dia);
	
	switch(dia){
		case 1:
			printf("\n\tDomingo - Inicio de Semana!");
			break;
		case 2:
			printf("\n\tSegunda - Dia Util!");
			break;
		case 3:
			printf("\n\tTerca - Dia Util!");
			break;
		case 4:
			printf("\n\tQuarta - Dia Util!");
			break;
		case 5:
			printf("\n\tQuinta - Dia Util!");
			break;
		case 6:
			printf("\n\tSexta - Dia Util!");
			break;
		case 7:
			printf("\n\tSabado - Fim de Semana!");
			break;
		default:
			printf("\nDia Invalido!");
	}
	
}
