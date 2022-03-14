#include<stdio.h>

int main()
{
	int a, b, soma;
	
	printf("Digite a: ");
	scanf("%d", &a);
	printf("Digite b: ");
	scanf("%d", &b);
	
	for (int x = 0; x < 3; x++){
		soma = a + b;
	}
	printf("%d", soma);
}
