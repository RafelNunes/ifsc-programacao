#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int numeroAleatorio, usuario;
	
	printf("1 - PEDRA\n2 - PAPEL\n3 - TESOURA\n\n");
	printf("Com qual vai jogar? ");
	scanf("%d", &usuario);
	srand(time(NULL));
	numeroAleatorio = rand()%3+1;
		printf("\nComputador jogou: %d.\n", numeroAleatorio);
			printf("Voce jogou: %d.\n\n", usuario);
		
			
	
	switch(usuario)
	{
		case 1:
			switch(numeroAleatorio){
				case 1:
				printf("Empate!\n");
				break;
				case 2:
				printf("Voce perdeu!\nPapel embrulha a Pedra.");
				break;
				case 3:
				printf("Voce ganhou!\nPedra quebra a Tesoura.");
				break;} break;
		case 2:
			switch(numeroAleatorio){
				case 1:
				printf("Ganhou!\nPapel embrulha a Pedra.");
				break;
				case 2:
				printf("Empate!\n");
				break;
				case 3:
				printf("Perdeu!\nTesoura corta Papel.");
				break;} break;
		case 3:
			switch(numeroAleatorio){
				case 1:
				printf("Perdeu!Pedra quebra Tesoura.");
				break;
				case 2:
				printf("Ganhou!\nTesoura corta o Papel.");
				break;
				case 3:
				printf("Empate!\n");
				break;} break;
	}
return 0;
}

