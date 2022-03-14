#include <stdio.h>
int main()
{
float nota;

printf("Digite uma nota de 0 a 10: ");
scanf("%f", &nota);
while (nota < 0 || nota > 10){
printf("Valor inválido, digite uma nota de 0 a 10.\n");
printf("Digite uma nota de 0 a 10: ");
scanf("%f", &nota);
}
return 0;
}
