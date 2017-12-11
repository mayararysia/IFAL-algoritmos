#include<stdio.h>
#include<stdlib.h>// Primeira Questão: lOCADORA DE FILMES


main(){
    int dia, opcao;
    float preco_normal;
    float desconto = 0.0, acrescimo = 0.0;

    printf("\n\n<<Locadora de Filmes>>");
    printf("\n\nInsira o preco normal dos DVDs: ");
    scanf("%f", &preco_normal);

    printf("\n\n1-Aluguel de DVDs comuns;");
    printf("\n2-Aluguel de Lancamentos.");
    printf("\n\nEscolha uma opcao acima: ");
    scanf("%d", &opcao);

    if(opcao <= 2 && opcao >= 1){

        printf("\nInsira o dia da semana(de 1 a 7)");
        scanf("%d", &dia);

        if(dia >=1 && dia <= 7){

            if(dia == 2 || dia == 3 || dia == 5)
                    desconto = preco_normal - (preco_normal*(40.0/100.0));

            if(opcao == 1 && desconto != 0.0){
                printf("\n\n\nPara Aluguel de DVDs comuns No dia da semana %d o preco eh: %.2f", dia, desconto);
            }else{
                 if(opcao == 2){
                    acrescimo = preco_normal + (preco_normal*(15.0/100.0));
                    printf("\n\n\nPara Aluguel de Lancamentos o preco eh: %.2f", acrescimo);
                 }else
                    printf("\n\n\nPreco Normal do DVD: %.2f", preco_normal);
            }
        }else
            printf("\n\tInvalido! Tente novamente!");

    }else
        printf("\n\tInvalido! Tente novamente!");
}
