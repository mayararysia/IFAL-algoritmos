#include<stdio.h>
#include<stdlib.h>
/*questão 14*/
main(){
   float salario, perc, reajuste;
   printf("Insira o Salario Mensal do funcionario e o percentual de reajuste: ");
   scanf("%f%f", &salario,&perc);
   printf("\n\tNovo Salario: R$ %.2f\n", reajuste = salario+(salario*(perc/100)));
}
