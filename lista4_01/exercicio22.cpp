#include <stdio.h>
#include <math.h>

/*Faça um programa que receba o salario base e o tempo de serviço de um funcionário. Calcule e mostre:

  - O imposto, conforme a tabela a seguir:
    - salario base < 200 - isento
    - salario base >= 200 e <= 450 - 3%
    - salario base > 450 e <700 - 8%
    - salario base >= 700 - 12%

  -A gratificação, de acordo com a tabela a seguir:
    - salario base > 500 e tempo de serviço até 3 anos - 20
    - salario base > 500 e tempo de serviço + 3 anos - 30
    - salario base <= 500 e tempo serviço até 3 anos - 23
    - salario base <= 500 e tempo serviço entre 3 e 6 anos - 35
    - salario base <= 500 e tempo serviço + 6 anos - 33

  - O salario liquido, ou seja, salário base menos imposto mais gratificação
  - A categoria, que está na tabela a seguir:
    - salario liquido <=350 - classificação A
    - salario liquido > 350 e < 600 - classificação B
    - salario liquido >= 600 - classificação C */

int main()
{
  float salario_base, taxa_imposto, imposto, gratificacao, salario_liquido;
  int tempo_servico;
  char categoria;

  printf("Digite o salario base: ");
  scanf("%f%*c", &salario_base);
  printf("Digite o tempo de servico: ");
  scanf("%d%*c", &tempo_servico);

  if (salario_base < 200)
    taxa_imposto = 0;
  else if (salario_base >= 200 && salario_base <= 450)
    taxa_imposto = 0.03;
  else if (salario_base > 450 && salario_base < 700)
    taxa_imposto = 0.08;
  else
    taxa_imposto = 0.12;

  if (salario_base > 500 && tempo_servico <= 3)
    gratificacao = 20;
  else if (salario_base > 500 && tempo_servico > 3)
    gratificacao = 30;
  else if (salario_base <= 500 && tempo_servico <= 3)
    gratificacao = 23;
  else if (salario_base <= 500 && tempo_servico > 3 && tempo_servico < 6)
    gratificacao = 35;
  else
    gratificacao = 33;

  if (salario_liquido <= 350)
    categoria = 'A';
  else if (salario_liquido > 350 && salario_liquido < 600)
    categoria = 'B';
  else
    categoria = 'C';

  imposto = salario_base * taxa_imposto;
  salario_liquido = salario_base - imposto + gratificacao;

  printf("\nTaxa de imposto: %3.2f", taxa_imposto);
  printf("\nValor do Imposto: %3.2f", imposto);
  printf("\nGratificacao: %3.2f", gratificacao);
  printf("\nSalario liquido: %3.2f", salario_liquido);
  printf("\nCategoria: %c", categoria);
}