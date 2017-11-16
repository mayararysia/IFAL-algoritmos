#include<stdio.h>
#include<stdlib.h>
/*	Name: Questão 04 - lista 03
	Author: Mayara Rysia
	Date: 06/11/17 12:09
	Description:  Exemplo: 111.222.333-44 e 111.222.333-96 , sem a '.' e '-' .
*/

main(){
	char cpf[11];	
	int prim_digito, seg_digito, terc_digito, quarto_digito, quinto_digito, sexto_digito, setimo_digito, oitavo_digito, nono_digito, dec_digito;
	int mult_prim, mult_seg, mult_terc, mult_quart, mult_quinto, mult_sexto, mult_setimo, mult_oitavo, mult_nono, mult_dec;
	int soma = 0, resto = 0, subt = 0;
	
	printf("Insira os 11 digitos do cpf: \n");
	scanf("%s", &cpf);
	
	prim_digito = cpf[0];
	seg_digito = cpf[1];
	terc_digito = cpf[2];
	quarto_digito = cpf[3];
	quinto_digito = cpf[4];
	sexto_digito = cpf[5];
	setimo_digito = cpf[6];
	oitavo_digito = cpf[7];
	nono_digito = cpf[8];
	dec_digito = cpf[9];
		
	mult_prim = (prim_digito-48)*10;
	mult_seg= (seg_digito-48)*9;
	mult_terc= (terc_digito-48)*8;
	mult_quart= (quarto_digito-48)*7;
	mult_quinto= (quinto_digito-48)*6;
	mult_sexto= (sexto_digito-48)*5;
	mult_setimo= (setimo_digito-48)*4;
	mult_oitavo= (oitavo_digito-48)*3;
	mult_nono= (nono_digito-48)*2;
	
	soma = mult_prim + mult_seg + mult_terc + mult_quart + mult_quinto + mult_sexto + mult_setimo + mult_oitavo + mult_nono; 
	resto = soma % 11;
	subt = 11 - resto;
	
	switch(subt < 10){
		case 1:
			switch(subt == (cpf[9]-48) || subt == 0){
				case 1:				
					mult_prim = (prim_digito-48)*11;
					mult_seg= (seg_digito-48)*10;
					mult_terc= (terc_digito-48)*9;
					mult_quart= (quarto_digito-48)*8;
					mult_quinto= (quinto_digito-48)*7;
					mult_sexto= (sexto_digito-48)*6;
					mult_setimo= (setimo_digito-48)*5;
					mult_oitavo= (oitavo_digito-48)*4;
					mult_nono= (nono_digito-48)*3;
					mult_dec = (dec_digito-48)*2;
					
					soma = mult_prim + mult_seg + mult_terc + mult_quart + mult_quinto + mult_sexto + mult_setimo + mult_oitavo + mult_nono + mult_dec;
					resto = soma % 11;
					subt = 11 - resto;
	
					switch(subt < 10){
						case 1:
							if(subt == (cpf[10]-48) || subt == 0)
								printf("\n\tO CPF: %s eh Valido!", cpf);
							else
								printf("\nO CPF: %s eh Invalido!\n", cpf);
							break;
						default:
							printf("\nO CPF: %s eh Invalido!\n", cpf);
					}
					break;
				case 0:
					printf("\nO CPF: %s eh Invalido!\n", cpf);
					break;
				default:
					printf("\nO CPF: %s eh Invalido!\n", cpf);
			}			
			break;
		default:
			printf("\nO CPF: %s eh Invalido!\n", cpf);
	}
}
