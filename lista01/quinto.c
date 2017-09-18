#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*questão 05*/
main(){
    int n, quadrado, cubo, raiz_q, raiz_c;
    printf("Insira Um Numero: ");
    scanf("%d", &n);
    if(n>0){
        printf("\n\a\tSeu Quadrado: %d", quadrado = pow(n, 2));
        printf("\n\a\t Seu Cubo: %d", cubo = pow(n, 3));
        printf("\n\a\t Raiz Quadrada:%d", raiz_q = sqrt(n));
        printf("\n\a\t Raiz Cubica: %d", raiz_c = cbrt(n));
    }else{
        printf("\n\t\a Numero Negativo! Por favor, tente novamente!");
    }
}
