#include <stdio.h>
#include <math.h>

int main()
{
  /*Faça um programa que mostre o menu de opçoes a seguir, receba a opcao do usuario e os dados necessarios para executar cada operacao:

    Menu de opcoes:
    1. Somar dois números
    2. Raiz quadrada de um número
    Digite a opcao desejada:*/

  int opcao;
  float numero1, numero2, soma, raiz;

  printf("\nMenu de opcoes: \n1. Somar dois numeros \n2. Raiz quadrada de um numero \n\nDigite a opcao desejada:");
  scanf("%d%*c", &opcao);

  switch (opcao)
  {
  case 1:
    printf("\nOpcao 1: Somar dois numeros.");
    printf("\nDigite o primeiro numero:");
    scanf("%f%*c", &numero1);
    printf("Digite o segundo numero:");
    scanf("%f%*c", &numero2);
    soma = numero1 + numero2;
    printf("\nA soma dos numeros e: %f", soma);
    break;

  case 2:
    printf("\nOpcao2: Raiz quadrada de um numero.");
    printf("\nDigite o numero desejado:");
    scanf("%f%*c", &numero1);
    raiz = sqrt(numero1);
    printf("A raiz quadrada do numero %3.2f e: %3.2f", numero1, raiz);
    break;

  default:
    break;
  }
}