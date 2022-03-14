#include<stdio.h>

int main()
{
	float salario, soma = 0, media;
	int cont1=0, cont2=0;
	for(int x = 1; x <= 4; x++){
		printf("Digite o valor salarial: R$");
		scanf("%f", &salario);
		if (1100 < salario)
			cont1 = cont1 + 1;
		else 
			cont2 = cont2 + 1;
		soma = soma + salario;
	}
	media = soma /4;
	printf("\nMedia salarial:		 R$%.2f", media);
	printf("\n%d"), cont1;
}
