#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 05 - lista 2.1
	Copyright: 
	Author: Mayara Rysia
	Date: 11/10/17 14:12
	Description: Os valores numéricos de 0 à 9 na tabela ASCII vão de 48 à 57.
*/

main(){
	char placa[8];
	int mes, tam;
	
	printf("Insira a placa do carro: ");
	scanf("%s", &placa);
	
	tam = strlen(placa);
	
	if(tam>2){
		mes = placa[tam-1];
		
		if(mes>=48 && mes<=57){
			printf("\n\n\tPLACA DO CARRO INSERIDA: %s\n", placa);
			mes = mes-48;
			if(mes == 0){
				printf("\n\tMes 0 inexistente! Digite novamente.");
			}
			else{
				if(mes == 1)
					printf("\n\tO Emplacamento de ser renovado em JANEIRO!");
				if(mes == 2)
					printf("\n\tO Emplacamento de ser renovado em FEVEREIRO!");
				if(mes == 3)
					printf("\n\tO Emplacamento de ser renovado em MARCO!");
				if(mes == 4)
					printf("\n\tO Emplacamento de ser renovado em ABRIL!");
				if(mes == 5)
					printf("\n\tO Emplacamento de ser renovado em MAIO!");
				if(mes == 6)
					printf("\n\tO Emplacamento de ser renovado em JUNHO!");
				if(mes == 7)
					printf("\n\tO Emplacamento de ser renovado em JULHO!");
				if(mes == 8)
					printf("\n\tO Emplacamento de ser renovado em AGOSTO!");
				if(mes == 9)
					printf("\n\tO Emplacamento de ser renovado em SETEMBRO!");
			}
		}
		else
			printf("\n\tPlaca Invalida!");
	
	}
	else
	   printf("\n\tPlaca Invalida!");	
	
}
