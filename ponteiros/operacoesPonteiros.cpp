#include <stdio.h>

/*Exemplo de código: Calcular os termos de uma P.A usando Ponteiros em C

Peça ao usuário dois inteiros, onde o primeiro será o primeiro termo de uma P.A (Progressão Aritmética) e o segundo a razão. Em segundo, através de ponteiros, preencha um vetor com os 10 primeiros elementos dessa P.A.

Após declararmos um vetor de 10 elementos, fazemos com que o ponteiro aponte para esse vetor. Como o nome vetor nada mais é que do que o endereço do primeiro elemento.

Assim, inicialmente, nosso ponteiro aponta para o primeiro elemento do vetor, que será o primeiro elemento da P.A.

Para calcular os elementos da P.A, basta fazermos com que o próximo termo seja o atual mais a razão:
*(ptr+1) = *ptr + razao

Entramos no laço WHILE que irá percorrer todos os elementos do vetor, exceto o último (pois o último elemento é calculado pelo penúltimo, então não precisa ir até o último).

Ou seja, só irá parar depois de termos atingidos o penúltimo elemento do vetor, que é pa[8].
Como vamos usar somente ponteiros para percorrer o vetor, nosso WHILE deve continuar enquanto o endereço de nosso ponteiro for diferente último endereço do vetor (que não precisará ser acessado, pois cada iteração do looping calcula o próximo termo da PA).

Em seguida, usamos o laço FOR para você ver como podemos manipular ponteiros dentre dele também.
Inicializamos, novamente, o ponteiro a partir do primeiro elemento: ptr = pa;
Depois, imprimimos todos os elementos, enquanto o endereço que o ponteiro aponta for menor ou igual ao último endereço do vetor.*/
int main(void)
{
  int pa[10], razao;
  int *ptr;

  printf("Insira o termo inicial da PA: ");
  scanf("%d", &pa[0]);
  ptr = pa;

  printf("Insira razao da PA: ");
  scanf("%d", &razao);

  while (ptr != &pa[9])
  {
    *(ptr + 1) = *ptr + razao;
    ptr++;
  }

  for (ptr = pa; ptr <= &pa[9]; ptr++)
    printf("-> %d ", *ptr);
  return 0;
}