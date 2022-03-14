#include<stdio.h>

int main(){
	char sexo[1], nome[20];
	int idade;
	
	printf("Seu sexo(M/F): ");
	scanf("%s", &sexo);
	printf("Seu nome: ");
	scanf(" %s", &nome);
	printf("Sua idade: ");
	scanf("%d", &idade);
	
	if(sexo[0] == 'F' && idade < 25){
		printf("\n%s: ACEITA", nome);
	}else{
		printf("\nNAO ACEITA(O)");
	}

	return 0;
}
