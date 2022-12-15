#include <stdio.h>
#include <string.h>

int main()
{
  /*Faça um programa que apresente o menu a seguir, permita ao usuario escolher a opcao desejada, receba os dados necessarios para executar a operacao e mostre o resultado. Verifique a possibilidade de opcao invalida e nao se preocupe com restricoes, como salario negativo.

    Menu de opcoes:
    1. Imposto
    2. Novo salario
    3. Classificacao
    Digite a opcao desejada

  Na opcao 1: receber o salario de um funcionario, calcular e mostrar o valor do imposto usando as regras a seguir:
    salario < 500 - imposto 5%
    salario >= 500 e <= 850 - imposto 10%
    salario > 850 - imposto 15%
    */

  int opcao = 0;
  float salario, taxaImposto, valorImposto, aumento, novoSalario;
  char classificacao[50];

  printf("Menu de opcoes: \n1. Imposto \n2. Novo salario \n3. Classificacao\n\nDigite a opcao desejada:");
  scanf("%d%*c", &opcao);

  switch (opcao)
  {
  case 1:
    printf("\nOpcao 1: Imposto");
    printf("Digite o salario do funcionario:");
    scanf("%f%*c", &salario);
    if (salario < 500)
    {
      taxaImposto = 0.05;
    }
    else if (salario >= 500 && salario <= 850)
    {
      taxaImposto = 0.1;
    }
    else
    {
      taxaImposto = 0.15;
    }
    valorImposto = salario * taxaImposto;
    printf("Valor do imposto: %3.2f \n", valorImposto);
    break;

  case 2:
    printf("\nOpcao 2: Novo salario.\n");
    printf("Digite o salario do funcionario:");
    scanf("%f%*c", &salario);
    if (salario > 1500)
    {
      aumento = 25;
    }
    else if (salario >= 750 && salario <= 1500)
    {
      aumento = 50;
    }
    else if (salario >= 450 && salario < 750)
    {
      aumento = 75;
    }
    else
    {
      aumento = 100;
    }
    novoSalario = salario + aumento;
    printf("Novo salario: %3.2f\n", novoSalario);
    break;

  case 3:
    printf("\nOpcao 3: Classificacao.\n");
    printf("Digite o salario do funcionario: ");
    scanf("%f%*c", &salario);
    if (salario <= 700)
    {
      strcpy(classificacao, "Mal remunerado");
    }
    else
    {
      strcpy(classificacao, "Bem remunerado");
    }
    printf("Classificacao do funcionario: %s\n", classificacao);
    break;

  default:
    break;
  }
  return 0;
  getchar();
}