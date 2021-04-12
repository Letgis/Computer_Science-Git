/*3.3.1 Imprima os 10 primeiros números inteiros na tela.*/

#include <stdio.h>
#include <iostream>

int main(){

    int i = 1;

    printf("\nImprimindo os numeros de 1 a 10.\n");

    while (i <= 10)
    {
        printf("%i \n", i);
        i = i + 1;
    }
    
}