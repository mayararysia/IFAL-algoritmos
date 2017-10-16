#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 04 - lista 2.1
	Copyright: 
	Author: Mayara Rysia
	Date: 11/10/17 14:03
	Description: 
*/

main(){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num==5 || num==200 || num==400)
		printf("\nO numero eh: %d", num);
	else
		printf("\n\tO numero nao eh 5, 200 ou 400!");
	if(num>=500 && num<=1000)
		printf("\n\n\tO numero [ %d ] estah no intervalo entre 500 e 1000!", num);
	else
		printf("\n\tO numero  [ %d ] nao estah no intervalo entre 500 e 1000!", num);
}
