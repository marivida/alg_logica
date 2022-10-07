#include <stdio.h>
#include <math.h>
int main()
{

    // Exercicio 7: Faça um programa que receba o salario base de um
    // funcionario, calcule e mostre seu salario a receber, sabendo-se
    // que o funcionario tem gratificacao de $50 e paga imposto de 10%
    // sobre o salario base
    float salario, novoSalario;
    printf("Digite o salario: \n");
    scanf("%f%*c", &salario);
    novoSalario = salario + 50 - (salario * 0.1);
    printf("Novo Salario: %4.2f", novoSalario);

    getchar();
    return 0;
}
