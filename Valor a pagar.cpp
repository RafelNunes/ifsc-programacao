#include<stdio.h>

main()
{
	float V, D, Vf;
	printf("Digite o valor da compra: R$");
	scanf("%f", &V);
	if (V >= 200){ 
		D = (V * 15) / 100;
		Vf = V - D;
		printf("Valor final com desconto: R$%.2f", Vf);
	}
	else 
	printf("Valor final: R$%.2f", V);
}

