#include <stdio.h>
#include <math.h>
int main()
{

    // Exercicio 3: Faça um programa que receba três notas e seus respectivos
    // e seus respectivos pesos, calcule e mostre a media ponderada
    float n1, n2, n3, p1, p2, p3, media;
    printf("Digite a primeira nota e seu peso: \n");
    scanf("%f%*c", &n1);
    scanf("%f%*c", &p1);
    printf("Digite a segunda nota e seu peso: \n");
    scanf("%f%*c", &n2);
    scanf("%f%*c", &p2);
    printf("Digite a terceira nota e seu peso: \n");
    scanf("%f%*c", &n3);
    scanf("%f%*c", &p3);
    media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
    printf("A media aritmetica e: %4.2f", media);

    getchar();
    return 0;
}
