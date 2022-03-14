#include<stdio.h>

int main(void){
	
	int M[5][3], M2[5];
	int i = 0, j = 0;
	float soma = 0;
	
	for(i = 0; i < 2; i++){
		printf("Digite o nome do(a) aluno(a): ");
		scanf("%s", M[i]);
		printf("\n");
		for(j = 0; j < 3; j++){
			printf("Digite as notas do(a) aluno(a): ");
			scanf("%f", M[j]);
		}printf("\n");
	}
		
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			soma = soma + M[i][j];
		}
	}
	
	printf("Media %d ", soma/3);
	
	
	return 0;
}
