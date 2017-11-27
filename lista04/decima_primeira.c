#include<stdio.h>
#include<stdlib.h>

/*
	Name: Questão 11 - lista 04
	Author: Mayara Rysia
	Date: 25/11/17 09:34
	Description: 11) Faça um algoritmo que gere e mostre os valores primos entre 1 e 1000. Mostre também a soma destes valores.
*/


main(){
	int i=1, j, soma = 0, cont;
	
	printf("\nPrimos (entre 1 e 1000):\n");
	while(i<=1000){
		cont = 0;
		for(j=1; j<=i; j++){
			if(i%j == 0) cont ++;					
		}
		if(cont == 2) {
			soma=soma+i;
			printf("\t%d\n", i);
		}
		i++;
	}
	printf("\nSoma dos Numeros Primos: %d", soma);
}
