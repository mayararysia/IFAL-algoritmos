#include<stdio.h>
#include<stdlib.h>
#define MAX 20
/*
	Name: Questão 12 - segunda lista de vetores
	Author: Mayara Rysia
	Description: 12) Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos.
		Calcular a média da turma e contar quantos alunos obtiveram nota acima desta média calculada.
		Escrever a média da turma e o resultado da contagem.
*/

main() {
	float notas[MAX], media=0.0;
	int i, cont=0;
	
	printf("\nInsira %d numeros:\n\n", MAX);
	for(i=0; i<MAX; i++){
		scanf("%f", &notas[i]);
		media +=notas[i]; 
	}
	media = media/MAX;
	printf("\n\nMedia da Turma: %.2f", media);
	printf("\n\n\n");
	for(i=0; i<MAX; i++) if(notas[i]>media) cont++;
	printf("\n\nQuantidade de Alunos com Notas Acima da Media: %d", cont);
	
}
