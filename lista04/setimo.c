#include<stdio.h>
#include<stdlib.h>

/*
	Name: Questão - lista 04
	Author: Mayara Rysia
	Date: 22/11/17 14:11
	Description: 7) Escreva um algoritmo que leia 10 valores quaisquer.
	A seguir, mostre quantos deles estão dentro do intervalo (10,20) e
	 quantos estão fora do intervalo, mostrando essas informações
*/
int main(){
	int dentro[10], fora[10];
	int qtd_in=0, qtd_out=0, j=-1, l=-1, i, n, tam;
	
	printf("Insira 10 valores: \n");
	for(i=0; i<10; i++){
		scanf("%d", &n);
		if(n>=10 && n<=20){
			qtd_in++;
			j++;
			dentro[j] = n;			
		}else{
			qtd_out++;
			l++;
			fora[l] = n;
		}
	}
		
	printf("\n%d valores estao dentro do intervalo (10,20):\n", qtd_in);
	do{
		printf("\t%d\n", dentro[j]);
		j--;
	}while(j>0);
	
	printf("\n%d valores estao fora do intervalo (10,20):\n", qtd_out);
	do{
		printf("\t%d\n", fora[l]);
		l--;
	}while(l>0);
	
	return 0;
}
