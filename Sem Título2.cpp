#include<stdio.h>

int main(){
	int vetor[10];
	
	for(int i = 0; i < 10; i++){
		printf("Digite valor da posicao %d: ", i);
		scanf("%d", &vetor[i]);
	}
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
		if(vetor[i] > vetor[i+1]){
			int aux		= vetor[i];
			vetor[i]	= vetor[i+1];
			vetor[i+1]	= aux;
	}}
		printf("%d ", vetor[i]);
	}
}
