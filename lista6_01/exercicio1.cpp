#include <stdio.h>

int main()
{
  /*Faça um programa que preencha um vetor com nove números inteiros, calcule e mostre os números primos e suas respectivas posições*/
  int vetor[9], i, resultado, j;

  for (i = 0; i < 9; i++)
  {
    printf("Digite um numero - Vetor na posicao [%d]\t", i);
    scanf("%d%*c", &vetor[i]);
  }

  printf("\n\nVetor: ");
  for (i = 0; i < 9; i++)
  {
    printf("%d -- ", vetor[i]);
  }

  for (i = 0; i < 9; i++)
  {
    resultado = 0;

    for (j = 2; j < vetor[i]; j++)
    {
      if (vetor[i] % j == 0)
      {
        resultado++;
        break;
      }
    }

    if (resultado == 0)
    {
      printf("\nO numero %d, na posicao [%d], e um numero primo", vetor[i], i);
    }
  }
  return 0;
  getchar();
}