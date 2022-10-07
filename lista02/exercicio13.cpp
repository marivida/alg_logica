#include<stdio.h>
#include<math.h>

int main () {

/*13.Sabe-se que:
pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1,760 jarda
Faça um programa que receba uma medida em pés, faça as conversões a seguir
e mostre os resultados.
a) polegadas;
b) jardas;
c) milhas.*/
float pe, polegada, jarda, milha;
printf("Digite uma medida em pes: \n");
scanf("%f%*c", &pe);
polegada = pe *12;
jarda = pe/3;
milha = jarda/1.760;
printf("Medida em polegadas: %4.2f", polegada);
printf("\nMedida em jardas: %4.2f", jarda);
printf("\nMedida em milhas: %4.2f", milha);

getchar();
return 0;
}
