#include<stdio.h>

int main()
{
	float IMC, peso, altura;
	for( int x = 1; x <= 3; x++){
		printf("Pessoa %d)\n", x);
		printf("Digite seu peso: ");
		scanf("%f", &peso);
		printf("Digite sua altura: ");
		scanf("%f", &altura);
		IMC = peso/(altura*altura);
		printf("\nIMC de pessoa %d: %.2f.\n", x, IMC);
		printf("\n");
	}
}
