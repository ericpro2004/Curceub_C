#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
   int i, valores[3];
   for( i = 0; i <= 2; i++) {
       printf("Digite um valor:\n");
       scanf( "%d", &valores[i]);
   }
       for( i = 0; i <= 2; i++) {
       printf("Valor incluído: [%d] = %d\n",i, valores[i]);
       if (valores[i] > 0) {
            printf("O número é positivo\n");

       } else if (valores[i] < 0){
           printf("O número é negativo\n");
       }
       }
   }

