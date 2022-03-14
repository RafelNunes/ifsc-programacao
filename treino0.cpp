#include<stdio.h>

int main(void){
	char nome[20], senha[20];
	
	printf("Dgt nome de usuario: ");
	scanf("%s", &nome);
	printf("Dgr senha do usuario: ");
	scanf("%s", &senha);
	if(senha == nome){
	do{
		printf("Senha n pode ser igual a nome. Digite novamente ");
		scanf("%s", &senha);
	}while(senha == nome);	
}
	printf("\nNome de usuario: %s.\n", nome);
	printf("\nSenha de usuario: %s.", senha);
}	
