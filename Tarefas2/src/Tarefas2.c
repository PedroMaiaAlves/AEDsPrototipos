/*
 ============================================================================
 Name        : Tarefas2.c
 Author      : Pedro Henrique Maia Alves
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarParesMultiplosdeTres() {
	int cont = 0;
	printf("Números pares múltiplos de 3 até 1000:\n");
	for (int i = 2; i <= 1000; i += 2) {
		if (i % 3 == 0) {
			printf("%d ", i);
			cont++;
		}
	}
	printf("\nTotal de números pares múltiplos de 3: %d\n\n", cont);
}

void calcularSomaMedia(){
	int numero = 0;
	int soma = 0;
	double media = soma/10;
	printf("Digite 10 números inteiros: \n");

	for(int i = 0; i < 10; i ++){
		fflush(stdout);
		scanf("%d",&numero);
		soma += numero;
	}
	printf("A soma é: %d\n", soma);
	printf("A média é: %.2lf", media);
}

void calcularArea(){
	double largura, comprimento, area, areaTotal;
	for(int i = 1; i <= 4; i++){
		printf("Digite a largura do cômodo: %d", i);
		fflush(stdout);
		scanf("%lf", &largura);
		printf ("Digite o comprimento do cômodo: %d", i);
		fflush(stdout);
		scanf("%lf", &comprimento);

		area = largura * comprimento;
		areaTotal = areaTotal + area;

		printf("A área do cômodo %d é: %.2lf metros quadrados \n", i, area);
	}
	printf("A área total é: %.2lf", areaTotal);
}

void aPerimetro(){
	double area1, perimetro, raio;
	const double PI = 3.14;
	printf("Entre com o raio da circunferência");
	fflush(stdout);
	scanf("%lf", &raio);

	perimetro = 2 * PI * raio;
	area1 = PI * raio * raio;

	printf("O perímetro da circunferência é: %.2lf", perimetro);
	printf("A área da circunferênia é: %.2lf", area1);
}


int main(void) {
	mostrarParesMultiplosdeTres();
	calcularSomaMedia();
	calcularArea();
	aPerimetro();
}
