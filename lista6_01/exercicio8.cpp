#include <stdio.h>

int main()
{
  /*
  Faça um programa que preencha dois vetores com cinco elementos numericos cada e, depois, ordene-os de maneira crescente. Deverá ser gerado um terceiro vetor com dez posições, composto pela junção dos elementos dos vetores anteriores, também ordenado de maneira crescente
  */

  int vetorA[5], vetorB[5], vetorC[10], temporario;

  for (int i = 0; i < 5; i++)
  {
    printf("Digite um numero para o vetor A: ");
    scanf("%d%*c", &vetorA[i]);
  }

  printf("\nVetor A: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d -- ", vetorA[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      if (vetorA[i] > vetorA[j])
      {
        temporario = vetorA[j];
        vetorA[j] = vetorA[i];
        vetorA[i] = temporario;
      }
    }
  }

  printf("\nVetor A ordenado: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d -- ", vetorA[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("Digite um numero para o vetor B: ");
    scanf("%d%*c", &vetorB[i]);
  }

  printf("\nVetor B: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d -- ", vetorB[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      if (vetorB[i] > vetorB[j])
      {
        temporario = vetorB[j];
        vetorB[j] = vetorB[i];
        vetorB[i] = temporario;
      }
    }
  }

  printf("\nVetor B ordenado: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d -- ", vetorB[i]);
  }

  for (int i = 1; i < 10; i++)
  {
    int dobro = (i * 2) - 2;

    vetorC[dobro] = vetorA[i - 1];
    vetorC[dobro + 1] = vetorB[i - 1];
  }

  printf("\n\nVetor C: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d -- ", vetorC[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    for (int j = i + 1; j < 10; j++)
    {
      if (vetorC[i] > vetorC[j])
      {
        temporario = vetorC[j];
        vetorC[j] = vetorC[i];
        vetorC[i] = temporario;
      }
    }
  }

  printf("\nVetor C ordenado: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d -- ", vetorC[i]);
  }
}