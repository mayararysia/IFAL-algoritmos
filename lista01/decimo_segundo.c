#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 12- lista 1
	Author: Mayara Rysia
*/
main(){
   int l, h, area, perimetro;
   
   printf("\tRETANGULO ");
   printf("\nInsira a Largura e a Altura: ");
   scanf("%d%d", &l, &h);
   printf("\nArea: %d\nPerimetro: %d", area = l*h, perimetro = 2*(l+h));
}
