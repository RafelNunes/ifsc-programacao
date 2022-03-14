#include<stdio.h>

int main()
{
	float num, media, soma = 0;
	for(int x = 1; x <= 10; x++){
		printf("Digite: ");
		scanf("%f", &num);
		soma = soma + num;
	}
	media = soma/10;
	printf("\nMedia: %.2f \n", media);
	return 0;
}
