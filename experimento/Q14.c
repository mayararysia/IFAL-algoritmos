#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define MAX 10
/*
	Name: Questão 14 - lista experimento - etapa 1
	Author: Mayara Rysia
	Description: 14) Faça um programa que leia uma string e a inverta.
	A string invertida deve ser armazenada na mesma variável. Em seguida, imprima a string invertida.
*/

main(){
	char string[MAX], aux[MAX];
	int tamanho, i, j;
	
	printf("Insira uma string:\n");
	gets(string);
	tamanho = strlen(string);
	
	j=tamanho-1;
	
	for(i=0; i< tamanho; i++){
		aux[i] = string[j];
		j--;
	}
	for(i=0; i< tamanho; i++){
	    string[i] = aux[i];
	}
	puts(string);
}

