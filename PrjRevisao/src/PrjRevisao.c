/*
 ============================================================================
 Name        : ExercRevisao.c
 Author      : Pedro Henrique Maia Alves
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int linha;

	printf("Digite o número de linhas do Triângulo \n");
	fflush(stdout);
	scanf("%d", &linha);

	while (linha > 0) {
		for (int i = 1; i <= linha; i++) {

			for (int j = 1; j <= linha - i; j++) {
				printf(" ");
			}
			for (int k = 1; k <= 2 * i - 1; k++) {
				printf("*");
			}
			printf("\n\n");
		}
		linha = 0; // Encerrar o Loop
	}

	return EXIT_SUCCESS;
}

