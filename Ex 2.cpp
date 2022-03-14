#include<stdio.h>

int main()
{
	int num;
	for(int x =1; x <=10; x++){
		printf("Digite numero: ");
		scanf("%d", &num);
		if (num %2 == 0){
			printf("%d = par\n", num);
		}
		else{
			printf("%d = impar\n", num);
		}
	}
}
