#include<stdio.h>

int main()
{
	int A, B, C;
	
	printf("Digite algum valor: ");
	scanf("%d", &A);
	printf("Digite outro valor: ");
	scanf("%d", &B);
	
	if (A > B)
	{
		C = A - B;
			printf("Diferenca = %d", C);
	}	
	else
	{
		C = B - A;
			printf("Diferenca = %d", C);
	}
}

