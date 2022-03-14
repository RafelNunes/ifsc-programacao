#include<stdio.h>

int main()
{
	int num;
	
	printf("Valor do produto: R$");
	scanf("%d", &num);
	printf("Valor com desconto: R$%d.", num-(num*12)/100);
	
	return 0;
}
