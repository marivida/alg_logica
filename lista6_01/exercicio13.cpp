#include <stdio.h>

int main(void)
{
  /*
  Faça um programa que preencha um vetor com dez números inteiros, calcule e mostre os números superiores a cinquenta e suas respectivas posições. O programa deverá mostrar mensagem se não existir nenhum número nessa condição.
  */
  int vetor[10];
  bool maior = false;

  for (int i = 0; i < 10; i++)
  {
    printf("Digite um numero para o vetor: ");
    scanf("%d%*c", &vetor[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    if (vetor[i] > 50)
    {
      printf("\nNumero %d na posicao %d e maior que 50", vetor[i], i);
      maior = true;
    }
  }

  if (maior == false)
  {
    printf("Nao ha numeros maiores que 50 neste vetor");
  }
}