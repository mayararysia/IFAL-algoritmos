#include<stdio.h>
#include<stdlib.h>
#define MAX 100
/*
	Name: Questão 07 - lista experimento - etapa 1
	Author: Mayara Rysia
	Description: 7) Usando o comando DO-WHILE, faca um programa que calcule e escreva o valor de 
	S:..= 1/1+3/2+5/3+7/4+.+99/50
*/
main(){
	float S=0, numerador=1.0, denominador=0.0;

	do{
		denominador++;
		S=S+(numerador/denominador);
		numerador=numerador+2.0;
	}while(numerador<=100.0);
	
	printf("S: %.2f ", S);
}

