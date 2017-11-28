#include<stdio.h>
#include<stdlib.h>
/*
	Name: Quest�o 09-lista 04 - USP
	Author: Mayara Rysia
	Date: 28/11/17 00:14
	Description: 9. Fa�a um programa para o �jogo de adivinhar um n�mero�, mas invertendo os pap�is desta vez. O
computador que vai tentar adivinhar um n�mero escolhido pelo usu�rio. O usu�rio deve escolher um
n�mero e para cada n�mero apresentado pelo computador, responder se ele acertou, ou se o n�mero
apresentado � maior que o escolhido, ou se ele � menor que o escolhido. O programa termina quando o
usu�rio responder que o computador acertou.
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
