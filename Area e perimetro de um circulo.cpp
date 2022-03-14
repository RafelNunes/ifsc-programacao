#include<stdio.h>

main()
{
	float R, P, S1, S2;
	
	printf("Digite o valor de raio do circulo: ");
	scanf("%f", &R);

	S1 = 3.14 * (R*R);
	S2 = (2*3.14)*R;
	printf("Area = %.2f \n", S1);
	printf("Perimetro = %.2f", S2);
	
}

