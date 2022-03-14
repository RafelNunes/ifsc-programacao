#include<stdio.h>

int main(){
	int vetor[3][3];
	
	for(int i  = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
		printf("Digite valor de %d %d: ", i, j);
		scanf("%d", &vetor[i][j]);
		}
	}
	for(int i = 0; i < 3; i++){printf("|");
		for(int j = 0; j < 3; j++){
			printf("   %d\t", vetor[i][j]);
		}printf("|\n");
	}
	
	
	return (0);
}
