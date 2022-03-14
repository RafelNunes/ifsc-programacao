#include<stdio.h>

int main()
{
	float pedBrita, dist, frete1, frete2, soma1, soma2, result1, result2;
	
	printf("Quantos metros cubicos de brita quer comprar? ");
	scanf("%f", &pedBrita);
	printf("Qual a distância de sua casa ao deposito do fornecedor[em km]? ");
	scanf("%f", &dist);
	
	soma1 	= pedBrita*60;
	soma2	= pedBrita*59;
	frete1 	= dist*3;
	frete2 	= dist*3.2;
	
	result1= soma1 + frete1;
	result2= soma2 + frete2;
	
	if(result1 < result2){
		printf("\nO menor preço pertence ao vendedor 1: %.2f.\n(valor do vendedor 2: %.2f)\n", result1, result2);
	}else if(result1 == result2){
		printf("\nOs dois vendedores tem o mesmo valor.\n(vendedor 1: %.2f vendedor 2: %.2f)\n", result1, result2);
	}else{
		printf("\nO menor preço pertence ao vendedor 2: %.2f.(valor do vendedor 1: %.2f)\n", result2, result1);
	}
	
	
  return 0;
}
