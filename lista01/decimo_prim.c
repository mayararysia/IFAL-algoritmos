#include<stdio.h>
#include<stdlib.h>
/*questão 11*/
main(){
   char nome[15];
   int qtdC;
   float total, salario;
   printf("Nome do Vendedor: ");
   scanf("%s", &nome);
   printf("\nNumero de Carros Vendidos: ");
   scanf("%d", &qtdC);
   printf("\nValor Total das Vendas: ");
   scanf("%f", &total);
   salario = (500.0+(50.0*qtdC))+((5.0/100.0)*total);
   printf("\n\tSalario do Vendedor: R$ %.2f\n", salario);
}
