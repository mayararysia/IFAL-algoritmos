#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 08 - lista 1
	Author: Mayara Rysia
*/
main(){
   float f, c;
   
   printf("Insira uma temperatura em Fahrenheit: ");
   scanf("%f", &f);
   printf("\a\n\tCelsius: %.2f\n", c = ((5.0*f)-160.0)/9.0);
}
