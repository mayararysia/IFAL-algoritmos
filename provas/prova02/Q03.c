#include<stdio.h>
#include<stdlib.h>

main(){
       int div, a, b;

       printf("\nEntre com o valor do divisor: ");
       scanf("%d", &div);
       printf("\nInicio do intervalo: ");
       scanf("%d", &a);
       printf("\nFinal do Intervalo: ");
       scanf("%d", &b);

       if(b>a){
           printf("\nNumeros diviseis por %d no intervalo de %d a %d:\n", div, a, b);
           while(a<=b){
            if(a%div == 0) printf(" %d ", a);
            a++;
           }
      }
      else printf("Invalido! O valor inicial deve ser menor que o final!");
}
