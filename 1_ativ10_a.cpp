/*1.7.10 Faça um programa que calcule e mostre o salário líquido
de um funcionário. O programa deve receber o salário bruto e
considerar que todo funcionário tem um desconto de 10% de IR
no salário bruto.*/

#include <stdio.h>
#include <iostream>

int main(){
    float sliq, sbru;
    char name[10];

    printf("\nSalario Bruto e primeiro nome: \n");
    scanf("%f", &sbru);
    scanf("%s", name);

    sliq = sbru * 0.90;

    printf("\n%s seu salario liquido: %.2f reais. \n", name, sliq);
}