#include<stdio.h>
#include<math.h>

int main () {
/* 11. Fa�a um programa que receba um n�mero positivo e maior que zero, calcule e mostre:
a) o n�mero digitado ao quadrado;
b) o n�mero digitado ao cubo;
c) a raiz quadrada do n�mero digitado;
d) a raiz c�bica do n�mero digitado.*/
/*float numero, quadrado, cubo, raizquadrada, raizcubica;
printf("Digite um numero positivo: \n");
scanf("%f%*c",&numero);
quadrado = pow(numero, 2);
cubo = pow(numero, 3);
raizquadrada = sqrt(numero);
raizcubica = pow(numero, (1.0/3.0));
printf("\nNumero ao quadrado: %4.2f", quadrado);
printf("\nNumero ao cubo: %4.2f", cubo);
printf("\nRaiz quadrada do numero: %4.2f", raizquadrada);
printf("\nRaiz cubica do numero: %4.2f", raizcubica);*/


//12.Fa�a um programa que receba dois n�meros maiores que zero, calcule e mostre
// um elevado ao outro.
/*float n1, n2, potencia;
printf("Digite dois numeros positivos: \n");
scanf("%f%*c", &n1);
scanf("%f%*c", &n2);
potencia = pow(n1,n2);
printf("Resultado da potencia: %4.2f", potencia);*/


/*13.Sabe-se que:
p� = 12 polegadas
1 jarda = 3 p�s
1 milha = 1,760 jarda
Fa�a um programa que receba uma medida em p�s, fa�a as convers�es a seguir
e mostre os resultados.
a) polegadas;
b) jardas;
c) milhas.*/
/*float pe, polegada, jarda, milha;
printf("Digite uma medida em pes: \n");
scanf("%f%*c", &pe);
polegada = pe *12;
jarda = pe/3;
milha = jarda/1.760;
printf("Medida em polegadas: %4.2f", polegada);
printf("\nMedida em jardas: %4.2f", jarda);
printf("\nMedida em milhas: %4.2f", milha);*/


/*14. Fa�a um programa que receba o ano de nascimento de uma pessoa e o ano atual,
calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos ela ter� em 2050.*/
/*int anoNascimento, anoAtual, idade, idadeFuturo;
printf("Digite o ano de nascimento: \n");
scanf("%d%*c", &anoNascimento);
printf("Digite o ano atual: \n");
scanf("%d%*c", &anoAtual);
idade = anoAtual-anoNascimento;
idadeFuturo = 2050 - anoNascimento;
printf("Sua idade e %d ", idade);
printf("\nEm 2050 voce tera %d anos", idadeFuturo);*/


/*15. O custo ao consumidor de um carro novo � a soma do pre�o de f�brica com o
percentual de lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica. Fa�a
um programa que receba o pre�o de f�brica de um ve�culo, o percentual de lucro do
distribuidor e o percentual de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o pre�o final do ve�culo.*/
/*float precoFabrica, percLucro,percImposto, valorLucro, valorImposto, precoFinal;
printf("Digite o preco de fabrica do carro: \n");
scanf("%f%*c", &precoFabrica);
printf("Digite o percentual de lucro do distribuidor: \n");
scanf("%f%*c", &percLucro);
printf("Digite o percentual de impostos: \n");
scanf("%f%*c", &percImposto);
valorLucro = precoFabrica*(percLucro/100);
valorImposto = precoFabrica*(percImposto/100);
precoFinal=precoFabrica+valorLucro+valorImposto;
printf("Valor do lucro do distribuidor: R$%4.2f ", valorLucro);
printf("\nValor dos impostos: R$%4.2f", valorImposto);
printf("\nPreco final do carro: R$%4.2f", precoFinal);*/


/*16. Fa�a um programa que receba o n�mero de horas trabalhadas e o valor do sal�rio
m�nimo, calcule e mostre o sal�rio a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do sal�rio m�nimo.
b) o sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da
hora trabalhada.
c) o imposto equivale a 3% do sal�rio bruto.
d) o sal�rio a receber equivale ao sal�rio bruto menos o imposto.*/
/*float horasTrabalhadas, salarioMinimo, salarioReceber, valorHoraTrabalhada, salarioBruto, imposto;
printf("Digite o salario minimo:");
scanf("%f%*c", &salarioMinimo);
printf("Digite quantas horas foram trabalhadas:");
scanf("%f%*c", &horasTrabalhadas);
valorHoraTrabalhada=salarioMinimo/2;
salarioBruto=horasTrabalhadas*valorHoraTrabalhada;
imposto=salarioBruto*0.03;
salarioReceber=salarioBruto-imposto;
printf("Salario a receber: R$%4.2f", salarioReceber);*/


/*17. Um trabalhador recebeu seu sal�rio e o depositou em sua conta banc�ria. Esse
trabalhador emitiu dois cheques e agora deseja saber seu saldo atual. Sabe-se que
cada opera��o banc�ria de retirada paga CPMF de 0,38% e o saldo inicial da conta
est� zerado.*/
/*float deposito, cheque1, cheque2, cpmf1, cpmf2, saldoAtual;
printf("Digite o valor depositado: ");
scanf("%f%*c", &deposito);
printf("Digite o valor do cheque 1:");
scanf("%f%*c", &cheque1);
printf("Digite o valor do cheque 2:");
scanf("%f%*c", &cheque2);
cpmf1=cheque1*0.0038;
cpmf2=cheque2*0.0038;
saldoAtual=deposito-cheque1-cpmf1-cheque2-cpmf2;
printf("Seu saldo atual e de R$%4.2f", saldoAtual);*/



/*18. Pedro comprou um saco de ra��o com peso em quilos. Ele possui dois gatos, para
os quais fornece a quantidade de ra��o em gramas. A quantidade di�ria de ra��o
fornecida para cada gato � sempre a mesma. Fa�a um programa que receba o peso
do saco de ra��o e a quantidade de ra��o fornecida para cada gato, calcule e mostre
quanto restar� de ra��o no saco ap�s cinco dias.*/
float pesoRacaoKg, pesoracaoGr, racaoGato1, racaoGato2, restoRacao;
printf("Digite o peso em quilos do saco de racao:");
scanf("%f%*c", &pesoRacaoKg);
printf("Digite a quantidade de racao em gramas para o gato 1:");
scanf("%f%*c", &racaoGato1);
printf("Digite a quantidade de racao para o gato 2:");
scanf("%f%*c", &racaoGato2);
pesoracaoGr = pesoRacaoKg*1000;
restoRacao = pesoracaoGr - racaoGato1*5+racaoGato2*5;
pesoRacaoKg = pesoracaoGr/1000;
printf("Apos 5 dias restara %4.2f quilos de racao", pesoRacaoKg);
printf("Apos 5 dias restara %4.2f gramas de racao", pesoracaoGr);

getchar();
return 0;
}
