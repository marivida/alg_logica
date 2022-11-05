#include <stdio.h>
#include <math.h>

int main()
{
  // Faça um programa para resolver esquções do 2º grau
  float a, b, c, x, x1, x2, delta;
  printf("Entre com a variavel a: ");
  scanf("%f%*c", &a);
  printf("Entre com a variavel b: ");
  scanf("%f%*c", &b);
  printf("Entre com a variavel c: ");
  scanf("%f%*c", &c);
  if (a == 0)
    printf("Nao e uma equacao do segundo grau.");
  else
  {
    delta = pow(b, 2) - 4 * a * c;
    if (delta < 0)
      printf("Nao existe raiz real.");
    else if (delta == 0)
    {
      x = (-b) / (2 * a);
      printf("Raiz = %f", x);
    }
    else
    {
      x1 = (-b + sqrt(delta)) / (2 * a);
      x2 = (-b - sqrt(delta)) / (2 * a);
      printf("Raiz 1: %f", x1);
      printf("\nRaiz 2: %f", x2);
    }
  }
}
