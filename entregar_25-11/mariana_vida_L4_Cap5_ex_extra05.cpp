#include <stdio.h>
#include <math.h>
int main()
{
  /*Escreva um programa que calcule o fatorial de um número informado pelo usuário. Dica: o fatorial de um número N é dado pela fórmula: N! = 1 * 2 * 3 * 4 * 5 * ... * N */

  int numero, multiplicacao = 1;
  printf("Digite um numero:");
  scanf("%d%*c", &numero);

  for (int i = 1; i <= numero; i++)
  {
    multiplicacao *= i;
  }

  printf("\nO fatorial do numero %d e %d", numero, multiplicacao);
}