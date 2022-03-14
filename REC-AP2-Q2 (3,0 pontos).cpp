#include<stdio.h>

int main(void){
	int N, soma;
	
	printf("Digite o numero de produtos a serem comparados: ");
	scanf("%d", &N);
	
	float mercados[10][N], cestaB[10];
	
	//Cadastro do valor dos produtos
	//iniciei o numero dos mercados em 1
	printf("\n");
	for(int i = 0; i < 10; i++){
			printf("Supermercado %d\n\n", i+1);
		for ( int j = 0; j < N; j++){
			printf("Produto %d:", j+1);
			scanf("%f", &mercados[i][j]);
		}printf("\n");
	}
	//Calculo da cesta básica
	for(int i = 0; i < 10; i++){
		soma = 0;
		for(int j = 0; j < N; j++){
			soma = soma + mercados[i][j];
		}cestaB[i]=soma;
	}
		for(int i = 0; i < 10; i++){
			printf("Valor da cesta basica do mercado %2d:\t%.2f.\n", i+1, cestaB[i]);
	}
	//Calculo de qual o menor valor de cesta básica
	float menor;
		for(int i = 1; i < 10; i++){
		menor = cestaB[0];
		if(cestaB[i]<menor){
			menor = cestaB[i];
			}
		}printf("\nMenor valor de cesta basica: %.2f\n", menor);
		printf("\nCesta basica encontrada no(s) Supermercado(s):");
		for(int i = 0; i < 10;i++){
			if(cestaB[i]==menor){
				printf("%d ", i+1);
			}
		}
	return 0;
}
