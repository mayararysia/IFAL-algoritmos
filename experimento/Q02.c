#include<stdio.h>
#include<stdlib.h>

/*
	Name: Questão 02 - lista experimento - etapa 1
	Author: Mayara Rysia
	Description: 2) Escreva um programa que forneca o valor em graus Fahrenheit (TF) 
	de uma temperatura expressa em graus Celsius (TC).
	A formula para conversao e: ....5=.....329*/
	
main(){
	float TF, TC;
	
	printf("Insira uma temperatura em graus Celcius: \n");
	scanf("%f", &TC);
	
	TF = ((9.0*TC) / 5.0) + 32.0;
	printf("\nGraus Fahrenheit: %.2f", TF);
		
}
