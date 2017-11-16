#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão01 - lista 3
	Author: Mayara Rysia
	Date: 15/10/17 17:12
*/

main(){
	int num;
	
	printf("\n\tInsira um numero: ");
	scanf("%d", &num);
	
	switch(num%3 == 0){
		case 1:
			printf("\n\tO numero %d eh divisivel por 3!", num);
			break;
		case 0:
			printf("\n\tO numero %d nao eh divisivel por 3!", num);
			break;
		default:
			printf("\nInvalido!");
	}
}
