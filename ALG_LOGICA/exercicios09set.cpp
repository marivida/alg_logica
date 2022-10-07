#include<stdio.h>

int main () {

//Exercício 3: Elaborar um algoritmo que efetue a apresentação do valor da conversão
//em real (R$) de um valor lido em dólar (US$). O algoritmo deverá solicitar o valor da cotação
//do dólar e também a quantidade de dólares disponíveis com o usuário.
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


