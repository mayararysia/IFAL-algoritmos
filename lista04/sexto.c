#include<stdio.h>
#include<stdlib.h>

/*
	Name: Questão 6 - lista 04
	Author: Mayara Rysia
	Date: 21/11/17 13:56
	Description: 6) Apresente todos os números divisíveis por 5 que sejam maiores do que 0 e menores ou iguais a 200.
*/

main(){
	int numero=200;
	
	printf("Nuhmeros Divisiveis por 5: \n");
	while(numero > 0 && numero <= 200){
		
		if(numero%5 == 0){
			printf("\t%d\n\n", numero);
		}		
		numero--;
	}
}

