#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 03 - lista 04
	Author: Mayara Rysia
	Date: 18/11/17 17:27
	Description: 3) Calcule e mostre a média dos números pares entre 1 e 100, inclusive.
*/
main(){
	int soma = 0, quantidade=0, i, media;
	
	for(i=1; i<=100; i++){
		if(i%2==0){
			soma+=i;
			quantidade++;
		}
	}
	media = soma/quantidade;
	printf("\nMedia dos numeros Pares entre 1 e 100: %d", media);
}
