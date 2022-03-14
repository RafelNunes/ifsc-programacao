#include<stdio.h>

int main()
{
	int num, soma, var, cont = 0;
	printf("Digite numero: ");
	scanf("%d", &num);
	
	printf("\nNumeros divisiveis por %d:\n", num);
	
	for(int x = 1; x <= num; x++){
		cont = cont + 1;
		soma = num % cont;
	
	if(soma == 0){
		printf("\n%d", cont);
	}
}

	
	
	
	
	
	
	



}
	

