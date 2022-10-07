#include <stdio.h>
#include <math.h>

int main()
{

  // 12.Faça um programa que receba dois números maiores que zero, calcule e mostre
  //  um elevado ao outro.
  float n1, n2, potencia;
  printf("Digite dois numeros positivos: \n");
  scanf("%f%*c", &n1);
  scanf("%f%*c", &n2);
  potencia = pow(n1, n2);
  printf("Resultado da potencia: %4.2f", potencia);

  getchar();
  return 0;
}
