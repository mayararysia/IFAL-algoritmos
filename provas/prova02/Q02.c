#include<stdio.h>
#include<stdlib.h>

main(){

    int x, y, soma=1, i;

    printf("\nInsira dois numeros: ");
    scanf("%d%d", &x,&y);
    for(i=y; i>0; i--){
        soma= soma*x;
    }
    printf("Resultado da exponenciacao: %d", soma);
}
