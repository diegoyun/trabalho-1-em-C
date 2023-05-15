#include <stdio.h>
#include<stdlib.h>

int main(void) {
//inicio 

  //variaveis que vão armazenar os valores a ser digitados e a soma deles
  int a, b, c, d, soma; 

  //solicita, recebe e armazena os dados digitados!
  
  printf("digite o primeiro numero: \t");
  scanf("%d", &a);
  printf("digite o segundo numero: \t");
  scanf("%d", &b);
  printf("digite o terceiro numero: \t");
  scanf("%d", &c);
  printf("digite o quarto numero: \t");
  scanf("%d", &d);

  //soma os valores digitados pelo usuario!
  soma = a + b + c + d;

  //mostra na tela a soma dos valores digitados!
  
  printf("a soma dos valores e igual a:\t" "%d", soma);
  

  return 0;
  //fim
}