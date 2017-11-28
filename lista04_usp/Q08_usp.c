#include<stdio.h>
#include<stdlib.h>
/*
	Name: Quest�o 08 - lista04 - USP
	Author: Mayara Rysia
	Date: 27/11/17 15:21
	Description: Fa�a um programa para o �jogo de adivinhar um n�mero�. O computador deve sortear um n�mero entre
		0 e 100 e pedir para o usu�rio tentar adivinhar este n�mero. O usu�rio vai dizer o seu palpite, e o
		computador deve responder, se ele � maior ou menor que o n�mero que ele sorteou. O programa
		termina somente quando o usu�rio acertar exatamente qual o n�mero que o computador tinha sorteado,
		escrevendo uma mensagem de felicita��es para o nosso usu�rio e indicando o n�mero total de
		tentativas feitas.
*/

main(){
	
	int numero_sorteado, n=-1, qtd=0;
	
	numero_sorteado = rand()%100;
	printf("Adivinhe o numero sorteado: ");
	
	while(n!=numero_sorteado){
		qtd++;
		printf("\nEntre com o numero.: ");
		scanf("%d", &n);
		
		if(numero_sorteado>n) printf("\nErrou! O numero eh maior que %d", n);
		if(numero_sorteado<n) printf("\nErrou! O numero eh menor que %d", n);
		if(numero_sorteado==n) printf("\nBRAVO! Voce acertou!\nNumero de tentativas: %d", qtd);
	}
}
