#include<stdio.h>
#include<stdlib.h>
/*	Name: Questão 02
	Copyright: 
	Author: Mayara Rysia
	Date: 10/10/17 22:02
	Description: 
*/
int main(){
    int cod, senha;
    printf("Insira o codigo de usuario: ");
    scanf("%d", &cod);    
    if(cod!=1234)
    	printf("\nUsuario Invalido!");
	else{
		printf("\nInsira a senha: ");
		scanf("%d", &senha);
		if(senha!=9999)
			printf("\nSenha incorreta!");
		else
			printf("\nAcesso permitido!");
	}
    return 0;
}
