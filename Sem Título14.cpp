#include<stdio.h>

int main(void){
    //o zero no final representa a posi��o
    //que fica sobrando no vetor
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int pos = 5; //posi��o que o usu�rio passou
    int valor = 666; //valor que o usu�rio passou
    int x;

    for(x=9; x > pos-1; x--){
        vetor[x] = vetor[x-1];
    }

    vetor[pos-1] = valor;

    for(x=0; x < 10; x++){
        printf("%d\n", vetor[x]);
    }
}
