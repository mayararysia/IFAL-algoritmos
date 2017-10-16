#include<stdio.h>
#include<stdlib.h>
/*
  Name: Questão07 - lista 2.1
  Copyright: 
  Author: Mayara Rysia
  Date: 11/10/17 21:47
  Description: 
*/

main(){
       char nome[10];
       int tipo, area;
       float custo_final = 0.0, custo_maximo = 0.0;
       float desconto_valor = 0.0, desconto_area = 0.0;
       float tipo_valor = 0.0;        
       
       printf("Tipo 1: Pulverizacao Contra Ervas Daninhas;\n");
       printf("\nTipo 2: Pulverizacao Contra Gafanhotos;\n");
       printf("\nTipo 3: Pulverizacao Contra Broca;\n");
       printf("\nTipo 4: Pulverizacao Contra Tudo Acima.\n");
       printf("\n\nNome do fazendeiro: \n");
       scanf("%s", &nome);
       printf("Tipo de Pulverizacao (de 1 a 4) : \n");
       scanf("%d", &tipo);
       
       if(tipo>=1 && tipo<=4){
       	
       		printf("\nInsira a area a ser pulverizada: ");
       		scanf("%d", &area);
       		
		   	if(area > 0){
			   
			   	if(tipo == 1)
			   		tipo_valor = 5.0;
			   	if(tipo == 2)
			   		tipo_valor = 10.0;
			   	if(tipo == 3)
			   		tipo_valor = 15.0;
			   	if(tipo == 4)
			   		tipo_valor = 25.0;
			   	
				custo_maximo = area * tipo_valor;
				
				if(area > 300)
					desconto_area = custo_maximo*(5.0/100.0);
				if(custo_maximo > 1750.0)
					desconto_valor = (custo_maximo - 1750.0)*(10.0/100.0);
					
				custo_final = custo_maximo - (desconto_valor + desconto_area);
				
				printf("\n\tNome do Fazendeiro: %s", nome);
				printf("\n\tValor Total: %.2f\n", custo_final);	   	
			   
			}else
				printf("\n Area Invalida! Tente novamente");		
       	}
		else
	   		printf("\nTipo Invalido! Tente novamente"); 
       
}
