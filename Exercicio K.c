#include<stdio.h>

int main()
{
	int numf, numf2, num1, num2, i, r;
	
	printf("Digite primeiro numero : ");
	scanf("%d", &num1);
	printf("Digite segundo numero  : ");
	scanf("%d",&num2);
	while(num2<num1){
		if(num2<num1){
		printf("O segundo numero nao pode ser menor que o primeiro.\n");
		printf("Digite primeiro numero: ");
		scanf("%d", &num1);
		printf("Digite segundo numero: ");
		scanf("%d", &num2);
	}}
	printf("\nNumeros:\n");
	
	//Adição de pares
	
	//par c/ par
	if(num2%2==0&&num1%2==0){
		for(i = num1; i <= num2; i++){
			printf("%d\n", i);
			if(i%2==0){
				numf = numf + i;
			}
		}
	}
	//par c/ impar
	if(num2%2==0&&num1%2!=0)
	{
		for(i = num1; i <= num2; i++){
			printf("%d\n", i);
			if(i%2==0){
				numf = numf + i;
			}
		}numf = numf + num1;
	}

	//impar c/ par
	if(num2%2!=0&&num1%2==0){
		for(i = num1; i <= num2; i++){
			printf("%d\n", i);
			if(i%2==0){
				numf = numf + i;
			}
		}numf = numf + num2;
	}
	//impar c/ impar
	else if(num2%2!=0&&num1%2!=0)
	{
		for(i = num1; i <= num2; i++){
			printf("%d\n", i);
			if(i%2==0){
				numf = numf + i;
			}
		}numf = numf + num1 + num2;
	}	
	printf("\nAdicao de positivos    : %d\n", numf);
	
	//Multipicação de ímpares

	//par c/ par
	if(num2%2==0&&num1%2==0){
		for(i = num1; i <= num2; i++){
			if(i%2!=0){
				numf2 = numf2 * i;
			}
		}numf2 = numf2 * num1 * num2;
	}
	//par c/ impar
	if(num2%2==0&&num1%2!=0)
	{
		for(i = num1; i <= num2; i++){
			if(i%2!=0){
				numf2 = numf2 * i;
			}
		}numf2 = numf2 * num2;
	}

	//impar c/ par
	if(num2%2!=0&&num1%2==0){
		for(i = num1; i <= num2; i++){
			if(i%2!=0){
				numf2 = numf2 * i;
			}
		}numf2 = numf2 * num1;
	}
	//impar c/ impar
	else if(num2%2!=0&&num1%2!=0)
	{
		for(i = num1; i <= num2; i++){
			if(i%2!=0){
				numf2 = numf2 * i;
			}
		}
	}	
	printf("Multipicacao de impares: %d\n", numf2);

	return 0;
}
