#include<stdio.h>
#include<stdlib.h>

int main(void){
	int N, vetor[N], var, A;
	int numC = 0;
	
	printf("Digite a qntd de numeros necessarios: ");
	scanf("%d", &N);printf("\n");
	
	
	
	for(int i = 0; i < N; i++){
		printf("Digite valor: ");
		scanf("%d", &vetor[i]);
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(i != j){
				if(vetor[i]==vetor[j]){
			
					printf("Digite novamente");
					scanf("%d", &vetor[i+1]);
					
				}
			}
		}
	}
	}
			printf("\nDigite numero de consulta: ");
			scanf("%d", &numC);
			for(int i = 0; i < N; i++){
			if(numC == vetor[i]){
				printf("\nNumero %d encontrado na posição %d do vetor.\n", numC, i);
			}}
	
	}
			
