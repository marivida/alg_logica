#include <stdio.h>
#include <math.h>

int main()
{
  /*Faça um programa que receba:
  - o codigo de um produto comprado, supondo que a digitacao do
  codigo do produto seja sempre valida, isto é, um numero
  inteiro entre 1 e 10
  - o peso do produto em quilos
  - o codigo do pais de origem, supondo que a digitacao do
  codigo seja sempre valid, isto e, um numero inteiro entre
  1 e 3

  TABELAS:
    pais 1 - imposto 0%
    pais 2 - imposto 15%
    pais 3 - imposto 25%

    código 1 a 4 - preço por grama 10
    código 5 a 7 - preço por grama 25
    código 8 a 10 - preço por grama 35

    Calcule e mostre:
    - o peso do produto convertido em gramas
    - o preço total do produto comprado
    - o valor do imposto, sabendo que ele é cobrado sobre o
    preço total do produto comprado e depende do país de origem
    - o valor total, preço total do produto mais imposto*/

  float pesoQuilos, pesoGramas, precoGrama, precoProduto, taxaImposto, valorImposto, valorTotal;
  int codigoProduto, codigoPais;

  printf("Digite o codigo do produto (1 a 10): ");
  scanf("%d%*c", &codigoProduto);
  printf("Digite o peso do produto em quilos: ");
  scanf("%f%*c", &pesoQuilos);
  printf("Digite o codigo do pais de origem (1 a 3): ");
  scanf("%d%*c", &codigoPais);

  pesoGramas = pesoQuilos * 1000;

  switch (codigoProduto)
  {
  case (1 || 2 || 3 || 4):
    precoGrama = 10;
    break;

  case 5:
    precoGrama = 25;
    break;

  case 6:
    precoGrama = 25;
    break;

  case 7:
    precoGrama = 25;
    break;

  default:
    precoGrama = 35;
    break;
  }

  switch (codigoPais)
  {
  case 1:
    taxaImposto = 0;
    break;

  case 2:
    taxaImposto = 0.15;
    break;

  default:
    taxaImposto = 0.25;
    break;
  }

  precoProduto = precoGrama * pesoGramas;
  valorImposto = precoProduto * taxaImposto;
  valorTotal = precoProduto + valorImposto;

  printf("\nPeso em gramas: %3.2f", pesoGramas);
  printf("\nPreco do produto: %3.2f", precoProduto);
  printf("\nValor do imposto: %3.2f", valorImposto);
  printf("\nValor total do produto: %3.2f", valorTotal);
}