#include<stdio.h>

int main()
{
	float c, f1, f2;
	
	printf("Consumo de gas do condominio: ");
	scanf("%f", &c);
	
	f1 = 15 * c;
	f2 = (15 * c) + 20;
	
	if (c <= 10){
		printf("Valor a pagar:	R$%.2f", f1);
	} else { printf("Valor a pagar:	R$%.2f", f2);
	}
}
