#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main() {
	int idade;
	char nome[30];

	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);

	printf("%d", &idade);

}