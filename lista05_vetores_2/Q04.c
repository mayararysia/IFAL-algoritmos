#include<stdio.h>
#include<stdlib.h>
#define MAX 10
/*
	Name: Questão 04 - segunda lista de vetores
	Author: Mayara Rysia
	Description: 4) Escreva um algoritmo que leia 10 número reais de um vetor e, posteriormente, imprima os mesmos em duas linhas.
	A primeira linha com aqueles elementos que são inferiores à media do vetor, e a segunda com os elementos que são superiores.
*/

main() {
	float v[MAX], media=0.0;
	int i;
	
	printf("\nInsira %d numeros:\n\n", MAX);
	for(i=0; i<MAX; i++){
			scanf("%f", &v[i]);			
			media+=v[i];
	}
	media = media/MAX;
	
	printf("\n\n\n");
	for(i=0; i<MAX; i++) if(v[i]<media) printf(" %.2f ", v[i]);	
	printf("\n\n\n");
	for(i=0; i<MAX; i++) if(v[i]>media) printf(" %.2f ", v[i]);
	
}
