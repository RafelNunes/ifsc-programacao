#include<stdio.h>

int main()
{
	int num, maior=0, menor=0;
	
	for(int x = 0; x <= 2; x++){
		printf("\nDigite numero: ");
		scanf("%d", &num);
		
		
		if(maior < num){
			maior = num;
		}else{
			menor = num;
		}
		
	
	}
	
		printf("\nMaior num: %d.\nMenor num: %d.\n", maior, menor);
	
}

