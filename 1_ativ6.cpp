/*1.7.6 Os funcionários da empresa “ToadaGoo”, recebem para
cada hora extra, 50% a mais do valor da hora normal. Faça um
programa que receba o nome de um funcionário, quantas horas
normais e quantas horas extras ele trabalhou, assim como o valor
da hora normal. Mostre, no final do programa, o salario líquido
deste funcionário.*/

#include <stdio.h>
#include <iostream>

int main (){

    char nome[20];
    float hnormais, hextras, vdhnormais, tothnormais, tothextras, saliquido;

    printf("\n Seu nome: ");
    scanf("%s", nome);

    printf("\n Suas horas normais trabalhadas: ");
    scanf("%f", &hnormais);

    printf("\n Suas horas extras trabalhadas: ");
    scanf("%f", &hextras);

    printf("\n Custo de horas normais: ");
    scanf("%f", &vdhnormais);

    tothnormais = hnormais * vdhnormais;
    tothextras = hextras * (vdhnormais * 1.5);
    saliquido = tothnormais + tothextras;

    printf("\n Salario liquido = %.2f", saliquido); 
    
}