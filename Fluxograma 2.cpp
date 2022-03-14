#include<stdio.h>

int main(void){
	int valor1, valor2, x[4];
	char sinal, resposta;
	
	do{
	printf("Digite valor 1: ");
	scanf("%d", &valor1);
	printf("Digite sinal da operação(+,-,*,/): ");
	scanf("%s", &sinal);
	printf("Digite valor 2: ");
	scanf("%d", &valor2);
	
	if(sinal == '+'){
		x[0] = valor1 + valor2;
		printf("\n%d %c %d = %d",valor1, sinal, valor2, x[0]);
	}else if(sinal == '-'){
		x[1] = valor1 - valor2;
		printf("\n%d %c %d = %d",valor1, sinal, valor2, x[1]);
	}else if(sinal == '*'){
		x[2] = valor1 * valor2;
		printf("\n%d %c %d = %d",valor1, sinal, valor2, x[2]);
	}else if(sinal == '/'){
		if(valor1 == 0 || valor2 ==0){
			printf("Erro.Divisao por zero.");
	}else{
		x[3] = valor1 / valor2;
		printf("\n%d %c %d = %d",valor1, sinal, valor2, x[3]);
		}
	}
	printf("\n\nFazer outra conta?(Y para sim e N para nao)");
	scanf("%s", &resposta);
	if(resposta != 'N' || resposta != 'Y'){
		printf("Informacao invalida. Digite novamente.");
		scanf("%d", &resposta);
	}else if(resposta == 'N'){
		break;
	}
	printf("\n");
	}while(resposta == 'Y');
	
	
	return 0;
}
