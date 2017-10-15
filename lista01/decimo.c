#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 10 - lista 1
	Author: Mayara Rysia
*/
main(){
   int h,c,f,r;
   float total;
   
   printf("Cardapio:\n ");
   printf("\n\tHanburguer.....R$ 3,00");
   printf("\n\tCheeseburger...R$ 2,50");
   printf("\n\tFritas.........R$ 2,50");
   printf("\n\tRefrigerante...R$ 1,00");
   
   printf("\nInsira a quantidade consumida do Hanburguer: ");
   scanf("%d", &h);
   
   printf("\nInsira a quantidade consumida do Cheeseburger: ");
   scanf("%d", &c);
   
   printf("\nInsira a quantidade consumida do Fritas: ");
   scanf("%d", &f);
   
   printf("\nInsira a quantidade consumida do Refrigerante: ");
   scanf("%d", &r);
   
   printf("\n\tTOTAL: %.2f\n", total = (h*3)+(c*2.50)+(f*2.50)+(r*1));
}
