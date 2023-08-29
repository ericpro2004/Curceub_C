#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float real;

void main()
{
    setlocale(LC_ALL, "");
    printf("Qual é a quantidade em dinheiro (em reais) a ser convertida para euro e dollar?: \n");
    scanf("%f", &real);
    float dollar = real/5;
    float euro = real/5.2;
    printf("Você tem %.2fR$ dolares ou %.2fR$ euros. \n\n", dollar, euro);
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int X;
    loop:
    printf("Qual é o valor de X?: \n");
    scanf("%d", &X);
    int divi = %X;
    if (X < 101) {
    printf("Números divisíveis: %d\n", divi);
    X++;
    goto loop;
    }
}
