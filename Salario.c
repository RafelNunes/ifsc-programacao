#include<stdio.h>

main()
{
	float S, S1, S2, S3, S4;
	
	printf("Por favor, informe seu salario: R$");
	scanf("%f", &S);

	S1 = (S * 20) / 100;
	S2 = S + S1;
	S3 = (S2 * 10) / 100;
	S4 = S2 - S3;

	printf("Valor inicial do salario: R$%.2f \n", S);
	printf("Valor com aumento de 20 porcento: R$%.2f \n", S2);
	printf("Valor com 10 porcento de desconto: R$%.2f", S4);

}

