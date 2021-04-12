/*3.3.2Imprima o quadrado dos 10 primeiros números inteiros.*/

#include <iostream>
#include <stdio.h>

int main(){

    int i = 1;
    int n;

    printf("\nOs 10 primeiros numeros inteiros ao quadrado.\n");

    while (i <= 10)
    {
        n = i * i;
        
        printf("%i = %i\n", i, n);

        i = i + 1;
    }
    
}