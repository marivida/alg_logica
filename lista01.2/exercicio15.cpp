#include <stdio.h>
#include <math.h>

int main()
{
  /* 15. Faça um programa que receba o valor do salario minimo,
  o número de horas trabalhadas, o numero de dependentes do
  funcionario e a quantidade de horas extras trabalhadas;
  Calcule e mostre o salario a receber do funcionario de acordo
  com as regras a seguir:
  - o valor da hora trabalhada e igual a 1/5 do salario minimo
  - o salario do mes e igual ao numero de horas trabalhadas
  multiplicado pelo valor da hora trabalhada
  - para cada dependente, acrescentar R$ 32,00
  - para cada hora extra trabalhada, calcular o valor da hora
  trabalhada acrescida de 50%
  - o salario bruto e igual ao salario do mes mais o valor dos
  dependentes mais o valor das horas extras
  - calcular o valor do imposto de renda retido na fonte de
  acordo com a tabela a seguir:
    bruto < 200 - isento
    bruto 200 à 500 - 10%
    bruto > 500 - 20%

  - o salario liquido e igual ao salario bruto menos IRRF
  - a gratificacao e de acordo com a tabela a seguir:
    liquido <= 350 - 100
    liquido > 350 - 50

  - o salario a receber do funcionario e igual ao salario
  liquido mais a gratificacao*/

  float salarioMinimo, horasTrabalhadas, numeroDependentes, horasExtrasTrabalhadas, salarioMes, valorDependentes, salarioReceber, valorHoraTrabalhada, valorHoraExtraTrabalhada, pagarHoraextra, salarioBruto, irrf, salarioLiquido, gratificacao;

  printf("Digite o valor do salario minimo: ");
  scanf("%f%*c", &salarioMinimo);
  printf("Digite o numero de horas trabalhadas: ");
  scanf("%f%*c", &horasTrabalhadas);
  printf("Digite o numero de dependentes: ");
  scanf("%f%*c", &numeroDependentes);
  printf("Digite o numero de horas extras trabalhadas: ");
  scanf("%f%*c", &horasExtrasTrabalhadas);
  valorHoraTrabalhada = salarioMinimo / 5;
  salarioMes = horasTrabalhadas * valorHoraTrabalhada;
  valorDependentes = numeroDependentes * 32;
  valorHoraExtraTrabalhada = valorHoraTrabalhada * 1.5;
  pagarHoraextra = valorHoraExtraTrabalhada * horasExtrasTrabalhadas;
  salarioBruto = salarioMes + valorDependentes + pagarHoraextra;

  if (salarioBruto < 200)
    irrf = 0;
  else if (salarioBruto >= 200 && salarioBruto <= 500)
    irrf = salarioBruto * 0.1;
  else
    irrf = salarioBruto * 0.2;

  salarioLiquido = salarioBruto - irrf;

  if (salarioLiquido <= 350)
    gratificacao = 100;
  else
    gratificacao = 50;

  salarioReceber = salarioLiquido + gratificacao;

  printf("\nvalor hora trabalhada: %f", valorHoraTrabalhada);
  printf("\n\nsalario mes: %f", salarioMes);
  printf("\n\nvalor dependentes: %f", valorDependentes);
  printf("\n\nvalor hora extra trabalhada: %f", valorHoraExtraTrabalhada);
  printf("\n\npagar hora extra: %f", pagarHoraextra);
  printf("\n\nsalario bruto: %f", salarioBruto);
  printf("\n\nvalor IRRF: %f", irrf);
  printf("\n\nsalario liquido: %f", salarioLiquido);
  printf("\n\nsalario a receber: %f", salarioReceber);
}
