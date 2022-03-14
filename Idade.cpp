#include<stdio.h>

int main(void){
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 18 && idade <= 112){
		printf("Voce e maior de idade.");
	}else if(idade > 112){
		printf("Para que ja ta mentindo kkk");
	}else{
		printf("Voce e menor de idade");
	}
	return 0;
}
