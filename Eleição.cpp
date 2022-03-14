#include<stdio.h>

int main()
{
	int numVotos, soma, porc1, porc2, var1=0, var2=0, var3=0, var4=0, var5=0;
	
	printf("1(Candidato 1),2(Candidato 2),3(Candidato 3),4(Nulo) e 5(Em branco).\n");
	printf("Digite 1 para começar(0 para parar contagem): ");
	scanf("%d", &numVotos);
	if(numVotos == 1){
		while(numVotos != 0){
		printf("Digite 1,2,3,4 ou 5 para votar: ");
		scanf("%d", &numVotos);
		
		if(numVotos > 5 || numVotos < 0){
			printf("Valor invalido.\n");
			}
			if(numVotos == 1){
				var1 = var1 + 1;
			}
			else if(numVotos == 2){
				var2 = var2 + 1;
			}
			else if(numVotos == 3){
				var3 = var3 + 1;
			}
			else if(numVotos == 4){
				var4 = var4 + 1;
			}
			else if(numVotos == 5 || numVotos > 5){
				var5 = var5 + 1;
			}	
			}

		}
	
	soma = var1 + var2 + var3 + var4 + var5;
	porc1 = (var4*100) / soma;
	porc2 = (var5*100) / soma;
	
	printf("\nTotal de votos para cada candidato:\n");
		printf("\nCandidato 1: %d.", var1);
		printf("\nCandidato 2: %d.", var2);
		printf("\nCandidato 3: %d.", var3);
	printf("\n\nTotal votos nulos: \n");
		printf("\n%d.", var4);
	printf("\n\nTotal de votos em branco:\n");
		printf("\n%d.\n", var5);
	if(var1 > var2 && var3){
		printf("\nCandidato vencedor:\n\nCandidato 1 ganhou.\n");
	}else if(var2 > var1 && var3){
		printf("\nCandidato vencedor:\n\nCandidato 2 ganhou.\n");
	}else if(var3 > var1 && var2){
		printf("\nCandidato vencedor:\n\nCandidato 3 ganhou.\n");
	}else if(var1 == var2 || var1 == var3 || var2 == var3){
		printf("\nDois ou mais candidatos empataram.\n");
	}
	printf("\nPercentual de votos brancos e nulos:\n");
	printf("\n%d porcent. de votos em branco ou voto nulo.\nDe um total de %d votos.", porc1 + porc2, soma);
}
