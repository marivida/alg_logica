#include <stdio.h>
#include <math.h>
int main()
{
    // Exercicio 10 - Faça um programa que calcule e mostre a
    // área de um círculo. Sabe-se que Área = π * R^2
    float raio, area;
    printf("Digite o raio do circulo: \n");
    scanf("%f%*c", &raio);
    area = 3.14 * pow(raio, 2);
    printf("A area do circulo e %4.2f ", area);

    getchar();
    return 0;
}
