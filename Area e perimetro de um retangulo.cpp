#include<stdio.h>

int main()
{
	float B, A, S1P, S2A;
	
	printf("Valor da base: ");
	scanf("%f", &A);
	printf("Valor da altura: ");
	scanf("%f", &B);
	S1P = 2 * (A + B);
	S2A = B * A;
	
	printf("Valor do perimetro = %.1f \n", S1P);
	printf("Valor da base = %.1f", S2A);

}

