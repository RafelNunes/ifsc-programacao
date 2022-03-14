#include<stdio.h>
#include<conio.h>

int main(void)
{
	char nome[61], cargo[30];
	float SalarioH, HorasT, imposto;
	
	printf("Qual seu nome? ");
	scanf("%s", &nome);
	printf("Qual seu cargo? ");
	scanf("%s", &cargo);
	printf("Qual seu salário/hora? ");
	scanf("%f", &SalarioH);
	printf("Quais suas horas trabalhadas? ");
	scanf("%f", &HorasT);
	printf("Valor de imposto: ");
	scanf("%f", &imposto);

	printf("\nNome: %s\tCargo: %s\n", nome, cargo);
	printf("Salario/Hora: %f\tHoras/Trabalhadas: %f\timposto: %f", SalarioH, HorasT, imposto);
	
	return 0;
}
