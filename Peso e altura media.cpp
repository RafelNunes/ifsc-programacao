#include<stdio.h>

int main()
{
	float peso, altura, soma1, soma2, media1, media2;
	
	for(int x = 1; x <= 2; x++){
		printf("\nPessoa %d\n",x);
		printf("Digite peso: ");
		scanf("%f", &peso);
		printf("\nDigite altura: \n");
		scanf("%f", &altura);
		
		soma1 = soma1 + peso;
		soma2 = soma2 + altura;
		
		media1 = soma1 / 2;
		media2 = soma2 / 2;
	}
	
	printf("Media de peso = %.1f.\nMedia de altura = %.1f", peso, altura);
}
