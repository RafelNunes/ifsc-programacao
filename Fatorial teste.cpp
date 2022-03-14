#include<stdio.h>

int main()
{
	int num, cont = 0, soma = 1, soma2;
	
	printf("Digite numero: ");
	scanf("%d", &num);
	
	for(int x = 1; x < num; x++){
		soma = num * (num - 1);
			
	 printf("\n%d", cont);
	}
	
	printf("\n\nSao os vetoriais de %d.", num);
	printf("\n%d! = %d", num, soma);
}
