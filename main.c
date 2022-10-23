#include <stdio.h>
#include <stdlib.h>
#include "circun.h"
#include "quadret.h"
#include "cubo.h"
#include "esfera.h"

int main() {
    float raio, areaCirculo, quadrilatero, lado1, lado2, lado3, cubo, esfera;
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);
    areaCirculo = areaCircunferencia(raio);
    printf("A area do circulo e: %.2f\n", areaCirculo);
    printf("Digite o primeiro lado do quadrilatero: ");
    scanf("%f", &lado1);
    printf("Digite o segundo lado do quadrilatero: ");
    scanf("%f", &lado2);
    quadrilatero = areaQuadrilatero(lado1, lado2);
    printf("A area do quadrilatero e: %.2f\n", quadrilatero);
    printf("Digite o comprimento do cubo: ");
    scanf("%f", &lado1);
    printf("Digite a largura do cubo: ");
    scanf("%f", &lado2);
    printf("Digite a altura do cubo: ");
    scanf("%f", &lado3);
    cubo = areaCubo(lado1, lado2, lado3);
    printf("O volume do cubo e: %.2f\n", cubo);
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    esfera = areaEsfera(raio);
    printf("O volume da esfera e: %.2f", esfera);
    return 0;
}