#include <stdio.h>

int main(void) {
  int N;
  printf("Digite a quantidade de números\n");
  scanf("%d", &N);
  int codigos[N];

  //cadastro dos códigos
  for (int i = 0; i < N; i++){
    printf("Digite código - posição %d\n", i);
    scanf("%d", &codigos[i]);

    //verificar repetido
    for (int j = 0; j < i; j++){
      if (codigos[i] == codigos[j]){
        printf("Código repetido, redigite\n");
        i = i - 1;
        j = i; //interrompe laço
      }
    }
  }

  //consulta código
  int codConsulta, achou = 0;
  printf("Digite código para consulta\n");
  scanf("%d", &codConsulta);
  for (int i = 0; i < N; i++){
    if (codConsulta == codigos[i]){
      printf("Código %d cadastrado - posição: %i", codConsulta, i);
      i = N; //interrompe laço
      achou = 1;
    }
  }
  if (achou == 0){
    printf("Código %d não cadastrado", codConsulta);
  }
  return 0;
}
