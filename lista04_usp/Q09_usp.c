#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 09-lista 04 - USP
	Author: Mayara Rysia
	Date: 28/11/17 00:14
	Description: 9. Faça um programa para o “jogo de adivinhar um número”, mas invertendo os papéis desta vez. O
computador que vai tentar adivinhar um número escolhido pelo usuário. O usuário deve escolher um
número e para cada número apresentado pelo computador, responder se ele acertou, ou se o número
apresentado é maior que o escolhido, ou se ele é menor que o escolhido. O programa termina quando o
usuário responder que o computador acertou.
*/

main(){
	int numero_apresentado, n=-1, qtd=1;
	
	printf("\nEscolha um numero.: ");
	scanf("%d", &n);
	numero_apresentado = rand()%10;
	
	while(numero_apresentado!=n){
		qtd++;		
		if(n>numero_apresentado) printf("\nErrou! O numero eh maior que %d", numero_apresentado);
		if(n<numero_apresentado) printf("\nErrou! O numero eh menor que %d", numero_apresentado);		
		numero_apresentado = rand()%100;
	}
	if(n==numero_apresentado) printf("\nO computador acertou! \nNumero de tentativas: %d", qtd);
}
