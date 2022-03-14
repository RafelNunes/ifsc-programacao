#include <stdio.h>

int main(void) {
  int N;
  printf("Digite o tamaho do vetor\n");
  scanf("%d", &N);
  while (N%2 == 1){
    printf("Número não é par, redigite\n");
    scanf("%d", &N);
  }
  int v[N];
  //cadastro dos números
  for (int i = 0; i < N; i++){
    scanf("%d", &v[i]);
  }
  //ordena vetor
  int trocou = 1;
  while (trocou == 1){
    trocou = 0;
    for (int i = 0; i < N-1; i++){
      if (v[i] > v[i+1]){
        int aux = v[i];
        v[i] = v[i+1];
        v[i+1] = aux;
        trocou = 1;
      }
    }
  }

  //N/2 menores valores em ordem decrescente
  for (int i = N/2-1; i >=0; i--){
    printf("%d ", v[i]);
  }
  printf("\n");
  //restante em ordem crescente
  for (int i = N/2; i < N; i++){
    printf("%d ", v[i]);
  }
  return 0;
}
