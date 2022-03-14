#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	int matriz[4][4], l1, l2, c1, c2;
	int i = 0, j = 0, maior, menor;
	srand(time(NULL));
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
//			printf("Digite valor da matriz posição %d %d: ", i, j);
//			scanf("%d", &matriz[i][j]);
	
	matriz[i][j] = rand()%100+1;		
	printf("%d ", matriz[i][j]);
				
		if(i==0 && j==0){
			maior=matriz[i][j];
			menor=matriz[i][j];
		}else{
			if(matriz[i][j]>maior){
				maior=matriz[i][j];
				l1 = i;
				c1 = j;
			}else{
			if(matriz[i][j]<menor){
				menor=matriz[i][j];
				l2 = i;
				c2 = j;
			}}
			}
		}
	}
	printf("\n\nMaior: %d  localizado na linha %d e na coluna %d.\nMenor: %d   localizado na linha %d e na coluna %d.", maior, l1, c1, menor, l2, c2);
}
