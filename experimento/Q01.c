#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
	Name: Questão 05 - lista experimento - etapa 1
	Author: Mayara Rysia
	Description: 1) Considerando a, b, c e d como variaveis, escreva 
	um programa para calcular o valor de x e y das formulas a seguir.*/
	
main(){
	float a, b, c, d, x, y;
	
	printf("Insira um valor para a, b, c e d: \n");
	scanf("%f%f%f%f", &a, &b, &c, &d);
	
	x = ((b/(a+c))+(4.0*a))/((d-(2.0*a)) / (3.0+c));
	
	y = (-b-(b*b*b)-(4.0*a*c)+(2*(a*a))) / ((2.0*a) / ((b+1.0)*(b+1.0)));
	
	printf("\nValor de X: %.2f\nValor de Y: %.2f", x, y);
		
}
