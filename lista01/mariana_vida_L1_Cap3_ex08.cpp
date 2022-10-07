#include <stdio.h>
#include <math.h>
int main()
{
    // Exercicio 8: Faça um programa que receba o valor de um deposito e
    // o valor da taxa de juros, calcule e mostre o valor do rendimento
    // e o valor total depois do rendimento
    float deposito, taxa, rendimento, total;
    printf("Digite o valor do deposito: \n");
    scanf("%f%*c", &deposito);
    printf("Digite a taxa de juros: \n");
    scanf("%f%*c", &taxa);
    rendimento = deposito * (taxa / 100);
    total = deposito + rendimento;
    printf("Seu rendimento foi de %4.2f", rendimento);
    printf("\nValor total: %4.2f", total);

    getchar();
    return 0;
}
