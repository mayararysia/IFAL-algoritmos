#include<stdio.h>
#include<conio.h>
/*
	Name: Questão 20 - lista04 - USP
	Author: Mayara Rysia
	Date: 10/12/17 19:40
	Description: 

		Re-escreva o programa com o comando For que é dado abaixo, usando primeiramente um comando
		do tipo While, e depois re-escreva novamente o mesmo comando usando um comando Do-While. Os
		dois programas que forem usar o While e o Do-While devem se comportar de maneira idêntica ao
		programa que usava o For.
		
		#include <stdio.h>
		#include <conio.h>
		main()
		{
		int cont;
		for (cont=10; cont <=20; cont++)
		printf (“Contador = %.2lf\n“, (cont /10.0-1.0));
		getch();
}*/

main(){
	int cont=10;
	do{
		printf ("Contador = %.2lf\n", (cont /10.0-1.0));
		cont++;	
	}while(cont<=20);	
	getch();
}
