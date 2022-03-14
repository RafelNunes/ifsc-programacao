#include<stdio.h>

int main(){
	int X[9] = { 9, 8, 6, 7, 5, 9, 6, 4, 8}, cont, soma = 0;
	float media;

	for(int i = 0; i < 9; i++){
		soma = soma + X[i];
		media = soma/9;
	}
	for(int i = 0; i < 9; i++){
		if(X[i]>media){
		cont = cont + 1;
	  }
	}
			
	
	printf("Media: %.2f.\n", media);
	printf("%d valores estao acima da media.\n", cont);
	
}
