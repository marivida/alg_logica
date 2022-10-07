//Faça um programa  que calcule e mostre a area de um círculo
//Sabe-se que: Área = pi * R^2
#include <stdio.h>
#include <math.h>

int main ()
{
    float area, raio;
    printf("\nDigite o raio: ");
    scanf("%f%*c", &raio);
    area = 3.1415 * pow(raio,2 );
    printf("\nA area e: %4.3f", area);

    getchar();
    return 0;
}
