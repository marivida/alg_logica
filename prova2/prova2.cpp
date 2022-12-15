#include <stdio.h>

int main()
{
  int opcao, numero1, anoAtual, totalAnos = 0, vetor3[20];
  float taxaAumento = 0, novoSalario = 0;
  int vetor1[10];
  int vetor2[10];

  do
  {
    printf("\n\nMenu de opcoes: \n1. Condicional \n2. Repeticao \n3. Vetor \n4. Finalizar programa \n Escolha sua opcao: ");
    scanf("%d%*c", &opcao);

    switch (opcao)
    {
    case 1:
      printf("\nOpcao 1 - Condicional");
      printf("\nDigite um numero: ");
      scanf("%d%*c", &numero1);

      if (numero1 % 2 == 0)
      {
        printf("O numero %d e par", numero1);
      }
      else
      {
        printf("O numero %d e impar", numero1);
      }

      printf("\n-------------------------------------------");
      break;

    case 2:
      printf("\nOpcao 2 - Repeticao");
      printf("\nDigite o ano atual: ");
      scanf("%d%*c", &anoAtual);

      totalAnos = anoAtual - 2005;
      taxaAumento = 1.5;
      novoSalario = 1000;

      for (int i = 0; i < totalAnos; i++)
      {
        novoSalario = novoSalario + (novoSalario * (taxaAumento / 100));
        taxaAumento *= 2;
      }
      printf("\nSalario Atual: %3.2f", novoSalario);
      printf("\n-------------------------------------------");

      break;

    case 3:
      printf("\nOpcao 3 - Vetor");
      for (int i = 0; i < 10; i++)
      {
        printf("\nDigite o numero da posicao %d do vetor 1: ", i);
        scanf("%d%*c", &vetor1[i]);
      }

      printf("\nVetor 1: ");
      for (int i = 0; i < 10; i++)
      {
        printf("%d -- ", vetor1[i]);
      }

      for (int i = 0; i < 10; i++)
      {
        printf("\nDigite o numero da posicao %d do vetor 2: ", i);
        scanf("%d%*c", &vetor2[i]);
      }

      printf("\nVetor 2: ");
      for (int i = 0; i < 10; i++)
      {
        printf("%d -- ", vetor2[i]);
      }

      for (int i = 1; i <= 10; i++)
      {
        int dobro = (i * 2) - 2;

        vetor3[dobro] = vetor1[i - 1];
        vetor3[dobro + 1] = vetor2[i - 1];
      }

      // vetor3[0] = vetor1[0];
      // vetor3[1] = vetor2[0];
      // vetor3[2] = vetor1[1];
      // vetor3[3] = vetor2[1];
      // vetor3[4] = vetor1[2];
      // vetor3[5] = vetor2[2];
      // vetor3[6] = vetor1[3];
      // vetor3[7] = vetor2[3];
      // vetor3[8] = vetor1[4];
      // vetor3[9] = vetor2[4];
      // vetor3[10] = vetor1[5];
      // vetor3[11] = vetor2[5];
      // vetor3[12] = vetor1[6];
      // vetor3[13] = vetor2[6];
      // vetor3[14] = vetor1[7];
      // vetor3[15] = vetor2[7];
      // vetor3[16] = vetor1[8];
      // vetor3[17] = vetor2[8];
      // vetor3[18] = vetor1[9];
      // vetor3[19] = vetor2[9];

      printf("\n\n\nVetor ordenado: ");
      for (int i = 0; i < 20; i++)
      {
        printf("%d -- ", vetor3[i]);
      }
      printf("\n\n-------------------------------------------");

      break;

    case 4:
      printf("-------------------------------------------");
      printf("\nObrigada por usar o programa!\n");
      printf("-------------------------------------------\n");
      break;

    default:
      printf("-------------------------------------------");
      printf("\nOpcao invalida! Tente novamente\n");
      printf("-------------------------------------------");
      opcao = 0;
      break;
    }
  } while (opcao == 0 || opcao == 1 || opcao == 2 || opcao == 3);

  return 0;
  getchar();
}