#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	float altura[30], media, soma = 0;
	int Acimam = 0;
	srand(time(NULL));
	for(int i = 0; i < 30; i++){
//		printf("Digite altura: ");
//		scanf("%f", &altura[i]);
		altura[i] = rand()%2+1.5;
		soma = soma + altura[i];
		printf("%.2f\n", altura[i]);
	}
	media = soma/30;
	
	for(int i = 0; i < 30; i++){
		if(altura[i]>media){
			Acimam++;
		}
	}
	printf("\nMedia de altura: %.2f.\n", media);
	printf("%d pessoas acima da media.\n", Acimam);
}
