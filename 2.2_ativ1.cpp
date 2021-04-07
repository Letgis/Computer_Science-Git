/*2.3.3 Permita que o usuário digite um valor inteiro, teste se este
valor é maior que 10, caso seja, imprima “Maior que 10”; caso
contrário, imprima “Menor ou igual a 10”.*/

#include <stdio.h>
#include <iostream>

int main(){
    
    int n;

    printf("\nDigite um numero inteiro:\n");
    scanf("%i", &n);

    if (n > 10)
    {
        printf("\nMaior que 10.\n");
    }
    else
    {
        printf("\nMenor ou igual a 10.\n");
    }
}