#include<stdio.h>

int main()
{
	int numero;
	printf("Digite numero: ");
	scanf("%d", &numero);
	
	if (numero % 2==0)
	{
		printf("%d = par", numero);
	}
	else 
	{
		printf("%d = impar", numero);
	}
}
