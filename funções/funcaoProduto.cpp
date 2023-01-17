#include <stdio.h>

float produto(float a, float b)
{
  return (a * b);
}

int main()
{
  float numero1, numero2;

  printf("Digite os numeros a serem multiplicados:\n");
  scanf("%f", &numero1);
  scanf("%f", &numero2);

  printf("\nResultado: %.2f\n", produto(numero1, numero2));
}