#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 10 - lista 2
	Copyright: 
	Author: Mayara Rysia
	Date: 10/10/17 22:38
	Description: 
*/

int main(){
    float nota1, nota2, nota3, media;
    
    printf("\nInsira tres notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    
    media = (nota1+nota2+nota3)/3.0;
    printf("\nMedia: %.2f", media);
    if(media<4.0){
        printf("\n\nREPROVADO");
    }
    if(media>=4.0 && media<7.0){
        printf("\n\nVai para a avaliacao Final!\n");
        printf("\n\nA NOTA que precisa: %.2f", 12-media);
    }
    if(media>=7.0)
        printf("\n\nAPROVADO!");

    return 0;
}
