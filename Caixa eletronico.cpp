#include<stdio.h>

int main()
{
	int V, cem, cinq1, cinq2, vint1, vint2, dez1, dez2, cinc1, cinc2;
	
	printf("Qual valor de saque:R$ ");
	scanf("%d", &V);
	cem = V / 100;
	cinq1 = V - (cem * 100);
	cinq2 = cinq1 / 50;
	vint1 = cinq1 - (cinq2 * 50);
	vint2 = vint1 / 20;
	dez1 = vint1 - (vint2 * 20);
	dez2 = dez1 / 10;
	cinc1 = dez1 - (dez2 * 10);
	cinc2 = cinc1 / 5;
	
	printf("Notas(s) de 100 recebida(s):	 %d\n", cem);
	printf("Notas(s) de 50 recebida(s):	 %d\n", cinq2);	
	printf("Notas(s) de 20 recebidas(s):	 %d\n", vint2);
	printf("Nota(s) de 10 recebidas(s):	 %d\n", dez2);
	printf("Nota(s) de 5 recebidas(s):	 %d", cinc2);
	
}

