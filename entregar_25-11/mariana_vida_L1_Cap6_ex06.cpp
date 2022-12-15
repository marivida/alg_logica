#include <stdio.h>

int main()
{
  /*Faça um programa que preencha um vetor com dez numeros inteiros, calcule e mostre o vetor resultante de uma ordenacao decrescente*/

  int i, numero, temporario, vetor[10], j;

  for (i = 0; i < 10; i++)
  {
    printf("Digite um numero - Vetor na posicao [%d]\t", i);
    scanf("%d%*c", &vetor[i]);
  }

  printf("\nVetor: ");
  for (i = 0; i < 10; i++)
  {
    printf("%d -- ", vetor[i]);
  }

  for (i = 0; i < 10; i++)
  {
    for (j = i + 1; j < 10; j++)
    {
      if (vetor[i] < vetor[j])
      {
        temporario = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temporario;
      }
    }
  }

  printf("\nVetor ordenado: ");
  for (i = 0; i < 10; i++)
  {
    printf("%d -- ", vetor[i]);
  }

  return 0;
  getchar();
}