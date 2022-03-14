#include<stdio.h>
#include<math.h>

main()
{
	float peso=0, altura=0, IMC=0, soma=0, soma2;
	
	printf("Digite seu peso[em kg]: ");
	scanf("%f", &peso);
	
	while(peso>0){
		soma = peso;
		
		printf("Digite sua altura: ");
		scanf("%f", &altura);
		
		soma = pow(altura,2);	
		IMC = peso/soma;	
		
		
		if(IMC<18.5){
			printf("\nAbaixo do peso.\n");
		}else if(IMC>18.5 && IMC<25){
			printf("\nPeso normal.\n");
		}else if(IMC>25 && IMC<30){
			printf("\nSobrepeso.\n");
		}else if(IMC>30){
			printf("\nObesidade.\n");
		}
		
		printf("Digite seu peso[em kg]: ");
		scanf("%f", &peso);
		
		peso = peso + peso;
}
  
}
