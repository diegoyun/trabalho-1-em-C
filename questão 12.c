#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int i = 0;
  int num;

  while (i < 1) {

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 20 && num > 12) {
      printf("O numero %d esta entre o intervalo dos numeros 12 e 20", num);
      i++;
    } else {
      printf("Entrada Inválida!!\n");
    }
  }
  
  return 0;
  }