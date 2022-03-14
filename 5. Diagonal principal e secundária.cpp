#include<stdio.h>

int main(void){
	int matriz[5][5];
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("Digite valor da matriz na posicao %d %d: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}  printf("\nDiagonal principal: \n");
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(matriz[i][j] == matriz[j][j]){
			printf("%d ", matriz[j][j]);
			}
		}
	}	printf("\nDiagonal secundaria: \n");

		printf("%d ", matriz[0][4]);
		printf("%d ", matriz[1][3]);
		printf("%d ", matriz[2][2]);
		printf("%d ", matriz[3][1]);
		printf("%d" , matriz[4][0]);		
		
	return 0;
}
