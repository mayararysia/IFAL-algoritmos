#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
	Name: Questão 05 - lista 04 
	Author: Mayara Rysia
	Date: 19/11/17 21:57
	Description: 5) Apresente o quadrado de cada um dos números pares entre 1 e 1000, inclusive
*/
int main(){
	int i, quadrado;
	
	for(i=1; i<=1000; i++){
		if(i%2 == 0){
			quadrado = pow(i, 2);
			printf("Quadrado do Numero %d: %d\n\n", i, quadrado);
		}
	}
	return 0;
}
