#include<stdio.h>

int main()
{
	float valor, soma = 0, media, cont1=0, cont2=0;

	for(int x = 1; x <= 3; x++){
		printf("Digite o valor salarial: R$");
		scanf("%f,", &valor);
		soma = soma + valor;
		if(valor > 1100){
			cont1 = cont1 + 1;
		}
		else 
			cont2 = cont2 + 1;
		}
		
		media = soma /4;
		printf("Media salarial: %.2f\n", media);
		printf("n° pessoas que ganham mais q um salario minimo: %.0f\n", cont1);
return 0;
}
