#include<stdio.h>

int main () {

//Exerc�cio 3: Elaborar um algoritmo que efetue a apresenta��o do valor da convers�o
//em real (R$) de um valor lido em d�lar (US$). O algoritmo dever� solicitar o valor da cota��o
//do d�lar e tamb�m a quantidade de d�lares dispon�veis com o usu�rio.
float real, dolar, cotacao;
printf("Digite o valor em dolares: \n");
scanf("%f%*c", &dolar);
printf("Digite a cotacao atual do dolar/real: \n");
scanf("%f%*c", &cotacao);
real = dolar * cotacao;
printf("Valor em reais: \n%4.2f", real);

getchar();
return 0;
}


