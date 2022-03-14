#include<stdio.h>

int main(void){
	int hi, hf, mi, mf, rf1, rf2;
	char resposta;
	
	do{
		printf("Digite hora inicial: ");
		scanf("%d", &hi);
		if(hi < 10 || hi > 20){
			printf("Valor invalido.\n");
		}
		
		printf("Digite minuto inicial:(00 a 59) ");
		scanf("%d", &mi);
		if(mi > 59){
			printf("Valor invalido.\n");
		}
		
		printf("Digite hora final: ");
		scanf("%d", &hf);
		if(hf >= 10 && hf <= 20){
			if(hf < hi){
			printf("Valor invalido.\n");
		}}else{
			printf("Valor invalido.\n");
		}
		
		printf("Digite minuto final:(00 a 59) ");
		scanf("%d", &mf);
		if(hi == hf && mi > mf){
			printf("Valor invalido.\n");
		}
		
		rf1 = hf - hi;
		rf2 = mf - mi;
		if(mf < mi){
			rf1 = hf - hi - 1;
			rf2 = 0;
			rf2 = (mf - mi)+ 60;
		}
		
		printf("Horas usadas: %d", rf1);
		printf("\nMinutos usados: %d", rf2);
		
		printf("\n\nFazer outra consulta?(Y p/ sim e N p/ nao) ");
		scanf("%s", &resposta);
		
		if(resposta != 'N' && resposta != 'Y'){
			printf("Informacao invalida. Digite novamente.");
			scanf("%s", &resposta);
		}else if(resposta == 'N'){
			break;
		}
		
		printf("\n");
	
	}while(resposta == 'Y');
	
	return 0;
}
