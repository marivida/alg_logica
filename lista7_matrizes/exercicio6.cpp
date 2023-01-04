#include <stdio.h>

int main()
{
  /*
  Faça um programa que carregue uma matriz M 4x6 e uma segunda matriz N 6x4, calcule e imprima a soma das linhas M com as colunas de N
  */

  int matrizM[4][6] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
  int matrizN[6][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
  int somaLinha1 = 0, somaLinha2 = 0, somaLinha3 = 0, somaLinha4 = 0, somaColuna1 = 0, somaColuna2 = 0, somaColuna3 = 0, somaColuna4 = 0, soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      if (i == 0)
      {
        somaLinha1 += matrizM[i][j];
      }
      else if (i == 1)
      {
        somaLinha2 += matrizM[i][j];
      }
      else if (i == 2)
      {
        somaLinha3 += matrizM[i][j];
      }
      else
      {
        somaLinha4 += matrizM[i][j];
      }
    }
  }

  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (j == 0)
      {
        somaColuna1 += matrizN[i][j];
      }
      else if (j == 1)
      {
        somaColuna2 += matrizN[i][j];
      }
      else if (j == 2)
      {
        somaColuna3 += matrizN[i][j];
      }
      else
      {
        somaColuna4 += matrizN[i][j];
      }
    }
  }

  soma1 = somaLinha1 + somaColuna1;
  soma2 = somaLinha2 + somaColuna2;
  soma3 = somaLinha3 + somaColuna3;
  soma4 = somaLinha4 + somaColuna4;

  // for (int i = 0; i < 4; i++)
  // {
  //   for (int j = 0; j < 4; j++)
  //   {
  //     if (i + 1 == 1 && j + 1 == 1)
  //     {
  //       soma1 = soma1 + matrizM[i][j] + matrizN[j][i];
  //     }
  //     else if (i + 1 == 2 && j + 1 == 2)
  //     {
  //       soma2 = soma2 + matrizM[i][j] + matrizN[j][i];
  //     }
  //     else if (i + 1 == 3 && j + 1 == 3)
  //     {
  //       soma3 = soma3 + matrizM[i][j] + matrizN[j][i];
  //     }
  //     else if (i + 1 == 4 && j + 1 == 4)
  //       ;
  //     {
  //       soma4 = soma4 + matrizM[i][j] + matrizN[j][i];
  //     }
  //   }
  // }

  printf("\nSoma linha 1 da M e coluna 1 da N: %d", soma1);
  printf("\nSoma linha 2 da M e coluna 2 da N: %d", soma2);
  printf("\nSoma linha 3 da M e coluna 3 da N: %d", soma3);
  printf("\nSoma linha 4 da M e coluna 4 da N: %d", soma4);
}