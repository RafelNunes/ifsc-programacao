#include <stdio.h>
#include <stdlib.h>

char escolha;
int valorA=0, valorB=0;

main()
{
    do{
        printf("Digite A para candidato 1, ou B para candidato 2 (F para terminar): ");
        scanf(" %c", escolha);

        if((escolha!='A')||(escolha!='B')||(escolha!='F')){
            printf("Codigo invalido\n");
        }else if(escolha == 'A'){
            valorA = valorA + 1;
        }else if(escolha == 'B'){
            valorB = valorB + 1;
        }

    }while(escolha != 'F'); //talvez oq esta em cima nao esteja TOTALMENTE errado, mas eu acho que o maior erro ta aqui no while, 
                            //eu quero encerrar o loop escrevendo F..  

    printf("A quantidade de Pessoas que votaram no candidato 1 foi: %i e do candidato 2: %i", valorA, valorB);
}
    
