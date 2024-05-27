/*
 ============================================================================
 Name        : PrjOrdenaoCrescente.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int estaOrdenado(int array[], int tamanho) {
	if (tamanho <= 1){
		return 1;
	}
	if (array[tamanho - 1] < array[tamanho - 2]){
		return 0;
		//Se retorna 0, o Conjunto não está ordenado.
		//Pensei errado na prova.
	}
	return estaOrdenado(array, tamanho - 1);
}

int main(void) {
	int array[] = {1,2,9,4,5};

	if (estaOrdenado(array, 5) == 1){
	    printf("Esta ordenado");
	} else {
	    printf ("Nao esta ordenado");
	}


	return EXIT_SUCCESS;
}
