#include <stdio.h>

int main()
{
  /*
  Criar 2 matrizes 3x4, somar seus valores e armazenar o resultado em uma terceira matriz 3x4
  */

  int matrizA[3][4], matrizB[3][4], matrizC[3][4];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("Numero posicao %d %d da matriz A: ", i, j);
      scanf("%d%*c", &matrizA[i][j]);
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("Numero posicao %d %d da matriz B: ", i, j);
      scanf("%d%*c", &matrizB[i][j]);
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
    }
  }

  printf("\nMatriz C: ");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("\nElemento %d %d da matriz C: %d", i, j, matrizC[i][j]);
    }
  }
}