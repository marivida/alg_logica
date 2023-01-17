#include <stdio.h>

void soma(float a, float b)
{
  printf("%.2f", a + b);
}

void subtracao(float a, float b)
{
  printf("%.2f", a - b);
}

void multiplicacao(float a, float b)
{
  printf("%.2f", a * b);
}

void divisao(float a, float b)
{
  if (b != 0)
  {
    printf("%.2f", a / b);
  }
  else
  {
    printf("Nao pode dividir por zero\n");
  }
}

void modulo(int a, int b)
{
  printf("%d", a % b);
}

int main()
{
  float num1,
      num2;
  char oper;

  do
  {
    printf("\n\n\t\tCalculadora do curso C Progressivo\n\n");

    printf("Operacoes disponiveis\n");
    printf("'+' : soma\n");
    printf("'-' : subtracao\n");
    printf("'*' : multiplicao\n");
    printf("'/' : divisao\n");
    printf("'%%' : resto da divisao\n");

    printf("\nDigite a expressao na forma: numero1 operador numero2\n");
    printf("Exemplos: 1 + 1 ,  2.1 * 3.1\n");
    printf("Para sair digite: 0 0 0\n");

    scanf("%f", &num1);
    scanf(" %c", &oper);
    scanf("%f", &num2);

    printf("Calculando: %.2f %c %.2f = ", num1, oper, num2);

    switch (oper)
    {
    case '+':
      soma(num1, num2);
      break;

    case '-':
      subtracao(num1, num2);
      break;

    case '*':
      multiplicacao(num1, num2);
      break;

    case '/':
      divisao(num1, num2);
      break;

    case '%':
      modulo(num1, num2);
      break;

    default:
      if (num1 != 0 && oper != '0' && num2 != 0)
        printf(" Operador invalido\n\n ");
      else
        printf(" Fechando calculadora!\n ");
    }

  } while (num1 != 0 && oper != '0' && num2 != 0);
}