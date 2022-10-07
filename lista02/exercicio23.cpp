#include <stdio.h>
#include <math.h>

int main()
{

  /* 23. Faça um programa que receba um número real, encontre e mostre:
  a) a parte inteira desse número;
  b) a parte fracionária desse número;
  c) o arredondamento desse número.*/

  float numero, pInteira, pFracao, arred;
  printf("Digite um numero real: ");
  scanf("%f%*c", &numero);
  pFracao = modf(numero, &pInteira);
  arred = round(numero);
  printf("Parte inteira do numero: \t %.0f", pInteira);
  printf("\nParte fracionaria do numero: \t %3.2f", pFracao);
  printf("\nNumero arredondado: \t\t %.0f", arred);
  getchar();
  return 0;
}
