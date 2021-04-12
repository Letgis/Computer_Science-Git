/*3.3.6 Implementar um programa que imprima a tabuada de um
número digitado pelo usuário.*/

#include <iostream>
#include <stdio.h>

int main(){
    int i = 1, num, calc;

    printf("\n\nDigite um numero para saber a sua tabuada.\n");
    scanf("%i", &num);
    printf("\n");

    while (i <= 10)  
    {
        calc = i * num;

        printf("%i X %i = %i\n", num, i, calc);

        i = i + 1;
    }
}