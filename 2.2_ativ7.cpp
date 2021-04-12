/*2.3.9 Dados 3 valores representando os lados de um triângulo,
verifique se este triângulo é escaleno (3 lados diferentes),
isósceles (2 lados iguais) ou eqüilátero (3 lados iguais).*/

#include <stdio.h>
#include <iostream>

int main() {
    int a, b, c;

    printf("Digite tres valores: \n");
    scanf("%i%i%i", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c)
            printf("Equilatero\n");
        else
            if(a == b || a == c || b == c)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados nao formam um trinagulo!\n");
}