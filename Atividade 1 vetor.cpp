#include<stdio.h>

int main()
{	
	//Atribuindo valores
	int vetor[6]={1,0,5,-2,-5,7}, soma;
	
	//Armazenando soma 
	soma = vetor[0] + vetor[1] + vetor[5];
	
	printf("Soma das posicoes 0, 1 e 5 do vetor: %d.\n\n", soma);
	
	//Atribuindo valor 100  na posição 4 do vetor
	vetor[4] = 100;
	
	//Mostrando valor do vetor
		for(int i = 0; i < 6; i++){
		printf("Vetor[%d]: %d\n", i, vetor[i]);
	}
	return 0;
}
