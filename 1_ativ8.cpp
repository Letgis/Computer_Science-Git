/*1.7.8 Faça um programa que permita que o usuário digite dois
valores inteiros. Multiplique estes valores guardando o produto em
uma terceira variável. Mostre o resultado da multiplicação.*/

#include <stdio.h>
#include <iostream>

int main(){
    int num1;
    int num2;
    int result;

    printf("Primeiro num: \n");
    scanf("%i", &num1);

    printf("Segundo num: \n");
    scanf("%i", &num2);

    result = num1 * num2;

    printf("Resultado multiplicacao: %i \n", result);
    
}