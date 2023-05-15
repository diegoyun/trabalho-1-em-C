#include<stdio.h>
#include<locale.h>

 //inicio 
int main(void) {
   setlocale(LC_ALL, "Portuguese"); //muda o idioma para o desejado pra poder usar acento e derivados
   
   int num, cont=0;
   printf("Entre com um numero:");
   scanf(" %d", &num);

   for(int i=1; i<=num; i++) 
    if (num%i ==0)
    cont++; //cont = cont + 1;
   if(cont == 2)
     printf("o numero %d é primo", num);
    else 
      printf("o numero %d não é primo", num);
  

  
  return 0;
}