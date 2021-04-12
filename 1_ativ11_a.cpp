/*1.7.11 Para calcular a área de um retângulo, podemos multiplicar
sua largura pelo seu comprimento. Permita que o usuário entre
com a largura e comprimento de um retângulo qualquer e mostre
sua área. */

#include <stdio.h>
#include <iostream>

int main(){

    float lar, comp, a;

    printf("Digite uma largura e um comprimento: \n");
    scanf("%f%f", &lar, &comp);

    a = lar * comp;

    printf("Area: %.2f\n", a);
}

