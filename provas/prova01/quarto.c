#include<stdio.h>
#include<stdlib.h>
/*Quarta questão: Pagamento Escolhido.*/
main(){
    float preco, parcela;
    int codigo;

    printf("\nInsira o preco normal da etiqueta: ");
    scanf("%f", &preco);

    printf("\nInsira o codigo para escolher o tipo de pagamento (de 1 a 4): ");
    scanf("%d", &codigo);

    switch(codigo){
        case 1:
            preco = preco - (preco*(10.0/100.0));
            printf("\nPreco: %.2f", preco);
            break;
        case 2:
            preco = preco - (preco*(5.0/100.0));
            printf("\nPreco: %.2f", preco);
            break;
        case 3:
            parcela = preco/2.0;
            printf("\n2x de%.2f", parcela);
            break;
         case 4:
            parcela = (preco +(preco*(10.0/100.0)))/3.0;
            printf("\n3x de %.2f", parcela);
            break;
        default:
            printf("\n\nOpcao Invalida!");

    }
}
