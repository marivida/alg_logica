#include <stdio.h>
#include <math.h>
int main()
{

    // Exercicio 4: Faça um programa que receba o salário de um funcionário
    //  calcule e mostre o novo salario, sabendo-se que este sofreu um
    //  aumento de 25%
    float salario, novoSalario;
    printf("Digite o salario: \n");
    scanf("%f%*c", &salario);
    novoSalario = salario * 1.25;
    printf("O novo salario e: %3.2f", novoSalario);

    getchar();
    return 0;
}
