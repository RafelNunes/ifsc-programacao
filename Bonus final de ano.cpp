#include<stdio.h>

int main()
{
	float salario, anos, bonus50, bonus75;
	
	printf("Tempo de colaborador(em anos): ");
	scanf("%f", &anos);
	printf("Valor do salário:R$ ");
	scanf("%f", &salario);
	
	bonus50 = (salario * 50) / 100;
	bonus75 = (salario * 75) / 100;
	
	if (anos >= 3){
		printf("Valor de bonus:	R$%.2f\nValor final:	R$%.2f", bonus75, bonus75 + salario);
	}
	else { printf("Valor de bonus:	R$%.2f\nValor final:	R$%.2f", bonus50, bonus50 + salario);
	}
}
