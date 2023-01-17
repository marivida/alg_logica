#include <stdio.h>

int soma(int a, int b)
{
  int resultado;
  resultado = a + b;
  return resultado;
}

int main()
{
  int numero1, numero2, resultado;

  printf("\nDigite o primeiro numero: ");
  scanf("%d", &numero1);

  printf("\nDigite o segundo numero: ");
  scanf("%d", &numero2);

  resultado = soma(numero1, numero2);

  printf("\nResultado da soma: %d", resultado);
}