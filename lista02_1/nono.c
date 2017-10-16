#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão09 - lista 2.1
	Copyright: 
	Author: Mayara Rysia
	Date: 15/10/17 16:26
	Description: 
*/


main(){
	char letra;
	
	printf("Insira uma Letra: ");
	scanf("%c", &letra);
	
	if(letra>='A' && letra <='Z'){
		
		switch(letra){
			case 'A':
				printf("\n\tA letra %c eh uma vogal!", letra);
				break;
			case 'E':
				printf("\n\tA letra %c eh uma vogal!", letra);
				break;
			case 'I':
				printf("\n\tA letra %c eh uma vogal!", letra);
				break;
			case 'O':
				printf("\n\tA letra %c eh uma vogal!", letra);
				break;
			case 'U':
				printf("\n\tA letra %c eh uma vogal!", letra);
				break;
			default:
				printf("\n\tA letra %c eh uma Consoante!", letra);
		}	
	}
	else{
		if(letra>='a' && letra<='z'){
			
			switch(letra){
				case 'a':
					printf("\n\tA letra %c eh uma vogal!", letra);
					break;
				case 'e':
					printf("\n\tA letra %c eh uma vogal!", letra);
					break;
				case 'i':
					printf("\n\tA letra %c eh uma vogal!", letra);
					break;
				case 'o':
					printf("\n\tA letra %c eh uma vogal!", letra);
					break;
				case 'u':
					printf("\n\tA letra %c eh uma vogal!", letra);
					break;
				default:
					printf("\n\tA letra %c eh uma Consoante!", letra);
			}
		
		}else
			printf("\nOpcao Invalida!!");
		
	}
}
