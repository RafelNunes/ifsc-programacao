#include<stdio.h>

int main(void){
	
	int vetor1[10], vetor2[10];

	printf("Vetor original\n\n");
	for(int i = 0; i < 10; i++){
		printf("Digite numero: ");
		scanf("%d", &vetor1[i]);
	}printf("\n\nVetor de ordem invertida\n\n");
	for(int i = 10; i >= 0 ; i--){
		scanf("%d", &vetor2[i]);
	}
	for(int i = 0; i <= 20; i++){
		printf("%d", vetor1[10] + vetor2[10]);
	}

}
