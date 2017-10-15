#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 06 - lista 2
	Copyright: 
	Author: Mayara Rysia
	Date: 10/10/17 22:25
	Description: 
*/


main(){
 int n;
 
 printf("Insira um numero: ");
 scanf("%d", &n);
 
 if(n%3==0 && n%7==0)
 	printf("\n\t Eh divisivel por 3 e por 7!");
 else
	printf("\a\n\t Nao eh divisivel por 3 e por 7 simultaneamente!");
 
}

