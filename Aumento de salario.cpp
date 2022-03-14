#include<stdio.h>

main()
{
	float salario, porcent, porcentAumento, salarioFinal;
	
	printf("Valor do salario: R$");
	scanf("%f", &salario);
	
	printf("Qual a porcentagem de aumento? ");
	scanf("%f", &porcent);
	
	porcentAument = (salario * porcent) / 100;
	salarioFinal = salario + porcentAumento;
	printf("Aumentou: %.2f.\n", porcentAumento);
	printf("Valor final: R$%.2f.", salarioFinal);
	
}

