#include<stdio.h>
#include<stdlib.h>
/*Mayara Rysia*/
main(){
    float n[10], media = 0.0;
    int i;

    printf("Insira 10 elementos: ");
    for(i=0; i<10; i++){
        scanf("%f", &n[i]);
        media+=n[i];
    }
    media=media/10.0;

    printf("\n\n");
    for(i=0; i<10; i++) if(n[i]<media) printf(" %.2f ", n[i]);
    printf("\n\n");
    for(i=0; i<10; i++) if(n[i]>media) printf(" %.2f ", n[i]);
}
