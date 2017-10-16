#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questao 08 - lista 2.1
	Copyright: 
	Author: Mayara Rysia
	Date: 15/10/17 11:23
	Description: 
*/

main(){
	int vf=0, vt=0, opcao=0;
	int troco=0, cedula;
	int n100=0, n50=0, n20=0, n10=0, n05=0, n02=0, n01=0;
	
	
	while(opcao!=4){
		
		printf("\n1 - Inserir Valor e Total da Conta;");
		printf("\n2 - Obter troco;");
		printf("\n3 - Mostrar Cedulas do Troco.");
		printf("\n4 - Sair.");
		printf("\nOpcao: ");
		scanf("%d", &opcao);
	
		switch(opcao){
			case 1:
				printf("\nInsira o valor fornecido e total da compra: ");
				scanf("%d%d", &vf, &vt);
				break;
			case 2:
				troco = vf - vt;
				if(troco>=0)				
					printf("\n\tTroco: %d", troco);
				else
					printf("\n\nNao ha troco!\n\n");
				break;
			case 3:
				if(troco <= 0)
					printf("\n\n\tNao ha troco!\n\n");
				else{
					cedula = troco;
	
					n100 = cedula/100;
					cedula = cedula % 100;
					
					n50 = cedula/50;
					cedula = cedula % 50;
					
					n20 = cedula/20;
					cedula = cedula % 20;
					
					n10 = cedula/10;
					cedula = cedula % 10;
					
					n05 = cedula/5;
					cedula = cedula % 5;
					
					n02 = cedula/2;
					cedula = cedula % 2;
					
					n01 = cedula/1;
					cedula = cedula % 1;
					
					printf("\n\n\t\tCedulas do Troco: ");
	
					if(n100 != 0)
						printf("\n\n\t %d cedula(s) de R$ 100, 00", n100);
					if(n50 != 0)
						printf("\n\n\t %d cedula(s) de R$ 50,00", n50);
					if(n20 != 0)
						printf("\n\n\t %d cedula(s) de R$ 20,00", n20);
					if(n10 != 0)
						printf("\n\n\t %d cedula(s) de R$ 10,00", n10);
					if(n05 != 0)
						printf("\n\n\t %d cedula(s) de R$ 05,00", n05);
					if(n02 != 0)
						printf("\n\n\t %d cedula(s) de R$ 02,00", n02);
					if(n01 != 0)
						printf("\n\n\t %d cedula(s) de R$ 01,00", n01);
					printf("\n\n");
				}
				break;
			case 4:
				break;
			default:
				printf("\nOpcao Invalida!\n\n");
		}
	}
	
}
