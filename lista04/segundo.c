#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 02 - lista 04 
	Author: Mayara Rysia
	Date: 16/11/17 14:00
	Description: 
	2) Calcule e mostre a soma dos números pares entre 1 e 100, inclusive.
*/

main(){
	int soma = 0, i=100;
	
	printf("Pares: \n");
	do{
		if(i%2 == 0){
			printf("%d\n", i);
			soma +=i;
		}		
		i--;
	}while(i!=0);
	printf("Soma dos numeros pares entre 1 e 100: %d", soma);	
}
