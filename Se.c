#include<stdio.h>
#include<stdlib.h>

int main()

{
	int A, B;
	
	printf("Valor 1: ");
	scanf("%d", &A);
	
	printf("Valor 2: ");
	scanf("%d", &B);
	
	if (A != B)
	{
	printf("%d e maior.", B);
	}
	else
	{ 
	printf("%d e maior.", A);
	}

return 0;
}

