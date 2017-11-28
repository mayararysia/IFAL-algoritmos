#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 08 - lista04 - USP
	Author: Mayara Rysia
	Date: 27/11/17 15:21
	Description: Faça um programa para o “jogo de adivinhar um número”. O computador deve sortear um número entre
		0 e 100 e pedir para o usuário tentar adivinhar este número. O usuário vai dizer o seu palpite, e o
		computador deve responder, se ele é maior ou menor que o número que ele sorteou. O programa
		termina somente quando o usuário acertar exatamente qual o número que o computador tinha sorteado,
		escrevendo uma mensagem de felicitações para o nosso usuário e indicando o número total de
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
