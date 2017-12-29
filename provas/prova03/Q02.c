#include<stdio.h>
#include<stdlib.h>
/*Mayara Rysia*/
main(){
    int v1[10], v2[10], v3[20];
    int i, j;

    printf("Insira 10 elementos para o primeiro vetor:\n");
    for(i=0; i<10; i++) scanf("%d", &v1[i]);

    printf("\n\nInsira 10 elementos para o segundo vetor:\n");
    for(i=0; i<10; i++) scanf("%d", &v2[i]);

    i=0;
    j=0;
    while(j<20){
        v3[j] = v1[i];
        j++;
        v3[j] = v2[i];
        i++;
        j++;
    }

    printf("\n\nPrimeiro Vetor: \n\n");
    for(i=0; i<10; i++) printf(" %d ", v1[i]);

    printf("\n\nSegundo Vetor: \n\n");
    for(i=0; i<10; i++) printf(" %d ", v2[i]);

    printf("\n\nTerceiro Vetor: \n\n");
    for(i=0; i<20; i++) printf(" %d ", v3[i]);
}
