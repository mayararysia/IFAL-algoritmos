#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
	Name: Questão 09 - lista 03
	Author: Mayara Rysia
	Date: 15/11/17 23:06
	Description: Juros sobre Juros: M = P . (1 +  i)n
*/
int main(){
	float valor, M, constante;
	int mes;
	
	constante = (1.0+0.05);
	
	printf("\nInsira o Valor Anual da Associacao: ");
	scanf("%f", &valor);
	printf("\nInsira o Mes atual:\n\t1-Jan\n\t2-Fev\n\t3-Mar\n\t4-Abr\n\t5-Mai\n\t6-Jun\n\t7-Jul\n\t8-Ago\n\t9-Set\n\t10-Out\n\t11-Nov\n\t12-Dez\n\n\t:");
	scanf("%d", &mes);
	
	printf("mes: %d", mes);
	
	switch(mes>0 && mes<=12){
		case 1:			
			switch(mes > 1){
				case 1:
					M = valor*(pow(constante, (mes-1.0)));
					break;
				case 0:
					printf("\nCobranca sem juros! Valor: %.2f", valor);
					exit(0);				
					break;				
				default:
					printf("\nInvalido!");
			}
			printf("\n\nValor da Multa: %.2f", M);
			break;
		case 0:
			printf("\nInvalido!");
			break;
		default:
			printf("\nInvalido!");
	}
	system ("pause");
	return 0;
}
