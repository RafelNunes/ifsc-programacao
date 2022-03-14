#include<stdio.h>

int main(void){
	int N, soma, media, cont = 0;
	
	printf("Digite qntd de alunos: ");
	scanf("%d", &N);
	
	int vetor[N];
	
	for(int i = 0; i < N; i++){
		printf("Digite o tempo de estudo do aluno %d:(em minutos) ", i+1);
		scanf("%d", &vetor[i]);
		
	soma = soma + vetor[i];
	}media=soma/N;
	
	for(int i = 0; i < N; i++){
		if(vetor[i] > media){
			cont = cont + 1;
		}	
	}
	printf("\nMedia: %d", media);
	printf("\nAlunos com tmp de estudo acima da media: %d\n", cont);
	printf("Vetor em ordem inversa:  ");
	for(int i = N-1; i > -1; i--){
		printf("%d ", vetor[i]);
	}printf("\n\nVetor na ordem original: ");
	for(int i = 0; i < N; i++){
		printf("%d ", vetor[i]);
	}
	return 0;
}
