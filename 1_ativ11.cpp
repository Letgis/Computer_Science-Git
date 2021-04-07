/*1.7.11 A tabela abaixo mostra o valor do câmbio de moedas
estrangeiras para cada real. Faça um programa onde o usuário
entre com uma quantia em real e o programa mostre este valor
em outras moedas. || 1 Dolar 1.9 || 1 Euro 3.1 ||*/

#include <stdio.h>
#include <iostream>

int main(){

    float d, e, r_dolar, r_euro, d_value, e_value;

    printf("\nDigite um valor para a conversao de real para dolar e o proximo valor de real para euro: \n");
    scanf("%f", &d);
    scanf("%f", &e);
    
    d_value = 1.9;
    e_value = 3.1;

    r_dolar = d * d_value;
    r_euro = e * e_value;

    printf("\nDolar %.2f e Euro %.2f \n", r_dolar, r_euro);
}