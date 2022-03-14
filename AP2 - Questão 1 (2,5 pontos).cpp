#include<stdio.h>

int main(void){
	int vetor[80];
	int soma, media, var = 0;
	
	for(int i = 0; i < 8; i++){
		printf("%d)Digite salario do colaborador: ", i+1);
		scanf("%d", &vetor[i]);
		
	soma = soma + vetor[i];
	}
	media = soma/8;	
	
	for(int i = 0; i < 8; i++){
		if(media < vetor[i]){
			var = var + 1;
		}
	}
	printf("\nMedia de salarios: %d.", media);
	printf("\nQuantidade de salarios acima da media: %d.\n", var);
	
	return 0;
}
