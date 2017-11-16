#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
	Name: Questão 06 - lista 03
	Copyright: 
	Author: Mayara Rysia
	Date: 13/11/17 13:55
	Description: OBS.: O strcmp() da biblioteca string, compara duas palavras e retorna 0 se forem iguais.
*/

int main(){
	char mes[3];
	int tam;
	
	printf("\nDigite um mes (formato: jan/fev): \n");
	scanf("%s", mes);
	
	tam = strlen(mes);
	
	if(tam == 3) {
	
		switch(mes[0]){
			
			case 'j':
				if(strcmp(mes, "jan") == 0) 
					printf("\n%sEIRO - Alta Temporada!", strupr(mes));
				else{
					if(strcmp(mes, "jun") == 0 || strcmp(mes, "jul") == 0) 
						printf("\n%sHO -  Alta Temporada!", strupr(mes));
					else
						printf("\n\nInvalido!");
				}
				break;
				
			case 'f':
				if(strcmp(mes, "fev") == 0) 
					printf("\n%sEREIRO - Alta Temporada!", strupr(mes));
				else
					printf("\n\nInvalido!");
				break;
				
			case 'd':
				if(strcmp(mes, "dez") == 0) 
					printf("\n%sEMBRO - Alta Temporada!", strupr(mes));
				else
					printf("\n\nInvalido!");
				break;
				
			case 'm':
				if(strcmp(mes, "mar") == 0) 
					printf("\n%sCO - Baixa Temporada!", strupr(mes));
				else{
					if(strcmp(mes, "mai") == 0)
						printf("\n%sO - Baixa Temporada!", strupr(mes));
					else
						printf("\n\nInvalido!");
				}					
				break;
				
			case 'n':
				if(strcmp(mes, "nov") == 0) 
					printf("\n%sEMBRO - Baixa Temporada!", strupr(mes));
				else
					printf("\n\nInvalido!");
				break;
				
			case 'o':
				if(strcmp(mes, "out") == 0) 
					printf("\n%sUBRO - Baixa Temporada!", strupr(mes));
				else
					printf("\n\nInvalido!");
				break;
				
			case 's':
				if(strcmp(mes, "set") == 0) 
					printf("%sEMBRO - Baixa Temporada!", strupr(mes));
				else
					printf("\n\nInvalido!");
				break;
				
			case 'a':
				if(strcmp(mes, "abr") == 0)
					printf("%sIL - Baixa Temporada!", strupr(mes));
				else{
					if(strcmp(mes, "ago") == 0)
						printf("%sSTO - Baixa Temporada!", strupr(mes));
					else
						printf("\n\nInvalido!");
				}					
				break;
								
			default:
				printf("\n\nInvalido!");
		}
	}
	else
		printf("\n\nInvalido!");
	return 0;	
}

