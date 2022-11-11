#include <stdio.h>
#include <math.h>

int main()
{
  /*Escreva um programa que exiba na tela a tabuada de um número que deverá ser informado pelo usuário (deverá ser udada qualquer estrutura de repetição)*/

  int numero, resultado;
  printf("Digite um numero:");
  scanf("%d%*c", &numero);
  printf("\nTabuada do %d:", numero);
  for (int i = 0; i <= 10; i++)
  {
    resultado = numero * i;
    printf("\n%d x %d = %d", numero, i, resultado);
  }
}