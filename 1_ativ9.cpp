/*1.7.9 Faça um programa de uma calculadora simples que permita
que o usuário digite dois valores inteiros. A calculadora, logo após
a digitação dos números, deverá mostrar o valor da soma, da
subtração, da multiplicação e da divisão dos valores digitados.*/

#include <iostream>
#include <stdio.h>

int main(){

    int num1, num2, sum, sub, mult;
    float div;
   
    printf("\nDigite primeiro num (inteiro): \n");
    scanf("%i", &num1);
    
    printf("\nDigite segundo num (inteiro): \n");
    scanf("%i", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2; //typecast

    printf("\nSoma: %i\nSub: %i\nMulti: %i\nDivi: %.2f\n\n", sum, sub, mult, div);

}