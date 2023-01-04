#include <stdio.h>

int main()
{
  /*
  Faça um programa que carregue uma matriz 5x5 de numeros reais, calcule e mostre a media dos elementos das linhas pares da matriz
  */

  float matriz[5][5], soma1, media1, soma2, media2;

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("Digite o numero da posicao %d %d: ", i, j);
      scanf("%f%*c", &matriz[i][j]);
    }
  }

  for (int i = 0; i < 5; i++)
  {
    if ((i + 1) % 2 == 0)
    {
      for (int j = 0; j < 5; j++)
      {
        if (i + 1 == 2)
        {
          soma1 += matriz[i][j];
        }
        else
        {
          soma2 += matriz[i][j];
        }
      }
    }
  }

  media1 = soma1 / 5;
  media2 = soma2 / 5;

  printf("\nSoma da linha 2: %2.2f", soma1);
  printf("\nMedia da linha 2: %2.2f", media1);

  printf("\nSoma da linha 4: %2.2f", soma2);
  printf("\nMedia da linha 4: %2.2f", media2);
}