#include<stdio.h>
#include<stdlib.h>
#define MAX 20
/*Mayara Rysia*/
main(){
    int N[MAX], i, j, aux;

    printf("Insira %d elementos para o vetor N:\n", MAX);
    for(i=0; i<MAX; i++) scanf("%d", &N[i]);

    i = 0;
    j = MAX-1;
    while(i<(MAX/2)){
        aux = N[i];
        N[i] = N[j];
        N[j] = aux;
        i++;
        j--;
    }

    printf("\n\nVetor N: \n\n");
    for(i=0; i<MAX; i++) printf(" %d ", N[i]);
}
