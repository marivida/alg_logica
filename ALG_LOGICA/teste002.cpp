#include<stdio.h>
int main ()
{
    float nota1, nota2, nota3, peso1, peso2, peso3, media;
    // Receba as tr�s notas e seus pesos
    printf("Digite as notas e seus pesos: ");
    scanf("%f%*c",&nota1);
    scanf("%f%*c",&nota2);
    scanf("%f%*c",&nota3);
    scanf("%f%*c",&peso1);
    scanf("%f%*c",&peso2);
    scanf("%f%*c",&peso3);
    //Calcula a m�dia
    media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1 + peso2 + peso3);
    //Mostra o resultado da m�dia
    // Formatando a sa�da para mostrar no m�nimo 3 caracteres
    // e destes, 2 caracteres para a parte decimal
    printf("A media e %3.2f\n", media);

    //Para o programa a espera de uma tecla
    getchar();
    return 0;


}

