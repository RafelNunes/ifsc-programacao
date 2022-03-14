#include<stdio.h>

int main(){
	char frase[50], alfabetoC[30]={'d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','\0'};
	char  alfabeto[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
	int i, j;
	
	printf("Digite uma frase: ");
	scanf("%s", &frase);
	
	for(i=0; frase[i] != '\0'; i++){
		if(frase[i] == '\0'){
			break;
		}
		for(j=0; alfabeto[j] != '\0'; j++){
			if(frase[i] == alfabeto[j]){
				frase[i] = alfabetoC[j];
			}
		}
	}
	
	printf("\n%s", frase);
	
}
