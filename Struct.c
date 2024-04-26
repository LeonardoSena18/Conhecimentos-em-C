#include <stdio.h>
#include <stdlib.h>
#inclide <locale.h>
	//permite usar caracteres com acentuações
#define TAM 50

struct tipo_pessoa {
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	tipo_pessoa pes = {0, 0.0, "Teste"};
	
	printf("inicio:\n");
	printf("idade: %d\n", pes.idade);
	printf("Peso: %f\n", pes.peso);
	printf("Nome: %s\n", pes.nome);
	
}

