#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
	Name: Questão 06 - lista 1
	Author: Mayara Rysia
*/
main(){
    int ano_nasc, ano_atual, idade;
    
    printf("Insira Seu Ano de Nascimento: ");
    scanf("%d", &ano_nasc);
    
    printf("Insira O Ano Atual: ");
    scanf("%d", &ano_atual);
    
    idade = ano_atual-ano_nasc;
    
    printf("\a\n\tSua Idade Eh: %d", idade);
    
    idade = 2021-ano_nasc;
    
    printf("\a\n\tSua Idade Em 2021: %d", idade);
}
