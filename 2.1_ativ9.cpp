/*2.3.11 Dados 3 valores quaisquer, verifique se eles podem ser
lados de um triângulo. Lembre que, em um triângulo, a soma de
dois lados deve ser maior que o maior lado.*/

#include <stdio.h> 
#include <iostream>

int main() {
    int a, b, c;

    printf("Digite tres valores: \n");
    scanf("%i%i%i", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a)
    {
        printf("Formam um triangulo!\n");
    }
    else 
    {
        printf("Nao e um triangulo.\n");
    }
}