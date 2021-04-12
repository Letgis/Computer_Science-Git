/*1.7.4 Faça um programa que receba o nome e a idade do usuário
e depois mostre-os na tela. Devem ser definidas duas variáveis
para guardar nome e idade na memória.*/

#include <stdio.h>
#include <iostream>

int main(){
    char nome[20];
    int idade;

    printf("Qual seu nome? ");
    scanf("%s", nome);

    printf("Qual sua idade? ");
    scanf("%i", &idade);

    printf("Entao seu nome e %s e sua idade e %i. Bem-vindo!", nome, idade);
}