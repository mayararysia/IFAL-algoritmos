#include<stdio.h>
#include<stdlib.h>
/*
	Name: Quest�o 12 - lista experimento - etapa 1
	Author: Mayara Rysia
	Description: 12) Fa�a um programa que receba do usu�rio um vetor X com 10 posi��es.
	Em seguida dever�o ser impressos o maior e o menor n�mero elemento desse vetor.
*/
main(){
    int x[10], i, j, maior=0, menor;

    printf("\nInsira dez elementos: ");
    for(i=0; i<10; i++){
            scanf("%d", &x[i]);
            if(x[i]>maior) maior = x[i];
            if(i==0) menor = maior;
            if(x[i]<menor) menor = x[i];
    }
    printf("Maior: %d\nMenor: %d", maior, menor);
}

