#include<stdio.h>

int main()
{
	float valor, cont1, cont2;
	for(int x = 1; x <= 3; x++){
		printf("Digite: ");
		scanf("%f", &valor);
		if(valor > 1100){
			cont1 = cont1 + 1;
		}
		else 
			cont2 = cont2 + 1;
		}
		printf("%.2f", cont1);

}
