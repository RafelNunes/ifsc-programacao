#include<stdio.h>

int main()
{
	int numf, num1, num2, i;
	
	printf("Digite primeiro numero : ");
	scanf("%d", &num1);
	printf("Digite segundo numero: ");
	scanf("%d",&num2);
	
	for(i = num1; i <= num2; i++){
		printf("%d\n", i);
		if(i%2==0){
			numf = numf + i;
		}
	}
	
	printf("%d", numf);
	
	return 0;
}
