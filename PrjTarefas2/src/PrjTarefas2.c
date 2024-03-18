/*
 ============================================================================
 Name        : PrjTarefas2.c
 Author      : Pedro Henrique Maia Alves
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

void calcularSomaMedia() {
	int numero;
	int soma = 0;
	printf("Digite 10 números inteiros: \n");

	for (int i = 0; i < 10; i++) {
		fflush(stdout);
		scanf("%d", &numero);
		soma += numero;
	}
	double media = soma / 10;
	fflush(stdout);
	printf("A soma é: %d\n", soma);
	fflush(stdout);
	printf("A média é: %.2lf\n", media);
}

void calcularArea() {
	double largura, comprimento, area, areatotal;
	for (int i = 1; i <= 4; i++) {
		printf("Digite a largura do cômodo %d: ", i);
		fflush(stdout);
		scanf("%lf", &largura);
		printf("Digite o comprimento do cômodo %d: ", i);
		fflush(stdout);
		scanf("%lf", &comprimento);

		area = largura * comprimento;
		areatotal = areatotal + area;

		printf("A área do cômodo %d: %.2lf metros quadrados \n", i, area);
	}
	printf("A área total é: %.2lf\n", areatotal);
}

void aPerimetro() {
	double area1, perimetro, raio;
	const double PI = 3.14;
	printf("Entre com o raio da circunferência");
	fflush(stdout);
	scanf("%lf", &raio);

	perimetro = 2 * PI * raio;
	area1 = PI * raio * raio;

	printf("O perímetro da circunferência é: %.2lf\n", perimetro);
	printf("A área da circunferênia é: %.2lf\n", area1);
}

void solicitarTotalGasto() {
	double totalGasto, form, pag, parc;
	double desc = 0.9, jur = 0.03;
	while (1) {
		printf("Digite o total gasto (ou -999 para encerrar): ");
		fflush(stdout);
		scanf("%lf", &totalGasto);

		if (totalGasto == -999) {
			printf("Programa encerrado.\n");
			break;
		}
		if (totalGasto != -999) {
			printf("Escolha a forma de pagamento: 1 - À Vista (10 por cento de desconto), 2 - Parcelado 2x, 3 - Parcelado 3x até 10x ( 3 por cento de juros ao mês) \n");
			fflush(stdout);
			scanf("%lf", &form);
		}
		if (form == 1) {
			pag = totalGasto * desc;
			printf("O total a ser pago será: %.2lf\n", pag);

		}
		if (form == 2) {
			pag = totalGasto / 2;
			printf("O total a ser pago será duas parcelas de: %.2lf\n", pag);
		}
		if (form == 3) {
			printf("Escolha quantas parcelas: \n");
			fflush(stdout);
			scanf("%lf", &parc);
		}
		if (form == 3 && totalGasto >= 300) {
			pag = totalGasto * pow(1 + jur, parc) /parc ;
			printf("O total a ser pago será parcelas de: %.2lf\n", pag);

		}
		if (form == 3 && totalGasto < 300) {
			printf("Pagamento inválido, escolha uma nova forma de pagamento: (Digite para continuar) \n");
			fflush(stdout);
			scanf("%lf", &form);
		}
	}
}

int main(void) {
	mostrarParesMultiplosdeTres();
	calcularSomaMedia();
	calcularArea();
	aPerimetro();
	solicitarTotalGasto();
}
