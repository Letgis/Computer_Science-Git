/*2.3.12 Receba 3 números inteiros e distintos, a partir do usuário, e
mostre-os em ordem crescente.*/

#include <stdio.h>
#include <iostream>

int main(){

    int num1, num2, num3;

    printf("\nDigite 3 numeros\n");
    scanf("%i%i%i", &num1, &num2, &num3);

    if (num1 > num3)
    {
        int ajus = num3;
        num3 = num1;
        num1 = ajus;
    }
    if (num1 > num2)
    {
        int ajus = num2;
        num2 = num1;
        num1 = ajus;
    }
    if (num2 > num3)
    {
        int ajus = num3;
        num3 = num2;
        num2 = ajus;
    }

    printf("\n\n%i\n%i\n%i\n\n\n", num1, num2, num3);  
}