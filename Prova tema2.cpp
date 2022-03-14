#include<stdio.h>

int main()
{
	int numPessoas, cont=0, cont2=0, C=0, S=0 , D=0, V=0, soma=0; 
	int C1, C2, D1, D2=0, V1, V2=0;
	char sexo, estadCivil;
	
	printf("Quer fazer a pesquisa com quantas pessoas? ");
	scanf("%d", &numPessoas);
	
	for(int x = 1; x <= numPessoas; x++){
		
		printf("\nDigite seu sexo(M/F): ");
		scanf(" %c", &sexo);
		while(sexo!='M' && sexo!='F'){
			printf("Dado invalido, redigite.");
			printf("\nDigite seu sexo(M/F): ");
			scanf(" %c", &sexo);
		}
		if(sexo == 'M'){
			cont = cont + 1;
		}
		else if(sexo == 'F'){
			cont2 = cont2 + 1;
		}
		
		printf("Digite seu estado civil(C,S,D,V): ");
		scanf(" %c", &estadCivil);
		while(estadCivil!='C'&&estadCivil!='S'&&estadCivil!='D'&&estadCivil!='V'){
			printf("Dado invalido, redigite.");
			printf("\nDigite seu estado civil(C,S,D,V): ");
			scanf(" %c", &estadCivil);
		}
		if(estadCivil == 'C'){
			C++;
		}
		else if(estadCivil == 'S'){
			S++;
		}else if(estadCivil == 'D'){
			D++;
		}
		else{
			V++;
		}
		if(sexo == 'M' && estadCivil == 'C'){
			C1++;
		}else if(sexo == 'F' && estadCivil == 'C'){
			C2++;
		}
		if(sexo == 'M' && estadCivil == 'D'){
			D1++;
		}else if(sexo == 'F' && estadCivil == 'D'){
			D2++;
		}
		if(sexo == 'M' && estadCivil == 'V'){
			V1++;
		}else if(sexo == 'F' && estadCivil == 'V'){
			V2++;
		}
	}

	
	
	printf("\nPessoas do sexo M: %d.\nPessoas do sexo F: %d.\n", cont, cont2);
	
	printf("\nPessoas casadas: 	%d.\nPessoas solteiras: 	%d.\nPessoas divorciadas: 	%d.\nPessoas viuvas: 	%d.\n", C, S, D, V);
	
	printf("\nHomens casadas: 	%d.\nMulheres casadas: 	%d.\n", C1, C2);
	
	printf("\nHomens divorciados: 	%d.\nMulheres divorciadas: 	%d.\n", D1, D2);
	
	printf("\nHomens viuvos:    	%d.\nMulheres viuvas: 	%d.\n", V1, V2);
 return 0;
}
