#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 03 - lista 04 - USP
	Author: Mayara Rysia
	Date: 27/11/17 13:51
	Description: Ler o nome de um aluno e as suas duas notas A e B, e após calcular a média ponderada entre estas notas
	(A tem peso 1 e B tem peso 2). Verifique se a nota digitada é valida, caso seja inválida, repita a leitura.
	Repetir este procedimento para uma turma composta por cinco alunos, usando o comando While.
*/

main(){
	float A, B, media;
	char nome[20];
	int aluno=5;
	
	while(aluno>0){
		
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
		aluno--;
	}
		
}
