#include<stdio.h>

int main()
{
	float pedBrita, dist, frete, soma, result;
	
	printf("Quantos metros cubicos de brita quer comprar? ");
	scanf("%f", &pedBrita);
	printf("Qual a dist�ncia de sua casa at� o dep�sito do fornecedor[em km]? ");
	scanf("%f", &dist);
	
	if(pedBrita > dist){
		soma 	= pedBrita*59;
		frete 	= dist*3.2;
		result	= pedBrita+frete;
		
		printf("O menor pre�o pertence ao vendedor 2: %.2f.(valor do vendedor 1: %.2f)", result);
	}else if(dist > pedBrita){
		soma  = pedBrita*60;
		frete = dist*3
	}
}
