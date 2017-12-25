#include<stdio.h>
#include<stdlib.h>

/*
	Name: Questão 03 - lista experimento - etapa 1
	Author: Mayara Rysia
	Description: 3) Faça um programa que, tendo como dados de entrada a altura (h)
	e o sexo de uma pessoa, calcule seu peso ideal utilizando as seguintes fórmulas:
	(1) Homens: Peso ideal = 72.7 * h – 58
	(2) Mulheres: Peso ideal = 62.1 * h – 44.7*/
	
main(){
	float h, p;
	char sexo;
	
	printf("Insira a altura: ");
	scanf("%f", &h);
	printf("Insira o sexo (F/M): \n");
	scanf(" %c", &sexo);
	if(sexo == 'F' || sexo == 'f'){
		p = (62.1*h) - 44.7;
		printf("\nPeso Ideal: %.2f", p);
	}else {
		if(sexo == 'M' || sexo == 'm'){
			p = (72.7 * h) - 58.0;
			printf("\nPeso Ideal: %.2f", p);
		}else printf("\nSexo Invalido!");
	}
	
		
}
