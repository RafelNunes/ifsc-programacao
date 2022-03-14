#include<stdio.h>

int main(void)
{
	char letras;
	
	printf("Digite uma letra do alfabeto: ");
	scanf("%c", &letras);
	
	switch (letras)
	{
		case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
		printf("Vogal");
		break;
		case 'b' : case 'c' : case 'd' : case 'f' : case 'g' :
		printf("Consuante\n");
		break;
		case 'h' : case 'j' : case 'k' : case 'l' : case 'm' :
		printf("Consuante\n");
		break;
		case 'n' : case 'p' : case 'q' : case 'r' : case 's' :
		printf("Consuante\n");
		break;
		case 't' : case 'v' : case 'w' : case 'x' : case 'y' :
		printf("Consuante\n");
		break;
		case 'z' :
		printf("Consuante");
		break;
		default :
			printf("caractere invalido");
	}
return 0;
}
