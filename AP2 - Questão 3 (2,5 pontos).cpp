#include<stdio.h>

int main(void){
	int M, N;
	
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &M);
	printf("Digite quantas notas cada aluno deve informar contando mais 1 para a media: ");
	scanf("%d", &N);
	
	float notas[M][N];
	
	for(int i = 0; i < M; i++){printf("\n");
		printf("Notas do aluno numero %d: \n", i+1);
		for(int j = 0; j < N-1; j++){
			scanf("%f", &notas[i][j]);
		}
	}
	int cont = 0;
	for(int i = 0; i < M; i++){
		float soma = 0;
		for(int j=0; j < N-1; j++){
			soma = soma + notas[i][j];
		}
		notas[i][N-1]=soma/(N-1);
		if (notas[i][N-1] >= 6){
			cont = cont + 1;
		}
	}printf("Qtd de alunos aprovados: %d\n", cont);
	
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
		printf("%6.2f", notas[i][j]);
		}
		printf("\n");
	}
	return 0;
}
