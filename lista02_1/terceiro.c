#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 03 - lista 2.1
	Copyright: 
	Author: Mayara Rysia
	Date: 11/10/17 13:50
	Description: 
*/

main(){
	float sal_bruto, valor_prest, max;
	
	printf("\nInsira o salario bruto e o valor da prestacao: ");
	scanf("%f%f", &sal_bruto, &valor_prest);
	
	max = (30.0/100.0)*sal_bruto;
	
	if(valor_prest <= max)
		printf("\nO Emprestimo poderah ser concedido!");
	else
		printf("\a\nO Emprestimo nao poderah ser concedido!");
}
