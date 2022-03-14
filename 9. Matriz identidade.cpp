#include<stdio.h>

int main(void){
	
	int M[10][10];
	
	for(int i = 0; i < 10; i++){printf("|");
		for(int j = 0; j < 10; j++){
		if(i==j){
			printf(" 1  ");
		}else{
			printf(" 0  ");
		}
		}
	printf("|\n");
	}
	
	return 0;
}
