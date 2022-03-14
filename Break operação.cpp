#include<stdio.h>

int main()
{
	int x, num, cont1 = 0, cont2 = 0;
	
	for( x = 1; x <= 100; x++ ){
		printf("%d)", x);
		printf("\nDigite numero: ");
		scanf("%d", &num);
		if (num <= 0)
		{
			printf("\nError\n\n");
			break;/*BREAK UTILIZADO PARA PARAR A OPERAÇÃO*/
		}
		else if(num % 2 == 0){
			cont1 = cont1 + 1;
		}
	    else if 
		 (cont2 = cont2 + 1);
}
	printf("\nN pares:    %d\n", cont1);
	printf("N impares:  %d", cont2);
return 0;
}
