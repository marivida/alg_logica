#include <stdio.h>

/*Declare uma string e inicialize. A seguir, exiba essa string na tela.

Vamos declarar uma string de 20 caracteres.
Podemos preencher a string com que caractere quisermos, mas a última posição da string é sempre o delimitador \0.
O C coloca esse delimitador sempre após o último caractere inserido.

Como nosso vetor tem 20 posições, podemos preencher, no máximo, até a posição 18.

Como usamos somente a frase “C Progressivo”, de 13 caracteres, o caractere \0 será o 14º caractere.
Vamos usar o primeiro laço for para imprimir todos os caracteres da string ‘curso’.
Note que o C imprime todos os caracteres antes do \0, e depois dele, nenhum.

O segundo laço for faz com que nossa variável auxiliar inicie na posição 0 da string e vá até a posição em que encontra o \0. Quando encontra, o laço para e mostramos em que posição encontrou o delimitador.*/
int main(void)
{
  char curso[20] = "C Progressivo";
  int count;

  for (count = 0; count < 20; count++)
    printf("%c", curso[count]);

  for (count = 0; curso[count] != '\0'; count++)
    ;
  printf("\nO '\\0' esta na posicao %d da string\n", count);
  return 0;
}