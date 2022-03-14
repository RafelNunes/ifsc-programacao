#include<stdio.h>

int main(void){
	
	int M, N;
		
	printf("Digite valor das linhas de sua matriz:   ");
	scanf("%d", &M);
	printf("Digite valor de colunas de sua matriz:   ");
	scanf("%d", &N);
	
	int matriz[M][N];
	
	for(int i = 0; i < M; i++){
		printf("\n");
			for(int j = 0; j < N; j++){
		printf("Digite valor de %d %d: ", i, j);
		scanf("%d", &matriz[i][j]);		}
	}
	printf("\n");
	for(int i = 0; i < M; i++){printf("|");
		for(int j = 0; j < N; j++){
			printf("   %d\t", matriz[i][j]);
		}printf("|\n");
	}
return 0;
}
