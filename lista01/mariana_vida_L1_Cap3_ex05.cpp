#include <stdio.h>
#include <math.h>
int main()
{

    // Exercicio 5: Faça um programa que receba o salário de um funcionário
    //  e o percentual de aumento, calcule e mostre o valor do aumento
    //  e o novo salário
    float salario, taxaAumento, aumento, novoSalario;
    printf("Digite o salario: \n");
    scanf("%f%*c", &salario);
    printf("Digite a taxa de aumento: \n");
    scanf("%f%*c", &taxaAumento);
    aumento = salario * (taxaAumento / 100);
    novoSalario = salario + aumento;
    printf("Total de aumento: %4.2f\n", aumento);
    printf("Novo salario: %4.2f", novoSalario);

    getchar();
    return 0;
}
