#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
/*
	Name: Quest�o 16 - lista 04 - USP
	Author: Mayara Rysia
	Date: 28/11/17 00:33
	Description: 16. Fa�a um programa de contagem regressiva. Cada vez que o usu�rio apertar uma tecla voc� deve passar
		para o pr�ximo n�mero. Fa�a o programa usando o commando For, e fazendo uma contagem de 10 at�
		chegar em 0. Para esperar que o usu�rio aperte uma tecla, use a fun��o getch ou system conforme o
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
