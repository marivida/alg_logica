#include <stdio.h>
int main()
{
	int num;
	printf("Digite um numero inteiro: ");
	scanf("%d%*c", &num);
	if (num < 5)
		printf("\n valor menor que 5");
	else if (num == 5)
		printf("\n valor igual a 5");
	else
		printf("valor maior que 5");
	
	getchar();
	return 0;
}