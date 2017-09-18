#include<stdio.h>
#include<stdlib.h>
/*questão 13*/
main(){
  float elei, bran, nulo, val;
  float perc_branc, perc_nulo, perc_val;
  printf("Insira o Numero Total de Eleitores: ");
  scanf("%f", &elei);
  printf("Insira o Numero de Votos Brancos: ");
  scanf("%f", &bran);
  printf("Insira o Numero de Votos Nulos: ");
  scanf("%f", &nulo);
  printf("Insira o Numero de Votos Validos: ");
  scanf("%f", &val);
  printf("\nPercentual de Votos Brancos: %.2f %%\n", perc_branc = (bran/elei)*100.0);
  printf("Percentual de Votos Nulos: %.2f %%\n", perc_nulo = (nulo/elei)*100.0);
  printf("Percentual de Votos Validos: %.2f %%\n", perc_val = (val/elei)*100.0);
}
