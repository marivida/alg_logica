#include <stdio.h>
#include <math.h>

int main()
{

  /*16. Faça um programa que receba o número de horas trabalhadas e o valor do salário
  mínimo, calcule e mostre o salário a receber, seguindo estas regras:
  a) a hora trabalhada vale a metade do salário mínimo.
  b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da
  hora trabalhada.
  c) o imposto equivale a 3% do salário bruto.
  d) o salário a receber equivale ao salário bruto menos o imposto.*/
  float horasTrabalhadas, salarioMinimo, salarioReceber, valorHoraTrabalhada, salarioBruto, imposto;
  printf("Digite o salario minimo:");
  scanf("%f%*c", &salarioMinimo);
  printf("Digite quantas horas foram trabalhadas:");
  scanf("%f%*c", &horasTrabalhadas);
  valorHoraTrabalhada = salarioMinimo / 2;
  salarioBruto = horasTrabalhadas * valorHoraTrabalhada;
  imposto = salarioBruto * 0.03;
  salarioReceber = salarioBruto - imposto;
  printf("Salario a receber: R$%4.2f", salarioReceber);

  getchar();
  return 0;
}
