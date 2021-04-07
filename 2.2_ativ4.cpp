/*2.3.4 Uma empresa não pretende contratar candidatos com mais
de 40 anos. Faça um programa que receba a idade do candidato e
mostre uma mensagem se ele está apto ou não para a vaga.*/

#include <stdio.h>
#include <iostream>

int main(){

    char n_canddto[15];
    int idde_canddto;

    printf("Seu nome e sua idade: \n");
    scanf("%s", n_canddto);
    scanf("%i", &idde_canddto);

    /*printf("%s e %i", n_canddto, idde_canddto );*/

    if (idde_canddto > 40)
    {
        printf("%s voce nao esta apto: idade %i anos.\n", n_canddto, idde_canddto);
    }
    else
    {
        printf("%s voce esta apto: idade %i anos.\n", n_canddto, idde_canddto);
    }
    
}