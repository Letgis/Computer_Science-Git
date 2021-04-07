/*1.7.3 Faça um programa que imprima um nome, escolhido pelo
usuário, na tela. Você deverá permitir que o usuário digite (função
scanf()) este nome, definindo uma variável para guardar este
nome na memória.*/

#include <iostream>
#include <stdio.h>

int main(){
    char nome [20];

    printf("Qual e o seu nome?");
    scanf("%s", nome);
    printf("Ola %s", nome);
}