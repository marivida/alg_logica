#include <stdio.h>
#include <math.h>
int main()
{
    // Exercicio 1: Faça um programa que receba quatro números inteiros,
    //  calcule e mostre a soma desses números
    int n1, n2, n3, n4, soma;
    printf("Digite o valor 1: ");
    scanf("%d%*c", &n1);
    printf("\nDigite o valor 2: ");
    scanf("%d%*c", &n2);
    printf("\nDigite o valor 3: ");
    scanf("%d%*c", &n3);
    printf("\nDigite o valor 4: ");
    scanf("%d%*c", &n4);
    soma = n1 + n2 + n3 + n4;
    printf("\nA soma e: %d", soma);

    getchar();
    return 0;
}
