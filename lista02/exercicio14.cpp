#include <stdio.h>
#include <math.h>

int main()
{

  /*14. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual,
  calcule e mostre:
  a) a idade dessa pessoa;
  b) quantos anos ela terá em 2050.*/
  int anoNascimento, anoAtual, idade, idadeFuturo;
  printf("Digite o ano de nascimento: \n");
  scanf("%d%*c", &anoNascimento);
  printf("Digite o ano atual: \n");
  scanf("%d%*c", &anoAtual);
  idade = anoAtual - anoNascimento;
  idadeFuturo = 2050 - anoNascimento;
  printf("Sua idade e %d ", idade);
  printf("\nEm 2050 voce tera %d anos", idadeFuturo);

  getchar();
  return 0;
}
