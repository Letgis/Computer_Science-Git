/*1.7.7 Faça um programa que receba do usuário um numero
qualquer e mostre o quadrado deste número.*/

#include <iostream>
#include <stdio.h>

int main(){

    float num;
    float result;

    printf("Digite um numero: \n");
    scanf("%f", &num);

    result = num * num;

    printf("Resultado desse num ao quadrado: %.0f \n", result);
}