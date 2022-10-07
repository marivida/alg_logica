#include <stdio.h>
#include <math.h>

int main()
{

  /*15. O custo ao consumidor de um carro novo é a soma do preço de fábrica com o
  percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça
  um programa que receba o preço de fábrica de um veículo, o percentual de lucro do
  distribuidor e o percentual de impostos, calcule e mostre:
  a) o valor correspondente ao lucro do distribuidor;
  b) o valor correspondente aos impostos;
  c) o preço final do veículo.*/
  float precoFabrica, percLucro, percImposto, valorLucro, valorImposto, precoFinal;
  printf("Digite o preco de fabrica do carro: \n");
  scanf("%f%*c", &precoFabrica);
  printf("Digite o percentual de lucro do distribuidor: \n");
  scanf("%f%*c", &percLucro);
  printf("Digite o percentual de impostos: \n");
  scanf("%f%*c", &percImposto);
  valorLucro = precoFabrica * (percLucro / 100);
  valorImposto = precoFabrica * (percImposto / 100);
  precoFinal = precoFabrica + valorLucro + valorImposto;
  printf("Valor do lucro do distribuidor: R$%4.2f ", valorLucro);
  printf("\nValor dos impostos: R$%4.2f", valorImposto);
  printf("\nPreco final do carro: R$%4.2f", precoFinal);

  getchar();
  return 0;
}
