#include<stdio.h>
#include<stdlib.h>

/*
	Name: Questão 04 - lista experimento - etapa 1
	Author: Mayara Rysia
	Description: 4) Escrever um programa que tome como entrada um determinado horário, expresso por horas (valor inteiro de 0 a 23), 
	minutos (valor de 0 a 59) e segundos (valor de 0 a 59) e imprima na tela o horário original e o novo horário acrescido de 20 segundos.
	Lembrando que tanto os minutos quanto os segundos são exibidos com números de 0 a 59.
					Ex: horário = 3h 47m 52s
					novo horário = 3h 48m 12s*/
	
main(){
	int h, min, seg; 
	
	printf("Insira a hora (0 a 23):\n");
	scanf("%d", &h);
	printf("Insira os minutos (0 a 59): \n");
	scanf("%d", &min);
	printf("Insira os segundos (0 a 59): \n");
	scanf("%d", &seg);
	
	if(h >=0 && h<=23){
		if((min>=0 && min <=59) && (seg>=0 && seg <=59)){
			printf("\thorario: %d h %d m %d s\n", h, min, seg);
			seg = seg + 20;
			if(seg >= 60){
				while(seg >= 60){
					seg = seg - 60;
					min = min + 1;
				}
			}
			if(min >=60){
				while(min >= 60){
					min = min - 60;
					h = h + 1;
				}
			}
			printf("\tnovo horario: %d h %d m %d s\n", h, min, seg);
		}else printf("\nInvalido!");
	}else printf("\nInvalido!");
	
		
}
