#include <stdio.h>

int main()
{
  /*
  Escreva um programa que leia uma matriz (3x5 ou 5x3) de 15 numeros inteiros e exiba ao final a soma dos valores de cada linha que estao armazenados nesta matriz
  */

  int matriz[3][5], soma1 = 0, soma2 = 0, soma3 = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("Digite o numero %d %d da matriz: ", i, j);
      scanf("%d%*c", &matriz[i][j]);
    }
  }

  printf("\nMatriz: ");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("\nElemento da posicao %d %d eh %d", i, j, matriz[i][j]);
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (i == 0)
      {
        soma1 += matriz[i][j];
      }
      else if (i == 1)
      {
        soma2 += matriz[i][j];
      }
      else
      {
        soma3 += matriz[i][j];
      }
    }
  }

  printf("\nSoma da linha 1: %d", soma1);
  printf("\nSoma da linha 2: %d", soma2);
  printf("\nSoma da linha 3: %d", soma3);
}