#include<stdio.h>
#include<stdlib.h>

/*
	Name: Questão 21 - lista04 - USP
	Author: Mayara Rysia
	Date: 10/12/17 20:17
	
	Description: Ler o nome de um aluno e suas duas notas A e B, e após calcular a média ponderada entre estas notas
		(A tem 30% do peso do grau final e B tem 70% do peso). Repetir este procedimento para uma turma
		composta por cinco alunos, usando o comando For.
		
		xp = p1.x1 + p2.x2 + ... + pn.xn / p1+p2+...+pn;
		
		M = A.30% P + B.70%P / p1+p2
		
		p1 = 30%P
		p2 = 70%P;
		
		p1+p2 = P ou 30%P + 70%P = 100%P;
		
		M = 30%.P.A + 70%.P.B / P
		
		M = P(A.30% + B.70%) / P
		
		M = A.30% + B.70% 
*/

main(){
	char nome[10];
	float A, B, mediaPond;
	int i;
	
	printf("\nEntre com o nome do aluno:\n");
	scanf("%s", nome);
	printf("\nEntre com o grau A:\n");
	scanf("%f", &A);
	printf("\nEntre com o grau B:\n");
	scanf("%f", &B);
	
	mediaPond = (A*(30.0/100.0)) + (B*(70.0/100.0));
	
	printf("\nO aluno %s tem uma mehdia: %.2f\n\n", nome, mediaPond);
	
	printf("-Insira as notas de 5 alunos-\n\n");
	
	for(i=1; i<=5; i++){
		printf("\nEntre com o nome do aluno %d:\n", i);
		scanf("%s", nome);
		printf("\nEntre com o grau A:\n");
		scanf("%f", &A);
		printf("\nEntre com o grau B:\n");
		scanf("%f", &B);
		
		mediaPond = (A*(30.0/100.0)) + (B*(70.0/100.0));	
		printf("\nO aluno %s tem uma mehdia: %.2f\n\n", nome, mediaPond);
		printf("\t---\n");
		
	}
	
	
	
}


