#include <stdio.h>

int main()
{	
	//lendo 5 valores
	int vetor[5], i = 0, M, m, pM, pm;
	
	for(i = 0; i < 5; i++){
		printf("Digite valor %d: ", i);
		scanf("%d", &vetor[i]);
	}
	//Descobrindo maior e menor
	M = vetor[0];
	m = vetor[0];
	for(i = 0; i < 5; i++){
		
		if( M <= vetor[i]){
			pM = i;
		}
		if( m >= vetor[i]){
			pm = i;
		}

	}
	printf("\nMaior valor na posicao: %d", pM);
	printf("\nMenor valor na posicao: %d", pm);
	
	
	return 0;
}
