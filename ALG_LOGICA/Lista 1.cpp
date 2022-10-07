#include<stdio.h>
#include<math.h>
int main ()
{
    //Exercicio 1: Faça um programa que receba quatro números inteiros,
    // calcule e mostre a soma desses números
    /*int n1, n2, n3, n4, soma;
    printf("Digite o valor 1: ");
    scanf("%d%*c",&n1);
    printf("\nDigite o valor 2: ");
    scanf("%d%*c",&n2);
    printf("\nDigite o valor 3: ");
    scanf("%d%*c",&n3);
    printf("\nDigite o valor 4: ");
    scanf("%d%*c",&n4);
    soma = n1 + n2 + n3 + n4;
    printf("\nA soma e: %d", soma);*/


    //Exercício 2: Faça um programa que receba trÊs notas, calcule e mostre
    // a média aritmética
    /*float n1, n2, n3, media;
    printf("Digite as notas: \n");
    scanf("%f%*c", &n1);
    scanf("%f%*c", &n2);
    scanf("%f%*c", &n3);
    media = (n1 + n2 + n3)/3;
    printf("\nA media e: %4.2f", media);*/


    //Exercicio 3: Faça um programa que receba três notas e seus respectivos
    //e seus respectivos pesos, calcule e mostre a media ponderada
    /*float n1, n2, n3, p1, p2, p3, media;
    printf("Digite a primeira nota e seu peso: \n");
    scanf("%f%*c", &n1);
    scanf("%f%*c", &p1);
    printf("Digite a segunda nota e seu peso: \n");
    scanf("%f%*c", &n2);
    scanf("%f%*c", &p2);
    printf("Digite a terceira nota e seu peso: \n");
    scanf("%f%*c", &n3);
    scanf("%f%*c", &p3);
    media = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
    printf("A media aritmetica e: %4.2f", media);*/


    //Exercicio 4: Faça um programa que receba o salário de um funcionário
    // calcule e mostre o novo salario, sabendo-se que este sofreu um
    // aumento de 25%
    /*float salario, novoSalario;
    printf("Digite o salario: \n");
    scanf("%f%*c", &salario);
    novoSalario = salario*1.25;
    printf("O novo salario e: %3.2f", novoSalario);*/


    //Exercicio 5: Faça um programa que receba o salário de um funcionário
    // e o percentual de aumento, calcule e mostre o valor do aumento
    // e o novo salário
    /*float salario, taxaAumento, aumento, novoSalario;
    printf("Digite o salario: \n");
    scanf("%f%*c", &salario);
    printf("Digite a taxa de aumento: \n");
    scanf("%f%*c", &taxaAumento);
    aumento = salario * (taxaAumento/100);
    novoSalario = salario + aumento;
    printf("Total de aumento: %4.2f\n", aumento);
    printf("Novo salario: %4.2f", novoSalario);*/


    // Exercicio 6: Faça um programa que receba o salario base de um
    // funcionário, calcule e mostre o salario a receber, sabendo-se que
    // o funcionario tem gratificação de 5% sobre o salario base e paga
    // imposto de 7% também sobre o salario base
    /*float salario, novoSalario;
    printf("Digite o salario base: \n");
    scanf("%f%*c", &salario);
    novoSalario = salario + (salario*0.05) - (salario*0.07);
    printf("Novo salario: %4.2f ", novoSalario);*/


    // Exercicio 7: Faça um programa que receba o salario base de um
    // funcionario, calcule e mostre seu salario a receber, sabendo-se
    // que o funcionario tem gratificacao de $50 e paga imposto de 10%
    // sobre o salario base
    /*float salario, novoSalario;
    printf("Digite o salario: \n");
    scanf("%f%*c", &salario);
    novoSalario = salario + 50 - (salario*0.1);
    printf("Novo Salario: %4.2f", novoSalario);*/


    // Exercicio 8: Faça um programa que receba o valor de um deposito e
    // o valor da taxa de juros, calcule e mostre o valor do rendimento
    // e o valor total depois do rendimento
    /*float deposito, taxa, rendimento, total;
	printf("Digite o valor do deposito: \n");
	scanf("%f%*c", &deposito);
	printf("Digite a taxa de juros: \n");
	scanf("%f%*c", &taxa);
	rendimento = deposito * (taxa / 100);
	total = deposito + rendimento;
	printf("Seu rendimento foi de %4.2f", rendimento);
	printf("\nValor total: %4.2f", total);*/


	// Exercício 9 - Faça um programa que calcule e mostre
	// a área de um triângulo. sabe-se que Área = (base * altura)/2
	/*float altura, base, area;
	printf("Digite a altura do triangulo: \n");
	scanf("%f%*c", &altura);
	printf("Digite a base do triangulo: \n");
	scanf("%f%*c", &base);
	area = (base * altura) / 2;
	printf("A area do triangulo e: %4.2f", area);*/


	// Exercicio 10 - Faça um programa que calcule e mostre a
	// área de um círculo. Sabe-se que Área = π * R^2
	float raio, area;
	printf("Digite o raio do circulo: \n");
	scanf("%f%*c", &raio);
	area = 3.14 * pow(raio, 2);
	printf("A area do circulo e %4.2f ", area);

    //Para o programa a espera de uma tecla
    getchar();
    return 0;


}
