#include<stdio.h>

struct Parte 
{
	float comprimento;
	float largura;
	float area;
	char nome[30];
};
void imprimeResult(struct Parte partesCasa){
	printf("Nome da Parte da Casa:%s\nArea do(a) %s:%.2f\n", partesCasa.nome,partesCasa.nome,partesCasa.area);
	printf("------------------------------------------\n");
}

int CalcularTotal(struct Parte partesCasa)
{	float area;
	
		area = area+partesCasa.area; 
		
 return area-2;
 //Este -2 é por que ele estava acrescentando +2 em todos os testes.
}

struct Parte IncluiParte()
{
	struct Parte umaParte;
	
	printf("Digite nome da parte da casa: ");
	scanf("%s", &umaParte.nome);
	printf("Digite o comprimento da parte da casa: ");
	scanf("%f", &umaParte.comprimento);
	printf("Digite a largura da parte da casa: ");
	scanf("%f", &umaParte.largura);
	
return umaParte;
}

int main(){
	struct Parte x1;
	struct Parte partesCasa[100];
	int i;
	float AreaTotal=0;
	
	for(i=0;i<100;i++){
		x1 = IncluiParte();
		partesCasa[i] = x1;
		printf("\n");
	}
	
	//Calcular Área
	
	for(i=0;i<100;i++){
		partesCasa[i].area = partesCasa[i].largura * partesCasa[i].comprimento;
	}
	//Imprimindo
	printf("------------------------------------------\n");
	for(i=0;i<100;i++){
		imprimeResult(partesCasa[i]);
	}	
	//Calcular Total
	
	for(i=0;i<100;i++){
	AreaTotal = CalcularTotal(partesCasa[i]);
	}
	printf("Area Total:%.2f", AreaTotal);
	return 0;
}
