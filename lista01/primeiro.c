#include<stdio.h>
#include<stdlib.h>
/*questão 01*/
main(){
    float metro, decimetro, centimetro, milimetro;
    printf("Insira um valor em metros: ");
    scanf("%f", &metro);
    decimetro = metro*10.0;
    centimetro = decimetro*10.0;
    milimetro = centimetro*10.0;
    printf("\n\tDecimetro: %.2f\n\tCentimetro: %.2f\n\tMilimetro: %.2f\n", decimetro, centimetro, milimetro);
}
