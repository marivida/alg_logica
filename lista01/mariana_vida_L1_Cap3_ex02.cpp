#include <stdio.h>
#include <math.h>
int main()
{
    // Exercício 2: Faça um programa que receba trÊs notas, calcule e mostre
    //  a média aritmética
    float n1, n2, n3, media;
    printf("Digite as notas: \n");
    scanf("%f%*c", &n1);
    scanf("%f%*c", &n2);
    scanf("%f%*c", &n3);
    media = (n1 + n2 + n3) / 3;
    printf("\nA media e: %4.2f", media);

    getchar();
    return 0;
}
