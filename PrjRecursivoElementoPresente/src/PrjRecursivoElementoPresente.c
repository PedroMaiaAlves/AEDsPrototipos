/*
 ============================================================================
 Name        : PrjRecursivoElementoPresente.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int elementoPresente(int array[], int elemento, int tamanho) {
	if ( tamanho < 0) {
		return 0;
	} if (array[tamanho]==elemento){
		return 1;
	} return elementoPresente(array, elemento, tamanho-1);
}

int main(void) {
int array[] = {9, 2, 3, 5, 7, 4};

if(elementoPresente(array, 0, 6) == 1){
    printf("O elemento está presente");
} else {
    printf("a");
}
}
