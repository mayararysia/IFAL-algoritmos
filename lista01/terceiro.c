#include<stdio.h>
#include<stdlib.h>
/*questão 03*/
main(){
    float nota1, nota2, nota3, media;
    printf("Insira 3 notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    media = (nota1+nota2+nota3)/3.0;
    printf("\n\tMedia das Notas: %.2f", media);
}