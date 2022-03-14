#include<stdio.h>

int main(void){
	int numC, flag = 0, vetor[3];
	
	for(int i = 0; i < 3; i++){
		printf("Digite numero: ");
		scanf("%d", &vetor[i]);
	}
	printf("\nDigite numero de consulta: ");
	scanf("%d", &numC);
	for(int i = 0; i < 100; i++){
		if(numC == vetor[i]){
			printf("\nNumero %d encontrado na posição %d do vetor.\n", numC, i);
			flag=1;
		}
	}if(flag == 0){
		printf("\nValor nao encontrado.\n");
	}
	return 0;
}
