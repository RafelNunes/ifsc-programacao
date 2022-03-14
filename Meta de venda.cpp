#include<stdio.h>

main()
{
	float M;
	
	printf("Digite o valor de venda final do mes: R$");
	scanf("%f", &M);
	
	if (M >= 30000.00)
	{
		printf("Parabens, voce superou a meta mensal!");
	}
	else 
	printf("Infelizmente a meta mensal nao foi concluida!");
}

