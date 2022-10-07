#include <stdio.h>
#include <math.h>

int main()
{

  /*18. Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para
  os quais fornece a quantidade de ração em gramas. A quantidade diária de ração
  fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso
  do saco de ração e a quantidade de raçãoo fornecida para cada gato, calcule e mostre
  quanto restará de ração no saco após cinco dias.*/
  float pesoRacaoKg, pesoracaoGr, racaoGato1, racaoGato2, restoRacao;
  printf("Digite o peso em quilos do saco de racao: ");
  scanf("%f%*c", &pesoRacaoKg);
  printf("Digite a quantidade de racao em gramas para o gato 1: ");
  scanf("%f%*c", &racaoGato1);
  printf("Digite a quantidade de racao em gramas para o gato 2: ");
  scanf("%f%*c", &racaoGato2);
  pesoracaoGr = pesoRacaoKg * 1000;
  racaoGato1 *= 5;
  racaoGato2 *= 5;
  restoRacao = pesoracaoGr - racaoGato1 - racaoGato2;
  pesoRacaoKg = restoRacao / 1000;
  printf("\n Apos 5 dias restara %4.2f quilos de racao", pesoRacaoKg);
  printf("\n Apos 5 dias restara %4.2f gramas de racao", pesoRacaoKg * 1000);

  getchar();
  return 0;
}
