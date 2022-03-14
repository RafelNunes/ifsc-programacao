#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int cont=0, cont2=0;
	float altura, soma=0;
	char sexo;
	
	printf("Digite X para sair.\n\n");
	printf("Digite altura: ");
	scanf("%f", &altura);
	
	while(sexo!='X'){
		printf("Digite sexo com M/F: ");
			scanf(" %c", &sexo);
				if(sexo == 'M'){
					cont = cont + 1;
				}else if(sexo == 'F'){
					cont2 = cont2 + 1;
			}if(sexo == 'X'){
				break;
			}
			printf("Digite altura: ");
			scanf("%f", &altura);

			
		soma = soma + altura;
	}
	printf("\n\nSexo masculino: %d\n", cont);
	printf("\nSexo feminino: %d\n", cont2);
	
	printf("\nMedia de altura: %.2f.\n", soma);
	return 0;
}

