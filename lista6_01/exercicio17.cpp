#include <stdio.h>

int main()
{
  /*
  Faça um programa que receba seis numeros inteiros e mostre:
  - os numeros pares digitados
  - a soma dos numeros pares digitados
  - os numeros impares digitados
  - a quantidade de numeros impares digitados
  */

  int vetor[6], somaPares = 0, qtdeImpares = 0;

  for (int i = 0; i < 6; i++)
  {
    printf("Digite um numero para o vetor: ");
    scanf("%d%*c", &vetor[i]);
  }

  printf("\nVetor: \n");
  for (int i = 0; i < 6; i++)
  {
    printf("%d -- ", vetor[i]);
  }

  printf("\n\nRelatorio:");

  printf("\n\nOs numeros pares sao: ");
  for (int i = 0; i < 6; i++)
  {
    if (vetor[i] % 2 == 0)
    {
      printf("\nnumero %d na posicao %d", vetor[i], i+1);
      somaPares += vetor[i];
    }
  }
  printf("\n\nSoma dos pares = %d", somaPares);

  printf("\n\nOs numeros impares sao: ");
  for (int i = 0; i < 6; i++)
  {
    if (vetor[i] % 2 != 0)
    {
      printf("\nnumero %d na posicao %d", vetor[i], i+1);
      qtdeImpares += 1;
    }
  }
  printf("\n\nQuantidade de impares = %d", qtdeImpares);
}