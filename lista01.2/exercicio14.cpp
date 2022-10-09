#include <stdio.h>
#include <math.h>

int main()
{
  // 14. Faça um programa que receba o salário inicial de um
  // funcionário, calcule e mostre o novo salario, acrescido de
  // bonificação e de auxilio escola

  // salario ate 500 - bonificação 5%
  // salario entre 500 e 1200 - bonificação 12%
  // salario acima de 1200 - sem bonificação

  // salario ate 600 - auxilio 150
  // salario acima 600 - auxilio 100

  float salario, novoSalario, bonificacao, auxilio;

  printf("Digite o salario inicial: ");
  scanf("%f%*c", &salario);
  if (salario <= 500)
    novoSalario = salario * 1.05 + 150;
  else if (salario <= 1200 && salario <= 600)
    novoSalario = salario * 1.12 + 150;
  else if (salario <= 1200 && salario > 600)
    novoSalario = salario * 1.12 + 100;
  else
    novoSalario = salario + 100;

  printf("Novo salario: %3.2f", novoSalario);
}