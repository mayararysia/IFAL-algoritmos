#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
	Name: Questão 04 - lista04 - USP
	Author: Mayara Rysia
	Date: 27/11/17 14:24
	Description: Baseado no programa anterior, faça um novo programa de maneira que possamos trabalhar com turmas
	compostas por um número variável de alunos. Após calcular e exibir a média de um aluno, exibir uma
	mensagem perguntando ao usuário se existem mais alunos (resposta: sim / nao). Se tiver mais alunos,
	continuar o procedimento de leitura das notas e o cálculo da média até que o usuário responda “não”.
	Usar o comando While e gerar uma saída conforme o exemplo de tela de saída abaixo:
	Observação: Para comparar duas strings use a função strcmp (string compare).
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
		
		while(A>10.0){
			if(A>10.0) printf("\nNota Invalida!\n");		
			printf("\nEntre com o grau A: ");
			scanf("%f", &A);
			
		}
		printf("\nEntre com o grau B: ");
		scanf("%f", &B);
		
		while(B>10.0){
			if(B>10.0) printf("\nNota Invalida!\n");		
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
