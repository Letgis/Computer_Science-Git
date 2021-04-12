/*1.7.12Supondo que um engenheiro deseja saber qual a distância
entre 2 pontos em um terreno. Porém ele sabe apenas as
coordenadas (x,y) de cada ponto. Faça um programa que resolva
este problema para o engenheiro, sabendo que o cálculo da
distância é dado por:

         d = raiz quadrada (x²−x¹)² + (y² − y¹)² ||||| d é igual raiz quadrada de x2 - x1 + y2 - y1 ao quadrado
Dica: Use sqrt() (math.h) para calcular a raiz quadrada.*/

#include <stdio.h>
#include <iostream>
#include <math.h>

int main(){
    float x1, y1, x2, y2, difx, dify, quaddifx, quaddify, dist;

    printf("x2? | x1? | y2? | y1?\n");
    scanf("%f", &x2);
    scanf("%f", &x1);
    scanf("%f", &y2);
    scanf("%f", &y1);

    difx = x2 - x1;
    dify = y2 - y1;


    quaddifx = difx * difx;
    quaddify = dify * dify;
    dist = sqrt(quaddifx + quaddify);

    printf("\n%.2f\n", dist);

}
