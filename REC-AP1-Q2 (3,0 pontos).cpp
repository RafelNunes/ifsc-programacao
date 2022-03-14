#include<stdio.h>

int main(void){
	float rendaF, soma=0, mediaPC;
	int membrosC, totalM=0;
	
	do{
		printf("Digite a qntd de membros de sua casa: ");
		scanf("%d", &membrosC);
		for(int i = 0; i < membrosC; i++){
			printf("Renda do morador %d: R$", i+1);
			scanf("%f", &rendaF);
			soma = soma + rendaF;
	}mediaPC= soma/membrosC;
	
		printf("Sua renda familiar: %.2f.\n\n", mediaPC);
		totalM = totalM + membrosC;
	}while(rendaF>0);
	printf("%d", totalM);
}
