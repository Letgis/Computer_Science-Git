/*1.7.5 Faça um programa que receba o nome do usuário, quantas
horas ele trabalhou no mês e o valor da sua hora trabalhada.
Mostre seu nome e o valor do seu salário. Neste caso, você deve
reservar variáveis para o nome, quant. de horas trabalhadas, valor
da hora e para o salario (que será calculado).*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

int main(){

    char nome[20];
    int idade;
    float hrstrab;
    float vlhrtrab;
    float salario;

    printf("\n Qual seu nome? ");
    scanf("%s",nome);

    printf("\n Qual sua idade? ");
    scanf("%i", &idade);

    printf("\n Quantas horas voce trabalhou? ");
    scanf("%f", &hrstrab);

    printf("\n Qual eh o valor para horas trabalhadas? ");
    scanf("%f", &vlhrtrab);

    salario = vlhrtrab * hrstrab;

    printf("\n %s, seu salario eh: R$%.2f. ", nome, salario);
    getch();
}