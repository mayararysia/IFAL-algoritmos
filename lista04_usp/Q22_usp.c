#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
Fazer um programa que calcule e exiba na tela o fatorial de um n�mero fornecido pelo usu�rio, usando
o comando For. Perguntar ao usu�rio se ele deseja calcular o fatorial de outro n�mero e repetir a
execu��o do programa tantas vezes quantas o usu�rio indicar. Exemplo de tela de sa�da:

	Entre com um n�mero: 5
	O fatorial de 5 eh 120
	Outro n�mero (sim/nao) ? nao
*/

main(){
	int num, i, fat, igual=0;
	char op[4];//op��o
	
	while(igual == 0){
		
		fat = 1;
		
		printf("\nEntre com um nuhmero:\n");
		scanf("%d", &num);
		fflush(stdin);
		
		for(i = num; i>0; i--)
			fat = fat * i;
			
		printf("\nO fatorial de %d eh %d", num, fat);
		printf("\nOutro numero: (sim/nao)?");
		gets(op);
		
		igual = strcmp(op, "sim");
		
		if(igual != 0) break;
	}
	
}
