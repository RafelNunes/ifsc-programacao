#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i, j, menor, Cont[3]={0,0,0}, P[3]={0,0,0};
	float  matriz[10][3];
	srand(time(NULL));
	
	for(i = 0; i < 3; i++){printf("\n");
		for(j = 0; j < 3; j++){
			matriz[i][j] = rand()%10+1;
			printf("%.2f\n", matriz[i][j]);
			//printf("Aluno %d nota prova %d: ", i+1, j+1);
			//scanf("%f", &matriz[i][j]);
			while(matriz[i][j] > 10 || matriz[i][j] < 0){
				printf("\nNota invalida.\n\n");
				printf("Aluno %d nota prova %d: ", i+1, j+1);
				scanf("%f", &matriz[i][j]);
			}
		}
	}
	//Descobrindo menores notas
	//Aluno 1
		for(j = 0; j < 3; j++){
			menor = matriz[0][0];
			if(menor>matriz[0][j]){
				Cont[0] = j;
				if(Cont[0] == 0){
					P[0] = P[0]+1;
				}else if(Cont[0] == 1){
					P[1] = P[1]+1;
				}else(Cont[0] == 2);{
					P[2] = P[2]+1;
				}
			}
		}
	//Aluno 2
		for(j = 0; j < 3; j++){
			menor = matriz[1][0];
			if(menor>matriz[1][j]){
				Cont[1] = j;
				if(Cont[1] == 0){
					P[0] = P[0]+1;
				}else if(Cont[1] == 1){
					P[1] = P[1]+1;
				}else(Cont[1] == 2);{
					P[2] = P[2]+1;
				}
			}
		}
	//Aluno 3
		for(j = 0; j < 3; j++){
			menor = matriz[2][0];
			if(menor>matriz[2][j]){
				Cont[2] = j;
				if(Cont[2] == 0){
					P[0] = P[0]+1;
				}else if(Cont[1] == 1){
					P[1] = P[1]+1;
				}else(Cont[1] == 2);{
					P[2] = P[2]+1;
				}
			}
		}

	//Aluno 3
		
	printf("\nPiores notas de cada aluno: \n%d\n%d\n%d", Cont[0], Cont[1], Cont[2]);
	printf("\n\nPior nota 1:%d\nPior nota 2:%d\nPior nota 3:%d", P[0], P[1], P[2]);
	
	
	return 0;
	
}
