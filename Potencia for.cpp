#include<stdio.h>

int main()
{
	int a, b, potencia=1;
	
	printf("Digite a e b: ");
	scanf("%d %d", &a, &b);
	for(int x = 0; x < b; x++);{
		potencia = potencia*a;
	}
	printf("%d^%d=%d", a, b, potencia);

	return(0);
}
