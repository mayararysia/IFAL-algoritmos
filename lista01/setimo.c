#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 07 - lista 1
	Author: Mayara Rysia
*/
main(){
    int seg, hrs, min, valor;
    
    printf("Insira um Valor em segundos: ");
    scanf("%d", &valor);
    
    printf("\a\n\tHoras: %d",  hrs = valor/3600);
    printf("\a\n\tMinutos: %d", min = (valor%3600)/60);
    printf("\a\n\tSegundos: %d",  seg = (valor%3600)%60);
}
