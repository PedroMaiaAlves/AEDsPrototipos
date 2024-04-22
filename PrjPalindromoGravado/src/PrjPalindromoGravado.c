/*
 ============================================================================
 Name        : PrjPalindromoGravado.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char palavra[100];
	int i, j, tamanho;
	int palindromo = 1;

	printf("Digite uma palavra: ");
	fflush(stdout);
	scanf("%s", palavra);
	tamanho = strlen(palavra);
	//ARARA\0 = 5
	//012345

	//Verificar se é palíndrmo

	for(i = 0, j = tamanho - 1; 1 < j; i++, j--){
		printf("i: %c\n", palavra[i]);
		printf("j: %c\n", palavra[j]);
		if(palavra[i] != palavra[j]){
			palindromo = 0;

			break;
		}

	}
	if(palindromo){
		printf("\nA palavra é um palíndrmo. \n");
	} else {
		printf("\nA palavra não é um palíndromo.\n");
	}

	FILE *arquivo = fopen("palindromo.txt", "w");

		if (arquivo != NULL) {
			if (palindromo){
				fprintf(arquivo, " A palavra %s é palíndromo");
			fclose(arquivo);
			} else {
				fprintf(arquivo, " A palavra %s não é palíndromo");
				fclose(arquivo);
			}
			printf("Texto Gravado com sucesso.\n");
		} else {
			printf("Erro ao abrir o arquivo para escrita.\n");
			return 1;
		}

		arquivo = fopen("exemplo.txt", "r");

		if( arquivo != NULL) {
			char linha [100];

			while (fgets(linha, sizeof(linha), arquivo) != NULL){
				printf("Conteúdo lido do arquivo: %s", linha);

			}
			fclose(arquivo);
		} else {
			printf("Erro ao abrir o arquivo para leitura. \n");
			return 1;
		}

}
