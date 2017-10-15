#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 03 - lista 1
	Author: Mayara Rysia
*/
main(){
    float nota1, nota2, nota3, media;
    printf("Insira 3 notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    media = (nota1+nota2+nota3)/3.0;
    printf("\n\tMedia das Notas: %.2f", media);
}
