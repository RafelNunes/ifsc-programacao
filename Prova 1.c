#include<stdio.h>

int main(){
	char nome[20];
	int limit=5, C=4, M=2, P=2, escolha, cont[3]={0,0,0};

	do{

	printf("Digite seu primeiro nome: ");
	scanf("%s", &nome);

	int Livros(){
		int op=0;

		do{
			printf("\nEscreva o numero referente ao tema do livro que deseja: ");
			scanf("%d", &op);
			while(C==0 && op==1 || M==0 && op==2 || P==0 && op==3) {
				if(C==0 && op==1){
					printf("\n------------------------------\nLIMITE DE EXEMPLARES ATINGIDO.\n------------------------------\n4 livros de Ciencias.\n");
					printf("\nEscreva o numero referente ao tema do livro que deseja: ");
					scanf("%d", &op);
				}
				if(M==0 && op==2){
					printf("\n------------------------------\nLIMITE DE EXEMPLARES ATINGIDO.\n------------------------------\n2 livros de Matematica.\n");
					printf("\nEscreva o numero referente ao tema do livro que deseja: ");
					scanf("%d", &op);
				}
				if(P==0 && op==3){
					printf("\n------------------------------\nLIMITE DE EXEMPLARES ATINGIDO.\n------------------------------\n2 livros de Portugues.\n");
					printf("\nEscreva o numero referente ao tema do livro que deseja: ");
					scanf("%d", &op);
				}
			}
		}while((op<1)||(op>3));

	return op;
	}

	printf("\nCIENCIAS(1) MATEMATICA(2) PORTUGUES(3)\n");
	printf("--------------------------------------\n");
	printf("Voce tem um limite de 5 livros que pode escolher.\n\n");

	do{
		escolha = Livros();

		if(escolha == 1){
			C--;
			limit--;
			cont[0]++;
		}if(escolha == 2){
			M--;
			limit--;
			cont[1]++;
		}else if(escolha == 3){
			P--;
			limit--;
			cont[2]++;
		}
	}while(limit>0);

}while(limit>0);

	printf("\n\nLIMITE ATINGIDO\n\n");
	printf("Quantidade de livros:\n\n");
	printf("CIENCIAS:   %d.\n", cont[0]);
	printf("MATEMATICA: %d.\n", cont[1]);
	printf("PORTUGUES:  %d.\n", cont[2]);

	return 0;
}
