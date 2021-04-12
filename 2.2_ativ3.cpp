/*2.3.5 Um restaurante oferece um desconto de 7% para todos os
clientes que gastarem mais que R$ 250,00 no fechamento da
conta. Faça um programa que pergunte ao usuário qual o valor da
conta e mostre o valor real a ser pago.
disc = v_conta * 0.07;
v_conta = v_conta - disc; || v_conta = v_conta - (v_conta*0.07);*/

#include <iostream>
#include <stdio.h>

int main(){

    float v_conta;
    float disc;
    char n_usu[15];

    printf("Seu nome e o valor de sua conta: \n");
    scanf("%s", n_usu);
    scanf("%f", &v_conta);

    if (v_conta > 200)
    {
        v_conta = v_conta* 0.93;
    }
    
    printf("%s, sua conta e: %.2f",n_usu, v_conta);
}