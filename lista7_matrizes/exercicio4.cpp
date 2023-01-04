#include <stdio.h>

int main()
{
  /*
  Exiba a media dos numeros armazenados em uma matriz 3x3
  */

  int matriz[3][3], somaMatriz = 0, mediaMatriz = 0, qtdeNumeros = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("Digite o numero da posicao %d %d: ", i, j);
      scanf("%d%*c", &matriz[i][j]);
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      somaMatriz += matriz[i][j];
      qtdeNumeros += 1;
    }
  }

  mediaMatriz = somaMatriz / qtdeNumeros;
  printf("\nSoma dos numeros da matriz: %d", somaMatriz);
  printf("\nMedia dos numeros da matriz: %d", mediaMatriz);
}