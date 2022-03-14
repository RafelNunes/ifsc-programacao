#include<stdio.h>

int main()
{
	int num, cont = 0, soma = 1, soma2;
	
	printf("Digite numero: ");
	scanf("%d", &num);
	
	for(int x = 1; x < num; x++){
		cont = cont + 1;
		soma = soma * cont;
			
	 printf("\n%d", cont);
	}
	soma2 = soma * (cont + 1);
	
	printf("\n\nSao os vetoriais de %d.", num);
	printf("\n%d! = %d", num, soma2);
}
