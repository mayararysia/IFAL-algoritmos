#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
/*
	Name: Quest�o 16 - lista 04 - USP
	Author: Mayara Rysia
	Date: 28/11/17 00:33
	Description: 17. Altere o programa anterior, trocando a pausa esperando por uma tecla pelo comando delay e fa�a uma
					verdadeira contagem regressiva de 1 em 1 segundo. O comando delay pode ser usado da seguinte
					forma:
					#include <unistd.h>
					sleep(1); /* Sleep: parada contada em segundos */

main(){
	int i;
	
	for(i=10; i>=0; i--){
		printf("%d\n", i);
		sleep(1);
	}
}
