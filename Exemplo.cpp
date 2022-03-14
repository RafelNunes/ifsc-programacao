#include<stdio.h>

int main()
{
	int maior=0, menor=0, aux=0, i=0;
	do{
	printf("Digite numero: ");
	scanf("%d", &aux);
	if(i==0){
		maior=aux;
		menor=aux;
		i++;
	} else if(aux==0){
		break;
	}else if(aux>maior){
		maior = aux;
	}else if(aux<menor){
		menor = aux;
		}
	}while(1);
	printf("\n\n Menor numero: %i \n Maior numero: %i ", menor,maior);
}
