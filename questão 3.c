#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // receber e armazenar os numeros!!
  int a, b, menor, maior, soma;

  printf("digite um numero: \n");
  scanf("%d", &a);

  printf("digite outro numero: \n");
  scanf("%d", &b);

  // resolução "if" e "else" para mostrar o maior e o menor numero!!

  if (a < b) {
    menor = a;
    maior = b;
  } else {
    maior = a;
    menor = b;
  }
  // printf para mostrar o resultado puxando os dados do maior e menor dos 2
  // numeros solicitados

  printf("o maior e o menor numero respectivamente sao: %d e %d", maior, menor);

  return 0;
}
