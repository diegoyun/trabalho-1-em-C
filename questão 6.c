#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // receber e armazenar os numeros!!
  int a, b, c, menor, maior;

  printf("digite um numero\t");
  scanf("%d", &a);

  printf("digite outro numero\t");
  scanf("%d", &b);

  printf("digite outro numero\t");
  scanf("%d", &c);

  // resolução "if" e "else" para mostrar o maior e o menor numero!!

  if (a < b && a < c) {
    menor = a;
  }

  else if (b < a && b < c) {
    menor = b;
  }

  else{
    menor = c;
  }

  if (a > b && a > c) {
    maior = a;
  }

  else if (b > a && b > c) {
    maior = b;
  }

  else{
    maior = c;
  }

      // printf para mostrar o resultado puxando os dados do maior e menor dos 2
      // numeros solicitados numero

      printf ("o maior e o menor numero dentre os tres valores sao "
              "respectivamente: %d e %d",
              maior, menor)
    ;

  return 0;
}