#include<stdio.h>

int main()
{
	int a, b, soma;
	
	printf("DIgite valor de a: ");
	scanf("%d", &a);
	printf("Digite valor de b: ");
	scanf("%d", &b);
	
	for(int x = 1; x <= a; x++){
		soma = soma + b;
	}
	printf("\n%d x %d = %d\n", a, b, soma);
}
