#include<stdio.h>
#include<math.h>

int main(void){
	int a, b, c, delta;
	float x1, x2;
	
	printf("Digite valor de A: ");
	scanf("%d", &a);
	if(a == 0){
		printf("Nao seria uma equecao de segundo grau. Digite novamente");
		scanf("%d", &a);
	}
	printf("Digite valor de B: ");
	scanf("%d", &b);
	printf("Digite valor de C: ");
	scanf("%d", &c);
	
	delta = b * b - 4 * a * c;
	
	if(delta > 0){
		x1 = -b + sqrt(delta) / 2 * a; 
		x2 = -b - sqrt(delta) / 2 * a;	
		printf("\nValor de delta:	 %d.\nValor de x1:	%.2f.\nValor de x2:	%.2f.", delta, x1, x2);
	}else {
		printf("\nImpossivel o calculo das raizes com Delta negativo.\n");
	}
	return 0;
}
