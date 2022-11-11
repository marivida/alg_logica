#include <stdio.h>
#include <math.h>

int main()
{
  /*Escreve um programa que exiba todos os nuemros de 1 a 100 e a cada numero que for multiplo de 10, exiba a mensagem "MULTIPLO DE 10"*/

  for (int i = 1; i <= 100; i++)
  {
    if (i % 10 == 0)
    {
      printf("\n%d - MULTIPLO DE 10", i);
    }
    else
    {
      printf("\n%d", i);
    }
  }
}