#include<stdio.h>
#include<stdlib.h>
/*Terceira Questão: Salario Total*/
main(){
    float valor, salario_fixo, salario_total;
    float comissao = 0, acrescimo = 0;

    printf("\nInsira o salario e o valor das vendas efetuadas: ");
    scanf("%f%f", &salario_fixo, &valor);

    if(salario_fixo!=0.0 && valor !=0.0){

        if(valor <= 1500.0)
            comissao = valor * (3.0/100.0);
        if(valor > 1500.0)
            acrescimo = (valor-1500.0)*(5.0/100.0);

        salario_total = salario_fixo + comissao + acrescimo;
        printf("\n\tSalario Total: %.2f", salario_total);
    }else{
        printf("\nInvalido!");
    }
}
