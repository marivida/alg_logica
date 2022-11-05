#include <stdio.h>
#include <math.h>
/*Faça um programa que receba duas notas de seis alunos. Calcule e mostre:
- a média aritmética das duas notas de cada aluno; e
- a mensagem que está na tabela a seguir:
  média até 3: mensagem "Reprovado"
  média entre 3 e 7: mensagem "Exame"
  de 7 pra cima: mensagem "Aprovado"
- o total de alunos aprovados
- o total de alunos de exame
- o total de alunos reprovados
- a média da classe*/
int main()
{
  float nota1, nota2, media = 0, soma = 0, media_total = 0;
  int i, contador_aprovado = 0, contador_exame = 0, contador_reprovado = 0;

  for (i = 0; i < 6; i++)
  {
    printf("\n\nDigite a primeira nota: ");
    scanf("%f%*c", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f%*c", &nota2);
    media = (nota1 + nota2) / 2;
    printf("Media do aluno: %3.2f", media);

    if (media <= 3)
    {
      printf("\nAluno REPROVADO");
      contador_reprovado++;
    }
    else if (media > 3 && media < 7)
    {
      printf("\nAluno de EXAME");
      contador_exame++;
    }
    else
    {
      printf("\nAluno APROVADO");
      contador_aprovado++;
    }
    soma = soma + media;
  }
  media_total = soma / 6;
  printf("\n\nTotal de alunos aprovados: %d", contador_aprovado);
  printf("\nTotal de alunos em exame: %d", contador_exame);
  printf("\nTotal de alunos reprovados: %d", contador_reprovado);
  printf("\n\nMedia da classe: %3.2f", media_total);
  
  getchar();
  return 0;
}