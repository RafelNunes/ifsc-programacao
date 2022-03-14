#include<stdio.h>

int main(){
	char nome[20];
	int i=0;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	nome[4] = '\0';
	
	printf("%s", nome);
	
	return 0;
}
