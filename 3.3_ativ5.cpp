/*3.3.5Um usuário tem em suas mãos 100 Notas Fiscais. Faça um
programa que receba seus valores e calcule o total de todas as
Notas.*/

#include <iostream>
#include <stdio.h>

int main(){
    float nf, s = 0;
    int i = 1;

    printf("\nDigite os 100 valores:\n");

    while (i <= 100)
    {
        scanf("%f", &nf);

        s = s + nf;
        i = i + 1;
    }

    printf("\nTotal: %.2f\n", s);

}