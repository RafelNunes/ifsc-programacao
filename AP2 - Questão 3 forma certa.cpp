#include <stdio.h>

int main(void) {
  int M, N;
  printf("Digite qtde de linhas e colunas\n");
  scanf("%d %d", &M, &N);
  float notas[M][N];
  //cadastro notas
  for (int i = 0; i < M; i++){
    for (int j = 0; j < N-1; j++){
      printf("Aluno %d - nota %d: ",i, j);
      scanf("%f", &notas[i][j]);
    }
  }
  //calcula da média e qtd de alunos aprovados
  int cont = 0;
  for (int i = 0; i < M; i++){
    float soma = 0;
    for (int j = 0; j < N-1; j++){
      soma = soma + notas[i][j];
    }
    notas[i][N-1] = soma/(N-1);
    if (notas[i][N-1] >= 6){
      cont = cont + 1;
    }
  }
  printf("Qtd de alunos aprovados: %d\n", cont);
  
  //exibe matriz
  for (int i = 0; i < M; i++){
    for (int j = 0; j < N; j++){
      printf("%6.2f", notas[i][j]);
    }
    printf("\n");
  }

  return 0;
}
