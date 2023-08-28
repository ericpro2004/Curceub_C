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
