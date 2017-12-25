#include<stdio.h>
#include<stdlib.h>
#define MAX 4
/*
	Name: Questão 10 - lista experimento - etapa 1
	Author: Mayara Rysia
	Description: 10) Usando o comando FOR, faça um programa que leia certa quantidade de números, imprima o maior deles e quantas vezes o maior número foi lido.
		A quantidade de números a serem lidos deve ser fornecida pelo usuário.
*/
main(){
    int x[MAX], quant,cont=0, i, maior=0;

    printf("\nInsira a quantidade de elementos a serem lidos: ");
    scanf("%d", &quant);
    if(quant<=MAX){
        printf("\nInsira %d elementos", quant);
        for(i=0; i<quant; i++){
            scanf("%d", &x[i]);
            if(x[i]>maior) maior = x[i];
        }
        for(i=0; i<quant; i++) if(x[i] == maior) cont++;
        printf("\tO maior numero (%d) foi lido %d vez(es)", maior, cont);
    }else printf("\nValor excedido!");

}

