#include<stdio.h>
#include<stdlib.h>
/*Segunda Questão:
    característica: 30 + 25 = 55, e 55² = 3025
*/
main(){
   int num, a, b, quadrado;

   printf("Insira um Numero de 4 digitos: ");
   scanf("%d", &num);

   if(num >= 1000 && num <= 9999){

       a = num/100;
       b = num%100;

       quadrado = (a + b)* (a+b);

       if(quadrado == num)
            printf("\n\tPossui a caracteristica. \n\tt\Numero: %d", num);
       else
            printf("\n\tNao possui a caracteristica!");
   }else
        printf("\nInsira um numero de 4 digitos!");

}
