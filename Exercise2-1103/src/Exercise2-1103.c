/*
 ============================================================================
 Name        : Exercise2-1103.c
 Author      : Pedro Henrique Maia Alves
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num = 999, contnum = 0, soma = 0;

	while (num != -1) {
		printf("Entre com um número; para encerrar digite -1: ");
		fflush(stdout);
		scanf("%d", &num);

		if (num != -1) {
			soma = soma + num;
			contnum = contnum + 1;
		}
	}
	printf("A quantidade de números digitados é: %d\n", contnum);
	printf("A soma dos números digitados é: %d\n", soma);

	return 0;
}
