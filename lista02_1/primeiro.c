#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 01 - lista 2.1
	Copyright: 
	Author: Mayara Rysia
	Date: 10/10/17 23:53
	Description: 
*/

main(){
	int a, b, c, menor, maior, meio;
	
	printf("Insira tres valores diferentes: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a!=b && a!=c && b!=c){
            if(a<b && a<c){
            	menor = a;
            	if(b>c){
            	 	maior = b;
            	 	meio = c;
            	}
            	else{
            	 	maior = c;
            	 	meio = b;
				}
			}                   
            if(b<a && b<c){
                menor = b;
                if(a>c){
            	 	maior = a;
            	 	meio = c;
            	}
            	else{
            	 	maior = c;
            	 	meio = a;
				}
			}
            if(c<a && c<b){
                menor = c;
                if(a>b){
            	 	maior = a;
            	 	meio = b;
            	}
            	else{
            	 	maior = b;
            	 	meio = a;
				}
        	}
            printf("\n\tOrdem Crescente: %d %d %d", menor, meio, maior);
    }else
        printf("Existem valores que se repetem! Tente novamente!");
	
}
