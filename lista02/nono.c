#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
	Name: Questão 09
	Copyright: 
	Author: Mayara Rysia
	Date: 10/10/17 22:36
	Description: 
*/

int main(){
    float n1, n2, raiz, quadrado;
    
    printf("\nInsira dois numeros: ");
    scanf("%f%f", &n1, &n2);
    if(n1<n2){
        quadrado = pow(n1, 2.0);
    }else{
        quadrado = pow(n2, 2.0);
    }
    if(n1>n2){
        raiz = sqrt(n1);
    }else{
        raiz = sqrt(n2);
    }
    printf("\n\tQuadrado do menor numero: %.2f", quadrado);
    printf("\n\tRaiz quadrada do maior: %.2f", raiz);
    return 0;
}
