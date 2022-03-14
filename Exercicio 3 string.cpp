#include<stdio.h>

int main(){
	char sexo[2], nome[20];
	int idade;
	
	printf("Seu sexo(M/F): ");
	scanf("%s", &sexo);
	printf("Seu nome: ");
	scanf(" %s", &nome);
	printf("Sua idade: ");
	scanf("%d", &idade);
	
	if(sexo == 'F' && idade < 25){
		printf("%s: ACEITA", nome);
	}else{
		printf("NAO ACEITA");
	}

	return 0;
}
