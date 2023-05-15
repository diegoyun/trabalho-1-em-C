#include <stdio.h>

int main() {
  int lado1, lado2, lado3;

  printf("Digite o 1 lado: ");
  scanf("%d", &lado1);

  printf("Digite o 2 lado: ");
  scanf("%d", &lado2);

  printf("Digite o 3 lado: ");
  scanf("%d", &lado3);

  if (lado1 < (lado2 + lado3)) {
    if (lado2 < (lado1 + lado3)) {
      if (lado3 < (lado2 + lado1)) {
        printf("é um triangulo");
      }
    }
  } else {
    printf("não é um triangulo\n");
  }

  if (lado1 == lado2 && lado2 == lado3 && lado1 == lado3) {
    printf("é um triangulo equilatero");
  }

  else if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1) {
    printf("é um triangulo isosceles");
  } else {
    printf("é um triangulo escaleno");
  }

  return 0;
}
