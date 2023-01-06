#include <stdio.h>
// Curso C Progressivo: www.cprogessivo.net
// O melhor curso de C! Online e gratuito !
// Artigos, apostilas, tutoriais e vídeo-aulas sobre
// a linguagem de programação C !

// int main(void)

// {
//     int numero1=1,
//         numero2=2;

//     char letra1='a',
//          letra2='b';

//     printf("numero1: \n");
//     printf("Valor: %d\n", numero1);
//     printf("Endereco na memoria: %d\n\n", &numero1);

//     printf("numero2: \n");
//     printf("Valor: %d\n", numero2);
//     printf("Endereco na memoria: %d\n\n", &numero2);

//     printf("letra1: \n");
//     printf("Valor: %c\n", letra1);
//     printf("Endereco na memoria: %d\n\n", &letra1);

//     printf("letra2: \n");
//     printf("Valor: %c\n", letra2);
//     printf("Endereco na memoria: %d\n\n", &letra2);

//     printf("Alterando os valores...\n\n");

//     numero1=2112;
//     numero2=666;

//     letra1='A';
//     letra2='B';

//     printf("numero1: \n");
//     printf("Valor: %d\n", numero1);
//     printf("Endereco na memoria: %d\n\n", &numero1);

//     printf("numero2: \n");
//     printf("Valor: %d\n", numero2);
//     printf("Endereco na memoria: %d\n\n", &numero2);

//     printf("letra1: \n");
//     printf("Valor: %c\n", letra1);
//     printf("Endereco na memoria: %d\n\n", &letra1);

//     printf("letra2: \n");
//     printf("Valor: %c\n", letra2);
//     printf("Endereco na memoria: %d\n\n", &letra2);

//     return 0;
// }

/*Faça um programa em C que mostra quantos bytes ocupam cada uma das variáveis: char, int, float e double.

Existem duas maneiras de fazer isso, a primeira é simplesmente colocando as palavras reservadas dentro da função sizeof(). A segunda maneira é declarando variáveis e colando ela dentro da função sizeof(), como faremos no próximo exemplo.
*/
// int main(void)

// {
//   printf("Char: %d bytes\n", sizeof(char));
//   printf("Int: %d bytes\n", sizeof(int));
//   printf("Float: %d bytes\n", sizeof(float));
//   printf("Double: %d bytes\n", sizeof(double));
//   return 0;
// }

/*Exemplo: Mostrar o endereço e número de bytes que cada variável ocupa
Agora, além de mostrar quantos bytes cada variável ocupa, mostre o endereço dela.
Para isso, declare 4 variáveis: uma char, um int, um float e um double.
*/
// int main(void)
// {
//   char caractere;
//   int inteiro;
//   float Float;
//   double Double;
//   int numeros[100000];

//   printf("Caractere: %d bytes \t em %d\n", sizeof(caractere), &caractere);
//   printf("Inteiro: %d bytes \t em %d\n", sizeof(inteiro), &inteiro);
//   printf("Float: %d bytes \t\t em %d\n", sizeof(Float), &Float);
//   printf("Double: %d bytes \t em %d\n", sizeof(Double), &Double);

//   printf("1 milhao: %d bytes \tem %d\n", sizeof(numeros), &numeros);
//   return 0;
// }

/*Exemplo de código: Mostrando as posições dos blocos de variáveis
Crie duas variáveis de cada tipo: char, int, float e double - e mostre o endereço destas.

Ao declarar e ver os endereços, note que as variáveis do mesmo tipo, que foram declaradas juntas, estão em endereços de memória contínuos.

No caso das chars, elas estão ao lado da outra, pois só ocupam 1 byte cada.
No caso dos inteiros e floats, o espaço de endereço de uma variável pra outra é de 4 unidades, pois cada variável desta ocupa 4 bytes.

Nas variáveis do tipo double, seus endereços estão distantes em 8 unidades, bytes, um do outro.*/
// int main(void)
// {
//   char caractere1, caractere2;
//   int inteiro1, inteiro2;
//   float Float1, Float2;
//   double Double1, Double2;

//   printf("Caracteres: %d e %d\n", &caractere1, &caractere2);
//   printf("Inteiros: %d e %d\n", &inteiro1, &inteiro2);
//   printf("Floats: %d e %d\n", &Float1, &Float2);
//   printf("Doubles: %d e %d\n", &Double1, &Double2);
//   return 0;
// }

/*Crie um programa que mostre que o nome de um vetor é, na verdade, um ponteiro para a primeira posição que o vetor ocupa na memória. Ou seja, um vetor sempre aponta para o elemento 0.*/
// int main(void)
// {
//   int teste[10];

//   printf("Imprimindo o vetor 'teste': %d\n", teste);
//   printf("Imprimindo o endereco do primeiro elemento: %d\n", &teste[0]);
//   printf("Imprimindo o endereco do segundo elemento: %d\n", &teste[1]);
//   return 0;
// }

