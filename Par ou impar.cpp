#include<stdio.h>

int main()
{
	int V, W;
	printf("Digite um valor: ");
	scanf("%d", &V);
	
	W = V % 2;
	
	if (W == 0)
	{
		printf("par");
	} 
	else 
	{ 
		printf("impar");
	}
}

