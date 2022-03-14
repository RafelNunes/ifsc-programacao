#include<stdio.h>

int main(void){
	int N, D, aux;
	
	printf("Digite o tamanho que deseja para o vetor: ");
	scanf("%d", &N);
	
	int vetor[N];
	
	printf("Digite valor de casas que devem ser deslocadas: ");
	scanf("%d", &D);
	
	for(int i = 0; i < N; i++){
		printf("\nDigite valor na posicao %d do vetor: ", i);
		scanf("%d", &vetor[i]);
	}
	
		
		
	}
	for(int i = 0; i < N; i++){
		printf("%d ", vetor[i]);
	}
}
