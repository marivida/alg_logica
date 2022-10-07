#include <stdio.h>
#include <math.h>

int main()
{

  /* Exercício 19 - Cada degrau de uma escada tem X de altura. Faça um programa que receba essa
  altura e a altura que o usuário deseja alcançar subindo a escada, calcule e mostre
  quantos degraus ele deverá subir para atingir seu objetivo, sem se preocupar com a
  altura do usuário. Todas as medidas fornecidas devem estar em metros.*/
  float alturaDegrau, altura, qtdeDegrau;
  printf("Digite a altura do degrau em centimetros: ");
  scanf("%f%*c", &alturaDegrau);
  printf("Digite a altura que deseja alcancar em metros: ");
  scanf("%f%*c", &altura);
  qtdeDegrau = altura / alturaDegrau;
  printf("Para alcancar %4.2f metros voce devera subir %4.2f degraus de %4.2f centimetros cada", altura, qtdeDegrau, alturaDegrau);
  getchar();
  return 0;
}
