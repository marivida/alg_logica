#include <stdio.h>

main()
{
  int matrizA[2][10];
  int i, j;

  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 10; j++)
    {
      printf("\nDigite o %d %d elemento da matriz: ", i, j);
      scanf("%d", &matrizA[i][j]);
    }
  }

  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 10; j++)
    {
      printf("\nO elemento da posicao %d %d e: %d", i, j, matrizA[i][j]);
    }
  }
  return 0;
}