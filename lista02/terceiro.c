#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 03
	Copyright: 
	Author: Mayara Rysia
	Date: 10/10/17 22:03
	Description: 
*/

int main(){
    int a, b, c, maior;    
    printf("Insira 3 valores diferentes: ");
    scanf("%d%d%d", &a, &b, &c);
    
    if(a!=b && a!=c && b!=c){
            if(a>b && a>c)
                    maior = a;
            if(b>a && b>c)
                   maior = b;
            if(c>a && c>b)
                   maior = c;
            printf("\nO maior numero eh: %d", maior);    
    }else
          printf("Existem valores que se repetem! Tente novamente!");
    
    return 0;
}

