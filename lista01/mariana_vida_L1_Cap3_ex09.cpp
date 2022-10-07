#include <stdio.h>
#include <math.h>
int main()
{

    // Exercício 9 - Faça um programa que calcule e mostre
    // a área de um triângulo. sabe-se que Área = (base * altura)/2
    float altura, base, area;
    printf("Digite a altura do triangulo: \n");
    scanf("%f%*c", &altura);
    printf("Digite a base do triangulo: \n");
    scanf("%f%*c", &base);
    area = (base * altura) / 2;
    printf("A area do triangulo e: %4.2f", area);

    getchar();
    return 0;
}
