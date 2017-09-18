#include<stdio.h>
#include<stdlib.h>
/*questão 04*/
main(){
    float nota1, nota2, nota3, p1, p2, p3, media;
    printf("Insira 3 notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    printf("Insira 3 pesos: ");
    scanf("%f%f%f", &p1, &p2, &p3);
    media = ((nota1*p1)+(nota2*p2)+(nota3*p3))/(p1+p2+p3);
    printf("\n\tMedia Ponderada das Notas: %.2f", media);
}
