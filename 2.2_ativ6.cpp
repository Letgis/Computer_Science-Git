/*2.3.7 O IMC (Índice de Massa Corpórea) é um bom sinalizador
para o controle do nosso peso. A fórmula é simples:
IMC = peso / (altura2)
através da tabela abaixo podemos saber se precisamos
emagrecer, engordar ou manter o nosso peso.
Faça um programa que receba a altura e o peso do usuário*/

#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    float peso, altura, imc;

    printf("Peso: \n");
    scanf("%f", &peso);
    printf("Altura: \n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    
    printf("IMC: %.1f\n", imc);

    if (imc < 20)
    {
        printf("Abaixo do peso.\n");
    }
    else
    {
        if (imc >= 20 && imc <= 24.9)
        {
            printf("Peso normal.\n");
        }
        else
        {
            if (imc >= 25 && imc <= 35)
            {
                printf("Acima do peso normal.\n");
            }
            else
            {
                printf("Obeso.\n");
            }
            
        }
    }
        
}