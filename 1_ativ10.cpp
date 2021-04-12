/*1.7.10 Faça um programa que calcule a media da temperatura
ocorrida em um dia. O usuário deverá digitar 5 temperaturas e o
programa deverá mostrar em tela a média das temperaturas.*/

#include <stdio.h>
#include <iostream>
#include <conio.h>

int main(){

    float t1, t2, t3, t4, t5, sum, r;

    printf("\nDigite 5 temperaturas: \n"); 
    scanf("%f", &t1);
    scanf("%f", &t2);
    scanf("%f", &t3);
    scanf("%f", &t4);
    scanf("%f", &t5);

    sum = t1 + t2 + t3 + t4 + t5;
    r = sum / 5;

    printf("\nTemp media: %.2f\n\n", r);

}