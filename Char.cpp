#include<stdio.h>
#include<stdlib.h>

int main(void){
	char letra1, letra2;
	
	printf("Digite um caracter: ");
	scanf("%c", &letra1);
	
	while(letra1 != 'X')
	{printf("Digite um  caracter: ");
	scanf(" %c", &letra1);
	}
	
	printf("Letra1: %c Letra2: %c\n", letra1, letra2);
}
