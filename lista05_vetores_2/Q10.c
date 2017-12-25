#include <stdio.h>
#include <stdlib.h>
#define MAX 10
/*10) Faça um algoritmo que leia um vetor de 10 posições. Mostre então os 3 menores valores do vetor. */
int main (void)
{
   int v[MAX], i, menor, menor2, menor3;

   printf("\nInsira %d elementos do vetor: ", MAX);
   for(i=0; i<MAX; i++){
    scanf("%d", &v[i]);
   }
   menor = v[0];
   menor2 = 99999;
   menor3 = 99999;
   for(i=0; i<MAX; i++){
        if(v[i]<menor)
            menor = v[i];
   }

   for(i=0; i<MAX; i++){
        if(v[i]<menor2 && v[i]>menor)
            menor2 = v[i];
   }

   for(i=0; i<MAX; i++){
        if(v[i]<menor3 && v[i]>menor2)
            menor3 = v[i];
   }

   printf("\nMenor de todos: %d", menor);
   printf("\nSegundo menor: : %d", menor2);
   printf("\nTerceiro menor: : %d", menor3);




return 0;
}
