#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 08
	Copyright: 
	Author: Mayara Rysia
	Date: 10/10/17 22:33
	Description: 
*/


int main(){
    int n1, n2;
    printf("Insira dois numeros: \n");
    scanf("%d%d", &n1,&n2);
    if(n1==n2)
    	printf("\nOs numeros sao iguais!");
    else
    	printf("\nOs numeros sao diferentes!");
    return 0;
}
