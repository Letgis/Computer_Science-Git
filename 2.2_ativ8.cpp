/*2.3.10 Faça um programa que receba 3 valores correspondentes
aos lados de um triângulo. Verifique e dê mensagens para as
seguintes condições, sendo A o maior lado:
Se A >= B + C Nenhum triangulo é formado
Se A2 = B2 + C2 Um triangulo retangulo é formado
Se A2 > B2 + C2 Um triangulo obtusangulo é formado
Se A2 < B2 + C2 Um triangulo acutangulo é formado
Faça o algoritmo e o fluxograma antes do programa.*/

#include <stdio.h>
#include <iostream>
#include <math.h>

int main(){

    double A, B, C;

    printf("\nDigite num A, B e C de um triangulo:\n");
    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);

    /*A2 = A * A;
    B2 = B * B;
    C2 = C * C;  
    printf("\n A2 = %i | B2 = %i | C2 = %i\n", A2, B2, C2);*/

    
    if (A >= B + C)
    {
        printf("\nNenhum triangulo formado.\n");
    }
    else 
    {
        if (pow(A, 2) == pow(B, 2) + pow(C, 2)) /* OU -> if (A * A == (B * B) + (C * C))*/
        {
            printf("\nTriangulo retangulo.\n");
        }
        else
        {
            if (pow(A, 2) > pow(B, 2) + pow(C, 2))
            {
                printf("\nTriangulo obtusangulo.\n");
            }
            else
            {
                if (pow(A, 2) < pow(B, 2) + pow(C, 2))
                {
                    printf("\nTriangulo acutangulo.\n");
                }
                
            }
            
        }
        
    }

}