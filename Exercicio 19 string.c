#include<stdio.h>
#include<string.h>

int main(){
	char palavra1[20], palavra2[20];
	int retorno;
	
	printf("Digite palavra 1: ");
	scanf("%s", &palavra1);
	printf("Digite palavra 2: ");
	scanf(" %s", &palavra2);
	
	retorno = strcmp(palavra2,palavra1);
	
	if(retorno > 0){
		printf("A palavram '%s' vem primeiro na ordem alfabetica.", palavra1);
	}else{
		printf("A palavram '%s' vem primeiro na ordem alfabetica.", palavra2);
	}

	 
	return 0;
}
