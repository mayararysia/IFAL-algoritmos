#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 19 - lista04 - USP
	Author: Mayara Rysia
	Date: 10/12/17 19:39
	Description: Faça um programa que escreva na tela os números pares entre 0 e 50, usando um comando For. Não
		utilize nenhum IF/THEN neste programa, apenas o comando FOR.
*/

main(){
	
	int i;
	
	for(i=0; i<=50; i=i+2){
		printf("%d\n", i);
	}
}
