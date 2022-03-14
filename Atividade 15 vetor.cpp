#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int matriz[4][4], i, j;
	srand(time(NULL));
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			matriz[i][j] = rand()%100+1;
			printf("%d ", matriz[i][j]);
		}printf("\n");
	}
	
	
	return 0;
}
