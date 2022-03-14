#include<stdio.h>

main()
{
	float Kmi, Kmf, Km3, C, CT, M, F;
	
	printf("Qual a quilometragem no inicio da viagem? ");
	scanf("%f", &Kmi);
	printf("Quanto a quilometragem no final da viagem? ");
	scanf("%f", &Kmf);
	printf("Qual a quantidade de combustivel gasta?(em litros): ");
	scanf("%f", &C);
	printf("Qual a capacidade do tanque de seu veiculo? ");
	scanf("%f", &CT);
	
	Km3 = Kmf - Kmi;
	M = Km3 / C;
	F = M * CT;
	
	printf("O carro faz %.1fkm com o tanque cheio", F);
}


