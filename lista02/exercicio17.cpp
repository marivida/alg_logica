#include <stdio.h>
#include <math.h>

int main()
{

  /*17. Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse
  trabalhador emitiu dois cheques e agora deseja saber seu saldo atual. Sabe-se que
  cada operação bancária de retirada paga CPMF de 0,38% e o saldo inicial da conta
  está zerado.*/
  float deposito, cheque1, cheque2, cpmf1, cpmf2, saldoAtual;
  printf("Digite o valor depositado: ");
  scanf("%f%*c", &deposito);
  printf("Digite o valor do cheque 1:");
  scanf("%f%*c", &cheque1);
  printf("Digite o valor do cheque 2:");
  scanf("%f%*c", &cheque2);
  cpmf1 = cheque1 * 0.0038;
  cpmf2 = cheque2 * 0.0038;
  saldoAtual = deposito - cheque1 - cpmf1 - cheque2 - cpmf2;
  printf("Seu saldo atual e de R$%4.2f", saldoAtual);

  getchar();
  return 0;
}
