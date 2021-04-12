/**/

#include <stdio.h>
#include <iostream>

int main(){

    float valor;

    printf("Valor vendido? \n");
    scanf("%f", &valor);

    if (valor < 1500)
    {
        valor = valor * 0.95;
        printf("Bonificacao: %.2f \n", valor);
    }
    else
    {
        if (valor >= 1500 | valor <= 3500)
        {
            valor = valor * 0.93;
        }
        else
        {
            valor = valor * 0.80;
        }
    }
    
}