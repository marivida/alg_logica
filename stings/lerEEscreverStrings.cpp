#include <stdio.h>

/*Exemplo: Programa que pede o nome e sobrenome em C
Crie um aplicativo em C que peça ao usuário seu nome, armazene em uma String, peça o sobrenome, armazene em outra string e exiba o nome do usuário de maneira formal ( Sobrenome, Nome).

Criamos duas strings, optamos por colocar 20 caracteres em cada, como temos que ter o caractere delimitador, então declaramos o vetor de caracteres com 21 elementos cada, um pro nome e outro pro sobrenome.

Depois pedimos o nome ao usuário, armazenando na variável ‘nome’, e fazemos o mesmo na variável ‘sobrenome’.
Em seguida, para exibir a string completa, basta usarmos o símbolo %s , da mesma maneira que vínhamos fazendo com %d, %f e %c na printf()

nunca use & quando for armazenar uma string. Isso não é necessário, pois string é um vetor, e o nome do vetor já é um endereço, e um endereço é o operador & seguido do nome da variável.*/
// int main()
// {
//   char nome[21], sobrenome[21];

//   printf("Primeiro nome: ");
//   // scanf("%s", nome);
//   gets(nome); // o scanf corta quando acha um espaço em branco, no caso de nomes compostos.

//   printf("Ultimo sobrenome: ");
//   // scanf("%s", sobrenome);
//   gets(sobrenome);
//   printf("Ola senhor %s, %s. Bem-vindo ao curso C Progressivo.\n", sobrenome, nome);
//   return 0;
// }

/*Exemplo de código: Programa em C que pede os dados cadastrais completos
Crie um aplicativo em C que peça o nome do usuário, sua idade e data de nascimento.

Esse aplicativo é bem simples, e certamente você fará sem maiores problemas.
Porém, existe uma pequena casca de banana nele, que colocamos de propósito.

Vimos que a função scanf() pega tudo até aparecer o primeiro espaço em branco, e pára antes dele.
Já a gets() não, ela pega tudo até aparecer uma new line \n, inclusive nada. Ou seja, se você der um ENTER, a gets() vai armazenar esse enter na string.

Note que após digitar o inteiro correspondente a idade, você dá um enter.
Esse número vai pra variável ‘idade’, mas e o ENTER, pra onde vai?
Vai pro buffer.

O problema é que a função gets() vai pegar o que está armazenado nesse buffer e vai armazenar  o que estiver lá na string de data de nascimento!
E como evitar isso? Ora, é só apagar esse ENTER que está no buffer, usando o fflush(stdin) caso use Windows, ou __fpurge(stdin) caso seja abençoado e use Linux.*/
int main(void)
{
  char nome[31], sobrenome[31], nascimento[11];
  int idade;

  printf("Nome: ");
  gets(nome);

  printf("Sobrenome: ");
  gets(sobrenome);

  printf("Idade: ");
  scanf("%d", &idade);

  fflush(stdin);

  printf("Data de nascimento: ");
  gets(nascimento);

  printf("\nNome completo: %s %s\n", nome, sobrenome);
  printf("Idade: %d\n", idade);
  printf("Data de nascimento: ");
  puts(nascimento);
  return 0;
}

/*mo C é uma linguagem de programação de baixo nível, algumas coisas são um pouco 'chatinhas' de serem usadas, pois se exigirá um rigor muito grande, que é pouco visto em outras linguagens de programação.

Um exemplo disso, que já mostramos neste mesmo artigo de nossa apostila, foi o da scanf(), que só lê até o primeiro espaço, pois isso é a característica padrão da função.
É característica padrão, e não obrigatória. Ou seja, embora poucos saibam, é possível alterar o funcionamento da scanf(). Por exemplo, se quisermos ler strings que tenham espaço, nós temos que dizer isso dentro da função.

Vamos dizer para a scanf() parar de pegar nossa string somente quando encontrar um caractere de NEW LINE (um enter). Para isso, usamos o operador: [^\n]
Logo, nosso código da scanf() para ler strings com espaços e armazenar na variável "str" é:
scanf ( "%[^\n]", str);

(lembre-se de limpar o buffer, usando __fpurge(stdin) ).

Podemos ainda limitar o tamanho de nossa string, basta colocar um numero inteiro ao lado do %, representando o número de caracteres máximo, o que é uma excelente prática, pois essa função pode ocasionar problemas na memória, caso você estoure os limites da string.
Por exemplo:
scanf ( "%256[^\n]", str);

A função gets() peca nesse quesito, de tamanho da string, pois podemos digitar mais caracteres do que a string alocou de memória, e "quebraríamos" o programa por conta de um overflow.
Algumas pessoas relatam problemas de usar ela em um ambiente Linux.

Uma solução para isso é usar a função fget(), que é mais segura.
Ela recebe três dados: a string que vai armazenar o que vai ser digitado ( no nosso caso é a variável "str"), o tamanho da string e de onde vai ler (ela pode ler de um arquivo de texto, por exemplo).
Para ler do teclado, usamos stdin.

Veja como ficaria
fgets(str, 256, stdin);

Que função usar para ler strings, então?
Se você está iniciando seus estudos e fazendo programas simples, apenas para aprender a linguagem C, pode usar a gets() ou scanf(), sem problemas.

Como dissemos, elas podem ocasionar problemas na memória, onde é fácil extrapolarmos o limite da memória, encerrando o programa por isso. Portanto, se quiser usar uma função de maneira segura, em programas profissionais, evite a gets(). Use fgets() ou scanf() sempre com litadores de new line e tamanho da string.*/