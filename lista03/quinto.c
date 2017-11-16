#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 05 - lista 03
	Author: Mayara Rysia
	Date: 16/10/17 15:44 
*/

main(){
	
	int dias=31, ano, mes;
	
	printf("Insira o Numero referente ao Mes (1-12): ");
	scanf("%d", &mes);
	printf("\nInsira o Ano: ");
	scanf("%d", &ano);
	
	switch(ano > 0){
		
		case 1:
			switch(mes){
				case 4: case 6: case 9: case 11:
					dias = dias - 1;
					printf("\n\n\tO Mes %d do Ano %d tem %d dias!\n\n", mes, ano, dias);
					break;
				case 2:
					if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 != 0)){
						dias = dias - 2;
						printf("\n\n\tO Mes %d do Ano %d tem %d dias!\n\n", mes, ano, dias);
					}
					else{
						dias = dias - 3;
						printf("\n\n\tO Mes %d do Ano %d tem %d dias!\n\n", mes, ano, dias);
					}
				case 1: case 3: case 5: case 7: case 8: case 10: case 12:
					printf("\n\n\tO Mes %d do Ano %d tem %d dias!\n\n", mes, ano, dias);
					break;
				default:
					printf("\nInvalido!");
			}
			break;
		case 0:
			printf("\nInvalido");
			break;
		default:
			printf("\nInvalido");
	}	
}

