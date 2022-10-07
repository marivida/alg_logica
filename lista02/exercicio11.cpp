#include<stdio.h>
#include<math.h>

int main () {
/* 11. Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.*/
float numero, quadrado, cubo, raizquadrada, raizcubica;
printf("Digite um numero positivo: \n");
scanf("%f%*c",&numero);
quadrado = pow(numero, 2);
cubo = pow(numero, 3);
raizquadrada = sqrt(numero);
raizcubica = pow(numero, (1.0/3.0));
printf("\nNumero ao quadrado: %4.2f", quadrado);
printf("\nNumero ao cubo: %4.2f", cubo);
printf("\nRaiz quadrada do numero: %4.2f", raizquadrada);
printf("\nRaiz cubica do numero: %4.2f", raizcubica);

getchar();
return 0;
}