/*Crie um programa em C que declara um inteiro e uma variável do tipo double. Em seguida, crie dois ponteiros apontando para essas variáveis e mostre o endereço de memória das variáveis, e mostre o endereço de memória que cada ponteiro armazenou.
Por fim, coloque esses ponteiros para a primeira posição (NULL), de memória.
Para saber o endereço de uma variável dentro do printf, colocamos o %d e depois ‘&nome_variavel’.
Para saber que endereço um ponteiro armazena no printf, também colocamos o %d entre as aspas, e fora colocamos apenas o nome do ponteiro.*/
// int main(void)
// {
//   int inteiro;
//   int *inteiro_ptr = &inteiro;

//   double double1;
//   double *double_ptr = &double1;

//   printf("Endereco da variariavel 'inteiro': %d\n", &inteiro);
//   printf("Endereco armazenado no ponteiro 'inteiro_ptr': %d\n\n", inteiro_ptr);

//   printf("Endereco da variariavel 'double1': %d\n", &double1);
//   printf("Endereco armazenado no ponteiro 'double_ptr': %d\n\n", double_ptr);

//   printf("Apos o uso dos ponteiros, vamos aponta-los para NULL\n\n");
//   inteiro_ptr = NULL;
//   double_ptr = NULL;
//   printf("Endereco armazenado no ponteiro 'inteiro_ptr': %d\n", inteiro_ptr);
//   printf("Endereco armazenado no ponteiro 'double_ptr': %d\n", double_ptr);
//   return 0;
// }

/*Exemplo de código: Mostrando o valor das variáveis apontadas por ponteiros

Crie um programa em C que peça ao usuário três números inteiros e armazene em três variáveis inteiras através do uso de um ponteiro.
Após o usuário inserir cada número, mostre o número exibido, porém mostre através do ponteiro.

Desde o início de nosso curso de C, quando ensinamos como obter dados a partir do usuário, através da função scanf(), nós vínhamos usando o operador & dentro dessa função para que o dado inserido pelo usuário fosse armazenado em determinada posição de memória.

Aqui, vamos criar três inteiros e um ponteiro de inteiro, que irá apontar para cada uma dessas variáveis. Usaremos o ponteiro dentro da scanf(uma vez que ele guarda o endereço da variável pra onde ele aponta) e o asterisco, para mostrar o valor da variável que é apontada por ele.
*/
// int main(void)
// {
//   int int1, int2, int3;
//   int *ptr_int = &int1;

//   printf("Inteiro 1: ");
//   scanf("%d", ptr_int);
//   printf("Numero inserido: %d\n", *ptr_int);
//   printf("Local do ponteiro: %d\n", ptr_int);

//   ptr_int = &int2;
//   printf("Inteiro 2: ");
//   scanf("%d", ptr_int);
//   printf("Numero inserido: %d\n", *ptr_int);
//   printf("Local do ponteiro: %d\n", ptr_int);

//   ptr_int = &int3;
//   printf("Inteiro 3: ");
//   scanf("%d", ptr_int);
//   printf("Numero inserido: %d\n", *ptr_int);
//   printf("Local do ponteiro: %d\n", ptr_int);
//   return 0;
// }

/*Exemplo de código: Passagem por referência em C
Crie um programa que recebe um inteiro e dobra seu valor.

Para que uma função altere o valor de uma variável, é necessário que essa função atue no endereço de memória, e não na copilar do valor. Para isso, temos que passar o endereço da variável para a função (usando &), e a função tem que ser declarada de modo a esperar um ponteiro (usando *).

Dentro da função, devemos trabalhar com o valor na qual aquele ponteiro aponta.
Ou seja, se o ponteiro tiver nome ‘ptr’, devemos trabalhar com o valor ‘*ptr’.
*/
// void dobra(int *num)
// {
//   (*num) = (*num) * 2;
// }

// int main(void)
// {
//   int num;

//   printf("Insira um numero: ");
//   scanf("%d", &num);

//   dobra(&num);
//   printf("O dobro dele eh: %d\n", num);
//   return 0;
// }

/*Exemplo de código: Trocar o valor de dois números em C
Crie um programa em C que peça ao usuário o valor de uma variável x e depois de uma y.

Crie uma função que inverta esses valores através do uso de ponteiros.

Mais uma vez, declaramos uma função que irá receber dois ENDEREÇOS de memória, ou seja, irá receber dois ponteiros. Esses ponteiros têm os locais onde as variáveis x e y foram armazenadas.
Para alterar esses valores, vamos trabalhar com (*x) e (*y).

Para fazer duas variáveis trocarem de valores entre si, iremos precisar de uma variável temporária.
Primeiro guardamos o valor de x na variável temporária (vamos precisar depois).
Em seguida, fazemos x receber o valor de y.
Agora é y que tem que receber o valor de x. Mas x mudou de valor, lembra?
Ou seja, precisamos pegar o antigo valor de x. Foi por isso que guardamos esse antigo valor de x na variável temporária.
Logo, agora é só fazer com que y pegue o valor da variável temporária, e teremos os valores invertidos.*/
void troca(int *x, int *y)
{
  int tmp;

  tmp = *x;
  *x = *y;
  *y = tmp;
}

int main(void)
{
  int x, y;

  printf("Insira o numero x: ");
  scanf("%d", &x);

  printf("Insira o numero y: ");
  scanf("%d", &y);

  troca(&x, &y);

  printf("Agora x=%d e y=%d\n", x, y);
  return 0;
}