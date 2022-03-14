#include<stdio.h>

int main()
{
	int num;
	
	printf("Digite numero: ");
	scanf("%d", &num);
	while(num < 0){
		printf("Valor invalido.\nDigite numero: ");
		scanf("%d", &num);
	}
	printf("Dobro: %d", num+num);
	
	
	return 0;
	
}
