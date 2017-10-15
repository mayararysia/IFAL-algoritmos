#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 15 - lista 1
	Author: Mayara Rysia
*/
main(){
   float custo_fab, custo_final;
   
   printf("Insira o Custo de Fabrica do Carro: ");
   scanf("%f", &custo_fab);
   
   custo_final = custo_fab + (custo_fab*(28.0/100.0)) + (custo_fab*(45.0/100.0));
   
   printf("\nCusto Final do Consumidor: %.2f\n", custo_final);
}
