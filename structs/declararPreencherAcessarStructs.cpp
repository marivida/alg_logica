#include <stdio.h>

/*Exemplo: Como declarar, preencher e acessar elementos de uma struct em C

Defina uma struct para tratar de alunos. Dentro dessa struct, crie uma variável para armazenar o nome do aluno, e outras para armazenar as notas de Matemática, Física e a média dessas duas notas.
Após definir a struct, crie três variáveis do tipo struct que você criou.
Preencha os nomes e notas dos alunos, calculando automaticamente a média deles.
Depois exiba tudo isso.

Após definir a struct com o nome “Alunos” e seus elementos pedidos no enunciado da questão, vamos declarar 5 variáveis do tipo “struct Alunos”.
Pode ser os nomes que você quiser, como: aluno1, aluno2, aluno3, aluno4, aluno5 ou qualquer outra coisa.

Mas você é um programador C, e é melhor que isso, estudou pelo curso C Progressivo, então você não pode perder tempo à toa. Vamos usar criar um vetor de elementos do tipo “struct Alunos”!

Vamos chamar esse vetor de ‘alunos’, assim teremos os elementos: alunos[0], alunos[1], ..., alunos[4]. Isso facilita pois podemos usar loopings para tratar essas variáveis, pois basta mudarmos o índice para mudar a variável do vetor.

O primeiro looping é para preencher os elementos das structs que representam os alunos.
Primeiro pedimos o nome, usando a função gets(), que recebe uma string como argumento.
No nosso caso, a string é: alunos[índice].nome
Isso porque declaramos a string de nome ‘nome’ dentro da struct Alunos.

Os números: alunos[índice].matematica e alunos[índice].fisica, são floats como outros quaisquer que já trabalhamos, então podemos usar a nossa velha conhecida função scanf().

E para calcular a média?
Ué, alunos[índice].media é um float como outro qualquer. Então somamos os floats que armazenam as notas de Matemática e Física de qualquer aluno, dividimos por 2 e temos a média de cada aluno.

Em seguida, apenas mostramos esses dados.
*/
int main(void)
{
  struct Alunos
  {
    char nome[30];
    float notaMatematica, notaFisica, media;
  };

  struct Alunos alunos[5];
  int i;

  for (i = 0; i < 5; i++)
  {
    fflush(stdin);
    printf("\nNome do aluno %d", i + 1);
    gets(alunos[i].nome);

    printf("Nota de matematica: ");
    scanf("%f", &alunos[i].notaMatematica);

    printf("Nota de fisica: ");
    scanf("%f", &alunos[i].notaFisica);

    alunos[i].media = (alunos[i].notaFisica + alunos[i].notaMatematica) / 2;
  }

  printf("\n\nExibindo nomes e medias: \n");

  for (i = 0; i < 5; i++)
  {
    printf("\n\nAluno: %d", i + 1);
    printf("\nNome do aluno: %s", alunos[i].nome);
    printf("\nMedia do aluno: %.2f", alunos[i].media);
  }
  return 0;
}
