#include <stdio.h>
#include <string.h>

int main()
{
  /*Faça um programa que receba o preço unitario, a refrigeração (S para os produtos que necessitem de refrigeracao e N para os que nao necessitem) e a categoria (A - alimentacao, L - limpeza, e V - vestuario) de doze produtos, e que calcule e mostre:
  - o custo de estocagem calculado de acordo com a tabela a seguir:
    preco <= 20 - cat. A - custo = 2
    preco <= 20 - cat. L - custo = 3
    preco <= 20 - cat. V - custo = 4
    preco >20 e <=50 - refri. S - custo = 6
    preco >20 e <=50 - refri. N - custo = 0
    preco >50 - refri. S - cat. A - custo = 5
    preco >50 - refri. S - cat. L - custo = 2
    preco >50 - refri. S - cat. V - custo = 4
    preco >50 - refri. N - cat. A ou V - custo = 0
    preco >50 - refri. N - cat. L - custo = 1

  - O imposto calculado de acordo com as regras a seguir:
    Requisitos são: categoria - A e refrigeração - S
    Se o produto não preencher nenhum dos requisitos, seu imposto será de 2% sobre o preco unitario, caso contrario sera de 4%
  - o preço final, ou seja preço unitário mais custo de estocagem mais imposto

  - A classificacao calculada usando a tabela a seguir:
    preco final <= 20 - classificacao = Barato
    preco final > 20 e <= 100 - classificacao = Normal
    preco final > 100 - classificacao = Caro

  - A media dos valores adicionais, ou seja, a media dos custos de estocagem e dos impostos dos doze produtos
  - O maior preco final
  - O menor preco final
  - O total dos impostos
  - A quantidade de produtos com classificaçao barato
  - A quantidade de produtos com classificacao caro
  - A quantidade de produtos com classificacao normal
  */

  float preco_unitario, custo_estocagem, taxa_imposto, valor_imposto, preco_final, soma_estocagem = 0, media_estocagem, soma_imposto = 0, media_imposto, maior_preco_final = 0, menor_preco_final = 0;
  int contador_barato = 0, contador_caro = 0, contador_normal = 0, qtde_produtos = 12;
  char refrigeracao, categoria, classificacao[50];

  for (int i = 0; i < qtde_produtos; i++)
  {
    printf("\nDigite o preco unitario: ");
    scanf("%f%*c", &preco_unitario);
    printf("\nDigite 'S' para refrigeracao ou 'N' que nao precisa de refrigeracao: ");
    scanf("%c%*c", &refrigeracao);
    printf("\n\nTipos de categoria: \nA - alimentacao \nL - limpeza \nV - vestuario");
    printf("\nDigite o tipo de categoria:");
    scanf("%c%*c", &categoria);

    if (preco_unitario <= 20 && categoria == 'A')
    {
      custo_estocagem = 2;
    }
    else if (preco_unitario <= 20 && categoria == 'L')
    {
      custo_estocagem = 3;
    }
    else if (preco_unitario <= 20 && categoria == 'V')
    {
      custo_estocagem = 4;
    }
    else if (preco_unitario > 20 && preco_unitario <= 50 && refrigeracao == 'S')
    {
      custo_estocagem = 6;
    }
    else if (preco_unitario > 20 && preco_unitario <= 50 && refrigeracao == 'N')
    {
      custo_estocagem = 0;
    }
    else if (preco_unitario > 50 && refrigeracao == 'S' && categoria == 'A')
    {
      custo_estocagem = 5;
    }
    else if (preco_unitario > 50 && refrigeracao == 'S' && categoria == 'L')
    {
      custo_estocagem = 2;
    }
    else if (preco_unitario > 50 && refrigeracao == 'S' && categoria == 'V')
    {
      custo_estocagem = 4;
    }
    else if (preco_unitario > 50 && refrigeracao == 'N' && (categoria == 'A' || categoria == 'V'))
    {
      custo_estocagem = 0;
    }
    else
    {
      custo_estocagem = 1;
    }

    if (categoria == 'A' || refrigeracao == 'S')
    {
      taxa_imposto = 0.04;
    }
    else
    {
      taxa_imposto = 0.02;
    }

    valor_imposto = preco_unitario * taxa_imposto;
    preco_final = preco_unitario + custo_estocagem + valor_imposto;

    if (preco_final > maior_preco_final)
    {
      maior_preco_final = preco_final;
    }

    if (menor_preco_final == 0)
    {
      menor_preco_final = preco_final;
    }

    if (preco_final < menor_preco_final)
    {
      menor_preco_final = preco_final;
    }

    if (preco_final <= 20)
    {
      strcpy(classificacao, "Barato");
      contador_barato++;
    }
    else if (preco_final > 20 && preco_final <= 100)
    {
      strcpy(classificacao, "Normal");
      contador_normal++;
    }
    else
    {
      strcpy(classificacao, "Caro");
      contador_caro++;
    }

    printf("\nPreco unitario: %3.2f", preco_unitario);
    printf("\nCusto de estocagem: %3.2f", custo_estocagem);
    printf("\nTaxa do Imposto: %3.2f", taxa_imposto * 100);
    printf("\nValor do imposto: %3.2f", valor_imposto);
    printf("\nPreco Final: %3.2f", preco_final);
    printf("\nClassificacao: %s\n", classificacao);
    printf("------------------------------------------\n\n");
    soma_estocagem += custo_estocagem;
    soma_imposto += valor_imposto;
  }

  media_estocagem = soma_estocagem / qtde_produtos;
  media_imposto = soma_imposto / qtde_produtos;

  printf("\nMedia dos custos de estocagens: %3.2f", media_estocagem);
  printf("\nMedia dos impostos: %3.2f", media_imposto);
  printf("\nMaior preco final: %3.2f", maior_preco_final);
  printf("\nMenor preco final: %3.2f", menor_preco_final);
  printf("\nTotal dos impostos: %3.2f", soma_imposto);
  printf("\nQuantidade de produtos baratos: %d", contador_barato);
  printf("\nQuantidade de produtos normais: %d", contador_normal);
  printf("\nQuantidade de produtos caros: %d\n", contador_caro);
}