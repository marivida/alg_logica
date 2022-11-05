#include <stdio.h>

int main()
{
  /*Faça um programa que monte os oito primeiros termos da sequencia de Fibonacci
    0 - 1 - 1 - 2 - 3 - 5 - 8 - 13
  */
  int i, n1, n2, n3;
  n1 = 0;
  n2 = 1;

  printf("%d -- %d -- ", n1, n2);

  for (i = 0; i < 6; i++)
  {
    n3 = n1 + n2;
    printf("%d -- ", n3);
    n1 = n2;
    n2 = n3;
  }
  getchar();
  return 0;
}