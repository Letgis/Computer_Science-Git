/*2.2 Digite o Exemplo 2.2:- Entre com o valor da nota de uma determinada disciplina de um aluno e
mostre a mensagem de “Aprovado”, se sua nota for maior ou igual a 6, “Exame” se sua nota
estiver entre 4 e 5,9 ou “Reprovado”, se sua nota for menor que 4.

if (nota >= 6){
    printf("Aprovado");
}
else {
    if( < 4 ){
        printf("Reprovado");
    }
    else{
        printf("Exame");
    }
}
*/

#include <iostream>
#include <stdio.h>

int main(){
    float nota;

    printf("Nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 6){
        printf("%.1f = Aprovado.\n\n", nota);
    }
    else if (nota < 4){
        printf("%.1f = Reprovado.\n\n", nota);
    }
    else{
        printf("%.1f = Exame.\n\n", nota);
    }
}