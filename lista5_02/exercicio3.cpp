#include <stdio.h>
#include <math.h>

int main()
{
  int numero, maior = 0;
  for (int i = 0; i < 15; i++)
  {
    printf("Digite um numero:");
    scanf("%d%*c", &numero);
    if (numero > maior)
    {
      maior = numero;
    }
  }
  printf("Maior numero da sequencia: %d", maior);
}