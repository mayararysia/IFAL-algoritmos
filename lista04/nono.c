#include<stdio.h>
#include<stdlib.h>

/*
	Name: Questão 9 - lista 04
	Author: Mayara Rysia
	Date: 24/11/17 14:26
	Description: 9) Mostre os números entre 1000 e 2000 que quando divididos por 11 dão resto igual a 5.
*/

int main(){
	int numero=1000;
	
	do{
		if(numero%11 == 5)
			printf("\n%d", numero);
		numero++;
	}while(numero>=1000 && numero<=2000);
	
	return 0;
}
