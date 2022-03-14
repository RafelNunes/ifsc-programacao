#include<stdio.h>

int main(void){
	
	int M[3][15], M2[15];
	int i = 0, j = 0, menor;
	
	for(i = 0; i < 3; i++){
		printf("Loja numero %d\n", i+1);
		for(j = 0; j < 3; j++){
			printf("\nValor do produto %d: R$", j+1);
			scanf("%f", M[j]);
		}printf("\n");
		if(i==0 && j==0){
			menor=M[i][j];
	}}
	for(j = 0; j < 3; j++){
		for(i = 0; i < 1; i++){
			            //loja1
			if(M[1][j] > M[0][j] < M[2][j]){
				
				M2[j]=M[i][j];
			
			}else if(M[0][j] > M[1][j] < M[2][j]){
				
				M2[j]=M[1][j];
				
			}else if(M[0][j] > M[2][j] < M[1][j]){
			
				M2[j]=M[2][j];
			
			}
		}
	}
		
			
	for(int i = 0; i < 3; i++){
		printf("O produto %d da loja tal, custa %d \n", i+1, M2[i]);
	}
		
	
	return 0;
}
