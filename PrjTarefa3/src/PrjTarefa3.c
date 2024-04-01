/*
 ============================================================================
 Name        : PrjTarefa3.c
 Author      : Pedro Henrique Maia Alves
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int idade, altura, sexo; //1 Feminino 2 Masculino

	printf("Informe sua idade");
	scanf("%d", &idade);
	printf("\nInforme sua altura");
	scanf("%d", &altura);
	printf("\nInforme sua sexualidade: 1 - Para Feminino 2 - Para Masculino");
	scanf("%d", &sexo);

	if( altura >= 180 && idade > 16 && sexo == 1){
		printf("Apto a Jogar no time Feminino Juvenil de Basquete.");
	}

	if( altura >=180 && idade > 16 && sexo == 2){
		printf("Apto a Jogar no time Masculino Juvenil de Basquete.");
	}

	return EXIT_SUCCESS;
}
