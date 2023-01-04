#include <stdio.h>

int main()
{
  /*
  Escreva um programa que leia uma matriz 4x5 e ao final exiba a quantidade de numeros pares, a quantidade de numeros impares, a soma dos numeros pares, a soma dos numeros impares, a media dos numeros pares e a media dos numeros impares
  */

  int matriz[4][5], qtdePares = 0, qtdeImpares = 0, somaPares = 0, somaImpares = 0, mediaPares = 0, mediaImpares = 0;

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("Digite o numero da posicao %d %d: ", i, j);
      scanf("%d%*c", &matriz[i][j]);
    }
  }

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (matriz[i][j] % 2 == 0)
      {
        somaPares += matriz[i][j];
        qtdePares += 1;
      }
      else
      {
        somaImpares += matriz[i][j];
        qtdeImpares += 1;
      }
    }
  }

  mediaPares = somaPares / qtdePares;
  mediaImpares = somaImpares / qtdeImpares;

  printf("\nSoma dos numeros pares: %d", somaPares);
  printf("\nSoma dos numeros impares: %d", somaImpares);
  printf("\nQuantidade de numeros pares: %d", qtdePares);
  printf("\nQuantidade de numeros impares: %d", qtdeImpares);
  printf("\nMedia dos numeros pares: %d", mediaPares);
  printf("\nMedia dos numeros impares: %d", mediaImpares);
}