#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calcularImposto();
void fnovoSalario();
void fclassificacao();

float salario, taxaImposto, valorImposto, valorAumento, novoSalario;
int opcao;
char classificacao[50];

int main()
{

  do
  {
    printf("\nMenu de opcoes: \n1. Imposto \n2. Novo salario \n3. Classificacao \n4. Finalizar o programa \n\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      calcularImposto();
      break;
    case 2:
      fnovoSalario();
      break;
    case 3:
      fclassificacao();
      break;
    case 4:
      break;
    default:
      printf("Opcao invalida, tente novamente!\n");
      opcao = 0;
      break;
    }
    printf("-----------------------------------------------\n");
  } while (opcao == 0 || opcao == 1 || opcao == 2 || opcao == 3);
  printf("\n\nObrigada por usar o sistema!\n");

  return 0;
  getchar();
}

void calcularImposto()
{
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
}

void fnovoSalario()
{
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
}

void fclassificacao()
{
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
}