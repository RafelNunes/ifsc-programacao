#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	
	int vetor[50];
	srand(time(NULL));
	printf("Vetor original\n\n");
	for(int i = 0; i < 50; i++){
//		printf("Digite numero: ");
//		scanf("%d", &vetor[i]);
		vetor[i] = rand()%50+0;
		printf("%d ", vetor[i]);
	}printf("\n\nVetor de ordem invertida\n\n");
	for(int i = 49; i > -1; i--){
		printf("%d ", vetor[i]);
	}

}
