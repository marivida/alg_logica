#include <stdio.h>
#include <math.h>

int main()
{
  /* Exercicio 22. Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um
  programa que receba o valor do salário mínimo e a quantidade de quilowatts
  consumida por uma residência. Calcule e mostre:
  a) o valor de cada quilowatt;
  b) o valor a ser pago por essa residência;
  c) o valor a ser pago com desconto de 15%.*/
  float salario, qtdeQuilowatts, valorQuilowatts, valorPago, valorDesconto;
  printf("Digite o valor do salario minimo: ");
  scanf("%f%*c", &salario);
  printf("Digite quantos quilowatts foram consumidos: ");
  scanf("%f%*c", &qtdeQuilowatts);
  valorQuilowatts = salario / 5;
  valorPago = valorQuilowatts * qtdeQuilowatts;
  valorDesconto = valorPago * 0.85;
  printf("\nValor de cada Quilowatt: \t %4.2f ", valorQuilowatts);
  printf("\nValor a ser pago: \t\t %4.2f ", valorPago);
  printf("\nValor com desconto: \t\t %4.2f ", valorDesconto);

  getchar();
  return 0;
}
