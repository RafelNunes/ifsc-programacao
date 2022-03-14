#include<stdio.h>

int main()
{
	int mes;
	
	printf("Digite um numero referente ao mes do ano:");
	scanf("%d", &mes);
	
	switch (mes)
	{
		case 1 :
			printf("\nJaneiro: 31 dias.\n");
		break;
		case 2 : 
			printf("\nFevereiro: 28 dias.\n");
		break;
		case 3 :
			printf("\nMarco: 31 dias.\n");
		break;
		case 4 :
			printf("\nAbril: 30 dias.\n");
		break;
		case 5 :
			printf("\nMaio: 31 dias.\n");
		break;
		case 6 :
			printf("\nJunho: 30 dias.\n");
		break;
		case 7 :
			printf("\nJulho: 31 dias.\n");
		break;
		case 8 :
			printf("\nAgosto: 31 dias.\n");
		break;
		case 9 :
			printf("\nSetembro: 30 dias.\n");
		break;
		case 10 :
			printf("\nOutubro: 31 dias.\n");
		break;
		case 11 :
			printf("\nNovembro; 30 dias.\n");
		break;
		case 12 :
			printf("\nDezembro: 31 dias.\n");
		break;
		default :
			printf("\nmes invalido");
	}
return 0;
}

