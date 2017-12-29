#include<stdio.h>
#include<stdlib.h>
#define MAX 11
/*Mayara Rysia*/
main(){
    int B[MAX], X, i;

    printf("Insira 9 elementos para o vetor B:\n");
    for(i=0; i<9; i++) scanf("%d", &B[i]);

    printf("\nInsira um valor para x: \n");
    scanf("%d", &X);

    for(i=9; i>=0; i--){
        if(i == 0){
            B[i] = X;
            break;
        }
        B[i] = B[i-1];
    }
    printf("\n\nVetor B: \n\n");
    for(i=0; i<10; i++) printf(" %d ", B[i]);
}
