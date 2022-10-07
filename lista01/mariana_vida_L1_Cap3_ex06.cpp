#include <stdio.h>
#include <math.h>
int main()
{
    // Exercicio 6: Faça um programa que receba o salario base de um
    // funcionário, calcule e mostre o salario a receber, sabendo-se que
    // o funcionario tem gratificação de 5% sobre o salario base e paga
    // imposto de 7% também sobre o salario base
    float salario, novoSalario;
    printf("Digite o salario base: \n");
    scanf("%f%*c", &salario);
    novoSalario = salario + (salario * 0.05) - (salario * 0.07);
    printf("Novo salario: %4.2f ", novoSalario);

    getchar();
    return 0;
}
