#include<stdio.h>

int main(){
	int matriz1[5][5], matriz2[5][5], i, j;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(matriz1[i] == matriz1[j]){
				matriz1[i][j] = 1;
			}else{
				matriz1[i][j] = 0;
			}
			printf("%d ", matriz1[i][j]);
		}printf("\n");
	}
	return 0;
}
