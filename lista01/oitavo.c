#include<stdio.h>
#include<stdlib.h>
/*questão 08*/
main(){
   float f, c;
   printf("Insira uma temperatura em Fahrenheit: ");
   scanf("%f", &f);
   printf("\a\n\tCelsius: %.2f\n", c = ((5.0*f)-160.0)/9.0);
}
