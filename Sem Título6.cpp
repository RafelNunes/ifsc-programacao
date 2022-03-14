#include<stdio.h>

int main()
{
	int x, maior = 0, menor = 0, num;
	for(x = 0; x <=3; x++){
		printf("Digite numero: ");
		scanf("%d", &num);
		if(x==0){
		maior=num;
		menor=num;
		x++;
	}	else if(num>maior){
			maior = num;
		}
		else if(num<menor){
			menor = num;
		}
	}
	
	printf("\nMenor numero: %d\nMaior numero: %d ", menor,maior);
return 0;
}
