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
int main(void)
{
  char caractere1, caractere2;
  int inteiro1, inteiro2;
  float Float1, Float2;
  double Double1, Double2;

  printf("Caracteres: %d e %d\n", &caractere1, &caractere2);
  printf("Inteiros: %d e %d\n", &inteiro1, &inteiro2);
  printf("Floats: %d e %d\n", &Float1, &Float2);
  printf("Doubles: %d e %d\n", &Double1, &Double2);
  return 0;
}