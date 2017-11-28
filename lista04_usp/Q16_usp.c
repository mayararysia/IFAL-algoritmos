#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
/*
	Name: Questão 16 - lista 04 - USP
	Author: Mayara Rysia
	Date: 28/11/17 00:33
	Description: 16. Faça um programa de contagem regressiva. Cada vez que o usuário apertar uma tecla você deve passar
		para o próximo número. Faça o programa usando o commando For, e fazendo uma contagem de 10 até
		chegar em 0. Para esperar que o usuário aperte uma tecla, use a função getch ou system conforme o
		exemplo abaixo:
		#include <conio.h>
		getch(); /* Espera que seja pressionada uma tecla 
		#include <stdlib.h>
		system("PAUSE");  Executa a rotina do sistema operacional (DOS) que espera uma tecla */

main(){
	int i;
	
	for(i=10; i>=0; i--){
		printf("%d\n", i);
		getch();
	}
}
