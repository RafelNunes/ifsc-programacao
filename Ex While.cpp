#include <stdio.h>
int main() 
{
float num, media, soma = 0;
int cont = 0;

printf("Quando desejar parar a contagem digite '0'.\n");
printf("Digite numero: ");
scanf("%f", &num);
while (num != 0){
cont = cont + 1;
soma = soma + num;
printf("Digite numero: ");
scanf("%f", &num);
}
printf("\nQtde números: %d \n", cont);
if (cont > 0){
media = soma/cont;
printf("Media: %f \n", media);
}
return 0;
}
