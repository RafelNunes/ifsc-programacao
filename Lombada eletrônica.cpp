#include<stdio.h>

main()
{
	float V, m;
	
	printf("Velocidade(km/h):");
	scanf("%f", &V);

	m = (V - 60) * 10;
	
	if (V > 60) {
		printf("Multado!\n"); 
		printf("O valor de sua multa sera de: R$%.2f", m);
	}
	else 
	printf("Nao foi multado");
}

