#include<stdio.h>

main()
{
	float S, P, Pa, Sf;
	
	printf("Valor do produto: R$");
	scanf("%f", &S);
	
	printf("Porcentagem de desconto: ");
	scanf("%f", &P);
	
	Pa = (S * P) / 100;
	Sf = S - Pa;
	printf("Valor descontada: R$%.2f.\n", Pa);
	printf("Valor final: R$%.2f.", Sf);
}
	
