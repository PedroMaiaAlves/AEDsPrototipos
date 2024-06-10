/*
 ============================================================================
 Name        : PrjStructreLivro.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : PrjStructure.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Livro {
	char titulo[50];
	char autor[50];
	char assunto[50];
	int id_livro;
};

int main(void) {

	struct Livro Livro1;
	struct Livro Livro2;

	strcpy(Livro1.titulo, "Título Genérico");
	strcpy(Livro1.autor, "Autor");
	strcpy(Livro1.assunto, "Um livro Genérico");
	Livro1.id_livro = 123;

	strcpy(Livro2.titulo, "Outro Título Genérico");
	strcpy(Livro2.autor, "Autor 2");
	strcpy(Livro2.assunto, "Um outro livro Genérico");
	Livro2.id_livro = 456;

	printf("Livro 1 título : %s\n", Livro1.titulo);
	printf("Livro 1 autor : %s\n", Livro1.autor);
	printf("Livro 1 assunto : %s\n", Livro1.assunto);
	printf("Livro 1 Id : %d\n", Livro1.id_livro);

	printf("Livro 2 título : %s\n", Livro2.titulo);
	printf("Livro 2 autor : %s\n", Livro2.autor);
	printf("Livro 2 assunto : %s\n", Livro2.assunto);
	printf("Livro 2 Id : %d\n", Livro2.id_livro);

	return EXIT_SUCCESS;
}

