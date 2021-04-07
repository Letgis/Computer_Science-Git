/*3.3.3 Faça um programa que permita que o usuário digite a idade de 10 funcionários.*/

#include <stdio.h>
#include <iostream>

int main(){
    char name[30];
    int age;
    int i = 1;

    printf("\nIdade de 10 Funcionarios\n");

    while (i <= 10)
    {
        printf("\nNome e idade: \n");
        scanf("%s%i", name, &age);

        printf("\n%i: %s tem %i anos.\n", i, name, age);

        i = i + 1;  
    }
    
}