#include <stdio.h>
#include <stdlib.h>

// Celcius para Fahrenheit: F = C*(1,8) + 32
// Fahrenheit para Celcius: C = (F − 32) / 1,8
// Kelvin para Celcius: C = K – 273,15
// Celcius para Kelvin: K = C + 273,15
// Kelvin para Fahrenheit: F = 1,8(K-273) + 32

// inicio
int main(void) {
  float c, f, k;
  int opcao;

  printf("Digite [1] para transformar celcius em fahrenheit\n");
  printf("Digite [2] para transformar fahrenheit em celcius\n");
  printf("Digite [3] para transformar kelvin em celcius\n");
  printf("Digite [4] para transformar celcius em kelvin\n");
  printf("Digite [5] para transformar kelvin em fahrenheit\n");

  scanf("%d", &opcao);

  if (opcao == 1) {
    printf("Digite a temperatura em celcius: ");
    scanf("%f", &c);
    f = c * (1.8) + 32;
    printf("A temperatura é %f°F", f);
  } else if (opcao == 2) {
    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) / 1.8;
    printf("A temperatura é %f°C", c);
  } else if (opcao == 3) {
    printf("Digite a temperatura em kelvin: ");
    scanf("%f", &k);
    c = k - 237.15;
    printf("A temperatura é %f°C", c);
  } else if (opcao == 4) {
    printf("Digite a temperatura em celcius: ");
    scanf("%f", &c);
    k = c + 237.15;
    printf("A temperatura é %f°K", k);
  } else {
    printf("Digite a temperatura em kelvin: ");
    scanf("%f", &k);
    f = 1.8 * (k - 237) + 32;
    printf("A temperatura é %f°F", f);
  }
  return 0;
}

// fim