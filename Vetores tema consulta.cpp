#include<stdio.h>

int main(void){
	int X[8]={12,6,8,10,15,20,17,9}, num, cont = 0;
	
	printf("Digite numero: ");
	scanf("%d", &num);
	for(int i = 0; i < 8; i ++){
		if(num == X[i]){
			printf("%d na posicao %d.", num, i);
	}if(num!=X[i]){
		cont = cont + 1;
	}
}
	if(cont == 8){
			printf("X nao encontrado");
		}
}
