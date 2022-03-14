#include<stdio.h>

int main(void){
	
	float X[4] = {10,2,3,4}, soma;
	
	soma = X[2] * X[3] / X[1];
	printf("%.2f", soma);
}
