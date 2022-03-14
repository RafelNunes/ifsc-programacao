#include<stdio.h>

int main()
{
	char sexo;
	int contF = 0, contM = 0;
	for(int x = 1; x <= 10; x++){
		printf("Digite sexo M/F: ");
		scanf(" %c", &sexo);
		if (sexo == 'F', 'f')
			contF = contF+1;
		else 
			contM = contM+1;
	}
	printf("\nTotal Feminino:		%d \n", contF);
	printf("Total masculino:	%d \n", contM);

return 0;

}
