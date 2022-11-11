#include <stdio.h>
#include <math.h>

int main()
{
  /*Escreva um programa que exiba na tela a quantidade de números ímpares existentes entre dois números que o usuário digitar (testar inclusive os números digitados)*/

  int numero1, numero2, contadorPar = 0, contadorImpar = 0;

  printf("Digite o primeiro numero:");
  scanf("%d%*c", &numero1);
  printf("Digite o segundo numero:");
  scanf("%d%*c", &numero2);

  for (int i = numero1; i <= numero2; i++)
  {
    if ((i % 2) == 1)
    {
      printf("\nO numero %d e impar", i);
      contadorImpar++;
    }
    else
    {
      printf("\nO numero %d e par", i);
      contadorPar++;
    }
  }
  printf("\n\nEntre %d e %d temos %d numeros pares e %d numeros impares", numero1, numero2, contadorPar, contadorImpar);
}
