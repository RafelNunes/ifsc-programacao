#include <stdio.h>
#include <stdlib.h>

#define TOTAL_LIVROS 5
#define MATEMATICA 2
#define CIENCIAS 4
#define PORTUGUES 2

int IncluiLivro(int tema,int quantidade)
{
    switch (tema)
    {
    case 1:
        if (quantidade < MATEMATICA)
        {
            printf("\nTema escolhido: Matematica \n");
            quantidade++;
        }
        else
            printf("\nO tema Matematica nao possui mais livros\n");
        break;
     case 2:
        if (quantidade < CIENCIAS)
        {
             printf("\nTema escolhido: Ciencias \n");
             quantidade++;
        }
        else
            printf("\nO tema Ciencias nao possui mais livros\n");
        break;
     case 3:
        if (quantidade < PORTUGUES)
        {
            printf("\nTema escolhido: Portugues \n");
            quantidade++;
        }
        else
            printf("\nO tema Portugues nao possui mais livros\n");
        break;
    }
    return quantidade;
}

int main()
{
    char nomeAluno[70];
    int tema = 0;
    int totalLivros=0, livrosMatematica = 0, livrosCiencias=0, livrosPortugues=0;

    printf("\nDigite o nome do aluno: ");
    scanf("%s", nomeAluno);
    do
    {
        printf("\nDigite o tema escolhido:\n1 - Matematica\n2 - Ciencias\n3 - Portugues\n\nTema:  ");
        scanf("%d", &tema);

        switch(tema)
        {
        case 1:
            livrosMatematica = IncluiLivro(tema, livrosMatematica);
            break;
        case 2:
            livrosCiencias = IncluiLivro(tema, livrosCiencias);
            break;
        case 3:
            livrosPortugues = IncluiLivro(tema, livrosPortugues);
            break;
        default:
            printf("Opcao invalida!");
        }
        totalLivros = (livrosMatematica + livrosCiencias + livrosPortugues);


    }
    while( totalLivros != TOTAL_LIVROS);

    if(totalLivros > 0)
    {
        printf("\n\nAtingiu o limite de livros...\n");
        printf("\nTema Matematica: %d.\n",livrosMatematica);
        printf("\nTema Ciencias: %d.\n",livrosCiencias);
        printf("\nTema Portugues: %d.\n",livrosPortugues);
    }

    return 0;
}

