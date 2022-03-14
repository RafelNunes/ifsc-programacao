#include<stdio.h>

int main(void){
	int matriz[4][5]={2,3,1,4,5,1,3,-5,0,8,2,5,6,3,-5,-1,0,1,2,3};
	
	for(int i = 0; i < 4; i++){printf("|");
		for(int j = 0; j < 5; j++){
		printf("  %d\t", matriz[i][j]);
	}printf("|\n");
}
}
