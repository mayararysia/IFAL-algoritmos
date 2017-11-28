#include<stdio.h>
#include<stdlib.h>
/*
	Name: Questão 11 - lista 04 - USP
	Author: Mayara Rysia
	Date: 28/11/17 14:24
	Description: 11. Faça um comando Do-While equivalente ao descrito abaixo (que realize o mesmo tipo de
		procedimento e obtenha o mesmo resultado), mas sem utilizar o operador relacional “E” (&&). Você
		pode usar outros operadores lógicos ou relacionais, exceto o “E” (And).
		do scanf(“%lf”, &Nota);
		while ( ! ( Nota >= 0.0 ) && ( Nota <= 10.0 ) ) ;
		

	*OBSERVAÇÕES:
		Ao analisarmos o trecho de código, percebemos que é pedido para o usuário digitar enquanto os valores forem menores que 0.
		Exemplos:
			while (!( nota>= 0.0) && (nota<=10.0))
			nota=-2.: !{falso} && verdadeiro = verdadeiro (obs. que está negando o primeiro termo).
			nota=3.: !{verdadeiro} && verdadeiro = falso
			nota=0.: !{verdadeiro} && verdadeiro = falso
			nota=10.: !{verdadeiro} && verdadeiro = falso
			nota=11.: !{verdadeiro} && falso = falso
			
		Logo, o usuário para de digitar quando o valor for positivo ou igual a zero.
*/
main(){
	float nota;
	do{
		scanf("%f", &nota);
	}while(nota<0);	
}
