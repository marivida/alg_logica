#include <stdio.h>

int teste(int a)
{
  a++;
  printf("Estou dentro da funcao! A variavel foi alterada, e aqui dentr vale: a = %d\n\n", a);
  return a;
}

int main(void)
{
  int num1 = 1;

  printf("Valor inicial de 'num1': %d\n\n", num1);
  num1 = teste(num1);
  printf("Valor de 'num1' apos receber return da funcao: %d\n", num1);
}