#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 01
	Copyright: 
	Author: Mayara Rysia
	Date: 10/10/17 22:13
	Description: 
*/

int main(){
    int a, b, c;

    printf("Insira tres lados do triangulo: ");
    scanf("%d%d%d", &a,&b,&c);

    if((a+b)>c && (a+c)>b && (b+c)>a)
        printf("Forma um Triangulo");
    else
        printf("Nao forma um Triangulo");
    return 0;
}
