/*
 ============================================================================
 Name        : PrjDados.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rolarDado() {
	return rand() % 6 + 1;
}

int calcularSoma(int dado1, int dado2) {
	return dado1 + dado2;
}

int main(void) {
int jogador1[2], jogador2[2];
int somaJogador1, somaJogador2;

srand(time(NULL));

printf("Jogador 1, pressione ENTER para rolar os dados. \n");
getchar();
jogador1[0] = rolarDado();
jogador1[1] = rolarDado();
printf("Jogador 1: %d + %d\n", jogador1[0], jogador1[1]);
somaJogador1 = calcularSoma(jogador1[0],jogador1[1]);
printf("Soma do Jogador 1: %d\n", somaJogador1);

printf("\nJogador 2, pressione ENTER  para rolar os dados.\n");
getchar();
jogador2[0] = rolarDado();
jogador2[1] = rolarDado();
printf("Jogador 2: %d + %d\n", jogador2[0], jogador2[1]);
somaJogador2 = calcularSoma(jogador2[0], jogador2[1]);
printf("Soma do jogador 2: %d\n", somaJogador2);

if (somaJogador1 > somaJogador2) {
	printf("\nJogador 1 Venceu");
} else if (somaJogador2 > somaJogador1) {
	printf("\nJogador 2 Venceu");
} else {
	printf("\nEmpate, jogue novamente");
}

return 0;

}

