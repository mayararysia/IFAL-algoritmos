#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
	Name: Questão 13 - lista experimento - etapa 1
	Author: Mayara Rysia
	Description:13) Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em minúscula.
	Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.
*/
main(){
    char string[10];
    int aux, i, tamanho;

    printf("Insira uma Palavra: \n");
    gets(string);
    tamanho = strlen(string);
    for(i=0; i<tamanho; i++){
        aux = string[i];
        if(aux>=65 && aux<=90){
            string[i] = aux+32;
        }
    }
    puts(string);
}
