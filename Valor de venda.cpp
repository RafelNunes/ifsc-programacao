#include<stdio.h>

main()
{
	float Vc, F1, F2;
	printf("Digite o valor de compra do produto:	R$");
	scanf("%f", &Vc);
	
	F1 = (Vc * 40) / 100;
	F2 = (Vc * 30) / 100;
	
	if (Vc < 100){
		printf("Valor de venda:	R$%.2f", Vc + F1);
	} else {
		printf("Valor de venda:	R$%.2f", Vc + F2);
	}
}
