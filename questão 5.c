#include <stdio.h>
#include<stdio.h>

int main(void) {
//inicio 

  //variaveis para receber e armazenar dados a serem digitados!!
   int av1, av2, av3, av4, media;

  //recebe os dados das notas av1, av2, av3 e av4!!
   printf("digite nota av1\t");
   scanf("%d", &av1); //armazena a nota a ser digitada dentro da variavel escolhida!!
  
   printf("digite nota av2\t");
   scanf("%d", &av2);
  
   printf("digite nota av3\t");
   scanf("%d", &av3);
  
   printf("digite nota av4\t");
   scanf("%d", &av4);

  //faz a soma das 4 notas e divide por 4, colocando o resultado na variavel "media"!!
   media = (av1 + av2 + av3 + av4) /4; 

  //exibe o resultado da media!!
   printf("a media das 4 notas equivale a:\t" "%d", media);
  
   return 0;
  //fim
}