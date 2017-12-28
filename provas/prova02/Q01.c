#include<stdio.h>
#include<stdlib.h>
/*
	Name: q 1 prova2
	Author: Mayara Rysia
	Date: 29/11/17 16:39
	Description: 
*/

main(){
    int N, i, j, a;

    printf("\nInsira um numero maior que 8: ");
    scanf("%d", &N);
    if(N>8){
        j=2;
        i=8;
        while(i<=N){
            printf(" %d ", i);
            a=i+2;
            i=8*j;
            printf(" %d ", a);
            j=j+2;
        }
    }else printf("\nInvalido!");
}
