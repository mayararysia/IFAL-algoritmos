#include<stdio.h>
#include<stdlib.h>
/*
	Name: 
	Author: Mayara Rysia
	Date: 14/11/17 14:12

*/

int main(){
	int idade;
	
	printf("Idade: ");
	scanf("%d", &idade);
	
	switch(idade<10 && idade>0){
		case 1:
			printf("\nValor a ser pago: %d", (100+80));
			break;
		case 0:
			switch(idade>=10 && idade<=30){
				case 1:
					printf("\nValor a ser pago: %d", (100+50));
					break;
				case 0:
					switch(idade>=40 && idade<=60){
						case 1:
							printf("\nValor a ser pago: %d", (100+95));
							break;
						case 0:
							switch(idade>60){
								case 1:
									printf("\nValor a ser pago: %d", (100+130));
									break;
								default:
									printf("\nInvalido!");
							}
							break;
						default:
							printf("\nInvalido!");
				   }
					break;
				default:
					printf("\nInvalido!");
		   }
		   break;
		default:
			printf("\nInvalido!");		
	}
	return 0;
}
