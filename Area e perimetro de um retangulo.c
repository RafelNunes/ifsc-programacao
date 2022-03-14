#include<stdio.h>
#include<math.h>

int main()
{
	float B, A, S1, S2A;
	
	printf("Valor da base: ");
	scanf("%f", &A);
	printf("Valor da altura: ");
	scanf("%f", &B);
	S1 = 2 * (A + B);
	S2A = B * A;
	
	printf("%.2f \n", S1);
	printf("%.2f", S2A);

}
