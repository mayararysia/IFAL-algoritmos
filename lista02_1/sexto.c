#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 06 - lista 2.1
	Copyright: 
	Author: Mayara Rysia
	Date: 12/10/17 20:08
	Description: 
*/

main(){
    float peso, gotas;
    int idade;

    printf("Insira a idade e o peso: ");
    scanf("%d%f", &idade, &peso);

    if(idade>0 && peso>0){

        if(idade>=12){
            if(peso>=60.0)
                gotas = 20.0*(1000.0/500.0);
            else
                gotas = 20.0*(875.0/500.0);
        }
        if(idade<12){
            if(peso>=5.0 && peso<=9)
               gotas = 20.0*(125.0/500.0);
            if(peso>=9.1 && peso<=16.0)
               gotas = 20.0*(250.0/500.0);
            if(peso>=16.1 && peso<=24.0)
               gotas = 20.0*(375.0/500.0);
            if(peso>30.0)
               gotas = 20.0*(750.0/500.0);
        }

        printf("\n\tGotas do Medicamento Por Dose: %.2f", gotas);
    }
    else
        printf("\a\nIdade ou peso invalidos!");


}
