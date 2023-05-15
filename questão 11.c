#include <stdio.h>
#include <stdio.h>
#include <locale.h>

//inicio:
int main(void) {

  int num1, num2, maior, menor, num; 
  printf("digite o primeiro numero do intervalo: ");
  scanf("%d", &num1);

  printf("digite o segundo numero do intervalo: ");
  scanf("%d", &num2);

  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  if (num1 < num2){
    menor = num1;
    maior = num2;
  }else{
    maior = num1;
    menor = num2;
  }
  if(num < maior && num > menor){
    printf("O numero %d está dentro do intervalo dos numeros %d e %d", num, menor, maior);
  }else{
    printf("O numero %d não está dentro do intervalo dos numeros %d e %d", num, menor, maior);
  }

  return 0;
  //fim.
}