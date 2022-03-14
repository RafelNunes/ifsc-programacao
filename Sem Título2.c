#include<stdio.h>


int main()
{
	float B, A, S1, S2;
	
	printf("Valor da base: ");
	scanf("%f", &B);
	printf("Valor da altura: ");
	scanf("%f", &A);
	S1 = 2 * (B + A);
	S2 = A * B;
	
	printf("Perimetro = %.2f \n", S1);
	printf("Area = %.2f", S2);
	
}

