#include<stdio.h>

main()
{
	int A, B ,C, S1;
	printf("Digite valor de A: ");
	scanf("%d", &A);
	printf("Digite valor de B: ");
	scanf("%d", &B);
	printf("Digite valor de C: ");
	scanf("%d", &C);

	S1 = A + B;
	if (S1 > C){
		printf("Soma de A e B = %d > C.", S1);
	} 
	else 
	printf("Soma de A e B < C.");
}

