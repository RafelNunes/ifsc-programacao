#include <stdio.h>

int main(void) {
  int N;
  printf("Digite a quantidade de n�meros\n");
  scanf("%d", &N);
  int codigos[N];

  //cadastro dos c�digos
  for (int i = 0; i < N; i++){
    printf("Digite c�digo - posi��o %d\n", i);
    scanf("%d", &codigos[i]);

    //verificar repetido
    for (int j = 0; j < i; j++){
      if (codigos[i] == codigos[j]){
        printf("C�digo repetido, redigite\n");
        i = i - 1;
        j = i; //interrompe la�o
      }
    }
  }

  //consulta c�digo
  int codConsulta, achou = 0;
  printf("Digite c�digo para consulta\n");
  scanf("%d", &codConsulta);
  for (int i = 0; i < N; i++){
    if (codConsulta == codigos[i]){
      printf("C�digo %d cadastrado - posi��o: %i", codConsulta, i);
      i = N; //interrompe la�o
      achou = 1;
    }
  }
  if (achou == 0){
    printf("C�digo %d n�o cadastrado", codConsulta);
  }
  return 0;
}
