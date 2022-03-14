#include<stdio.h>

int main()
{
	int x;
	
	for(int x = 10; x <= 1000; x++){
		if(x % 10 == 0){
			printf("A");
		}
	}
	printf("%d", x);
return 0;
}
