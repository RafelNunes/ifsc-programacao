#include<stdio.h>

int main()
{
	int c, l;
	float p;
	
	printf("Informe comprimento do terreno: ");
	scanf("%d", &c);
	printf("Informe largura do terreno: ");
	scanf("%d", &l);	
	printf("Informe preço da tela p/ metro: R$");
	scanf("%f", &p);
	
	c = c + c;
	l = l + l;
	
	printf("\nValor para cobrir o terreno: R$%.2f.", p * (c + l));
	
	return 0;
}
