#include<stdio.h>
#include<stdlib.h>
/*
	Name: 	Questão 1 - lista 04 -USP
	Author: Mayara Rysia
	Date: 27/11/17 13:18
	Description: Faça um comando While equivalente ao descrito abaixo (que realize o mesmo tipo de procedimento e
	obtenha o mesmo resultado), mas sem utilizar o operador relacional “OU” (||). Você pode usar outros
	operadores lógicos ou relacionais, exceto o “OU” (Or).
	
	While ( Nota < 0.0 ) || ( Nota > 10.0 )
	Do scanf(“%lf”, &Nota);
*/

main(){
	float nota=-2;
	
	while (!(nota >= 0.0 && nota < 10.0)) {
		scanf ("%f", &nota);
	}
	
}
