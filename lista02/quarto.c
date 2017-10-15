#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 04 - lista 2 
	Copyright: 
	Author: Mayara Rysia
	Date: 10/10/17 22:08
	Description: 
*/

int main(){
    int n1, n2, soma;
    printf("Insira dois numeros:\n");
    scanf("%d%d",&n1,&n2);
    soma = n1+n2;
    if(soma>20)
    	printf("\n A soma dos numeros MAIS 8 eh: %d", soma+8);
    else{
    	if(soma<=20)
    		printf("\nA soma dos numeros MENOS 5 eh: %d", soma-5);
	}
    
    return 0;
}
