#include<stdio.h>
#include<stdlib.h>
/*
	Name: Quest�o 10 - lista04-USP
	Author: Mayara Rysia 
	Date: 27/11/17 23:56
	Description: Fa�a um programa que obtenha e exiba na tela todos os n�meros primos de 1 at� 150. Os n�meros
				primos s�o aqueles que s� s�o divis�veis por 1 e por eles mesmos.
*/

main(){
	
	int i, n=1, qtd;
	
	while(n<=150){
		qtd=0;
		i=n;
		while(i>=1){
			if(n%i==0) qtd++;
			i--;
		}
		
		if(qtd==2) printf("%d\n", n);
		n++;
	}
}
