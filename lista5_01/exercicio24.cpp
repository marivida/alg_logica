#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  /*Faça um programa que apresente o menu de opções a seguir, permita ao usuario escolher a opcao desejada, receba os dados necessarios para executar a operacao e mostre o resultado. Verifique a possibilidade de opcao invalida e nao se preocupe com restricoes do tipo salario invalido

  Menu de opcoes:
  1. Imposto
  2. Novo salario
  3. Classificacao
  4. Finalizar o programa
  Digite a opcao desejada

  Na opcao 1: receber o salario de um funcionario, calcular e mostrar o valor do imposto usando as regras a seguir:
    salario < 500 - imposto 0.05
    salario >= 500 e <= 850 - imposto 0.1
    salario > 850 - imposto 0.15

  Na opcao 2: receber o salario de um funcionario, calcular e mostrar o valor do novo salario usando as regras a seguir:
    salario > 1500 - aumento $25
    salario >= 750 e <= 1500 - aumento $50
    salario >= 450 e < 750 - aumento $75
    salario < 450 - aumento $100

  Na opcao 3: receber o salario de um funcionario e mostrar sua classificacao usando esta tabela:
    salario <= 700 - classificacao "Mal remunerado"
    salario > 700 - classificacao "Bem remunerado"*/

  int opcao;
  float salario, taxaImposto, valorImposto, valorAumento, novoSalario;
  char classificacao[50];

  do
  {
    printf("\nMenu de opcoes: \n1. Imposto \n2. Novo salario \n3. Classificacao \n4. Finalizar o programa \n\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      printf("\nOpcao 1: Calcular Imposto");
      printf("\nDigite o salario do funcionario: ");
      scanf("%f%*c", &salario);

      if (salario < 500)
      {
        taxaImposto = 0.05;
      }
      else if (salario >= 500 && salario >= 850)
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
      printf("\nOpcao 2: Calcular novo salario:");
      printf("\nDigite o salario do funcionario: ");
      scanf("%f%*c", &salario);
      if (salario > 1500)
      {
        valorAumento = 25;
      }
      else if (salario >= 750 && salario <= 1500)
      {
        valorAumento = 50;
      }
      else if (salario >= 450 && salario < 750)
      {
        valorAumento = 75;
      }
      else
      {
        valorAumento = 100;
      }
      novoSalario = salario + valorAumento;
      printf("Valor do novo salario: %3.2f\n", novoSalario);
      break;

    case 3:
      printf("\nOpcao 3: Mostrar classificacao:");
      printf("\nDigite o salario do funcionario: ");
      scanf("%f%*c", &salario);
      if (salario <= 700)
      {
        strcpy(classificacao, "Mal remunerado");
      }
      else
      {
        strcpy(classificacao, "Bem remunerado");
      }
      printf("Classificacao: %s \n", classificacao);
      break;

    case 4:
      break;

    default:
      printf("Opcao invalida, tente novamente!\n");
      opcao = 0;
      break;
    }
    // getchar();
    // system("cls");
    printf("-----------------------------------------------\n");
  } while (opcao == 0 || opcao == 1 || opcao == 2 || opcao == 3);
  printf("\n\nObrigada por usar o sistema!\n");
}