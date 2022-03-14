#include<stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int x, i = 0, maior = 0, menor = 0, numAleatorio=0;
	srand(time(NULL));
	for(x = 0; x <=100; x++){
		numAleatorio = rand()%1111+-1000;
		printf("Numeros aleatorios: %d\n", numAleatorio);
	if(x==0){
		maior=numAleatorio;
		menor=numAleatorio;
		x++;
	}else if(numAleatorio>maior){
		maior = numAleatorio;
	}else if(numAleatorio<menor){
		menor = numAleatorio;
		}
	}
	
	printf("\n\n Menor numero: %d \n Maior numero: %d ", menor,maior);
return 0;
}
