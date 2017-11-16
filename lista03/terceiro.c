#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questao 03 - lista 3
	Author: Mayara Rysia
	Date: 15/10/17 17:42
*/

main(){
	int valor;
	int n100=0, n50=0, n20=0, n10=0, n05=0, n01=0;
	
	printf("Digite um Valor: ");
	scanf("%d", &valor);
	
	
	switch(valor >0){
		case 1:
			n100 = valor/100;
			valor = valor % 100;
			
			n50 = valor/50;
			valor = valor % 50;
			
			n20 = valor/20;
			valor = valor % 20;
			
			n10 = valor/10;
			valor = valor % 10;
			
			n05 = valor/5;
			valor = valor % 5;
			
			n01 = valor/1;
			valor = valor % 1;
			
			printf("\n\n\t\tCedulas do Troco: ");
			
			switch(n100 != 0){
				case 1:
					printf("\n\n\t %d cedulas de R$ 100,00", n100);
					break;
				case 0:
					break;
				default:
					printf("\nInvalido!");
			}
			
			switch(n50 != 0){
				case 1:
					printf("\n\n\t %d cedulas de R$ 50,00", n50);
					break;
				case 0:
					break;
				default:
					printf("\nInvalido!");
			}
			
			switch(n20 != 0){
				case 1:
					printf("\n\n\t %d cedulas de R$ 20,00", n20);
					break;
				case 0:
					break;
				default:
					printf("\nInvalido!");
			}
			
			switch(n10 != 0){
				case 1:
					printf("\n\n\t %d cedulas de R$ 10,00", n10);
					break;
				case 0:
					break;
				default:
					printf("\nInvalido!");
			}
			
			switch(n05 != 0){
				case 1:
					printf("\n\n\t %d cedulas de R$ 05,00", n05);
					break;
				case 0:
					break;
				default:
					printf("\nInvalido!");
			}		
			
			switch(n01 != 0){
				case 1:
					printf("\n\n\t %d cedulas de R$ 01,00", n01);
					break;
				case 0:
					break;
				default:
					printf("\nInvalido!");
			}					
			break;
		case 0:
			printf("\nInvalido!");
			break;
		default:
			printf("\nInvalido!");		
	}
	
}
