#include<stdio.h>
#include<stdlib.h>
#define MAX 4
/*
	Name: Questão 11 - lista experimento - etapa 1
	Author: Mayara Rysia
	Description: 11) Escreva um programa que leia do teclado um vetor de posições.
	Escreva na tela quantos valores pares foram armazenados nesse vetor.
*/
main(){
    int x[MAX], cont=0, i;

    printf("\nInsira %d elementos: ", MAX);
    for(i=0; i<MAX; i++){
            scanf("%d", &x[i]);
            if(x[i]%2 == 0) cont++;
    }
    printf("\tExistem nesse vetor %d valores pares.", cont);
}

