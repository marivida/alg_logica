#include <stdio.h>
int main()
{
    float base, altura, area;
    //Mostra mensagem antes da leitura da base
    printf("\nDigite a base do triangulo\n");
    //Recebe a base
    scanf("%f%*c", &base);
    //Mostra mensagem antes da leitura da altura
    printf("\nDigite a altura do triangulo\n");
    //Recebe a altura
    scanf("%f%*c", &altura);
    //Calcula a area
    area = (base*altura)/2;
    //Mostra a area
    printf("\nA area do triangulo e %4.2f",area);

    //Para o programa a espera de uma tecla
    getchar();
    return 0;
}
