#include<stdio.h>

int main(void){
	int temp;
	
	printf("Digite a temperatura de onde voce esta: ");
	scanf("%d", &temp);
	
	printf("\nSENSACAO\n\n");

	if(temp < 10){
		printf("Muito frio.");
	}else if(temp > 10 && temp <= 20){
		printf("Frio.");
	}else if(temp > 20 && temp <= 25){
		printf("Agradavel.");
	}else if(temp > 25 && temp <= 30){
		printf("Quente.");
	}else{
		printf("Muito quente.");
	}
	return 0;
}
