#include<stdio.h>

int main(void){
	int matriz[3][4] = {0, 2, 3, 4, 1, -2, 3, 5, 2, 4, -1, 0}, soma;
	
	soma = matriz[0][0]+matriz[1][1]-matriz[2][2];
	printf("%d", soma);
return 0;
}
