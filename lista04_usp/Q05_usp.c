#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
	Name: Questão 05 - lista04 - USP
	Author: Mayara Rysia
	Date: 27/11/17 14:24
	Description: Baseado no programa anterior, faça um novo programa de maneira a validar as notas fornecidas pelo
		usuário (notas devem ser valores positivos entre 0.0 e 10.0). Indicar ao usuário se a nota fornecida é
		inválida e pedir para fornecer uma nova nota, repetindo este processo até que o usuário informe uma
		nota correta.
*/

main(){
	
	float A, B, media;
	char nome[20], opcao[3];
	int aluno=5, validacao=0;
	
	while(validacao==0){
		
		printf("\nEntre com o nome do aluno: ");
		scanf("%s", &nome);
		printf("\nEntre com o grau A: ");
		scanf("%f", &A);
		
		while(A<0.0 || A>10.0){
			if(A<0.0 || A>10.0) printf("\nERRO: Nota invalida! Digite novamente a nota.\n");		
			printf("\nEntre com o grau A: ");
			scanf("%f", &A);
			
		}
		printf("\nEntre com o grau B: ");
		scanf("%f", &B);
		
		while(B<0.0 || B>10.0){
			if(B<0.0 || B>10.0) printf("\nERRO: Nota invalida! Digite novamente a nota.\n");		
			printf("\nEntre com o grau B: ");
			scanf("%f", &B);
		}
		
		media = ((A*1.0)+(B*2.0))/(1.0+2.0);
		printf("\nO aluno %s tem uma media: %.2f\n", nome, media);
		printf("Continuar?(sim/nao) ? ");
		scanf("%s", opcao);
		
		validacao = strcmp(opcao, "sim");		
	}
	
}
