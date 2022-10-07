#include <stdio.h>
#include <math.h>

int main()
{
  /* Exercicio 21 Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para
  calcular e mostrar a que distância a escada deve estar da parede. A pessoa deve
  fornecer o tamanho da escada e a altura em que deseja pregar o quadro.
  Lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja
  alcançar.*/
  float escada, altura, distancia, raizDistancia;
  printf("Digite o tamanho da escada em metros: ");
  scanf("%f%*c", &escada);
  printf("Digite a altura desejada: ");
  scanf("%f%*c", &altura);
  distancia = pow(escada, 2) - pow(altura, 2);
  raizDistancia = sqrt(distancia);
  printf("A escada deve estar a %4.2f metros da parede", raizDistancia);

  getchar();
  return 0;
}
