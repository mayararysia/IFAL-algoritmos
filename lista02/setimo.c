#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 07
	Copyright: 
	Author: Mayara Rysia
	Date: 10/10/17 22:29
	Description: 
*/

int main(){
    int num;
    printf("Insira um numero: \n");
    scanf("%d", &num);
    if(num%5==0 || num%10==0 || num%2==0)
        printf("\nO numero eh divisivel por 10, 5 ou 2!");
    else
        printf("Nao eh divisivel por 10, 5 ou 2!");
    return 0;
}
