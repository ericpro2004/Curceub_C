#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


void somar(int num1, int num2, int resultado) {
    resultado = num1 + num2;
    printf("O resultado da soma é %d", resultado);

}

void subtrair(int num1, int num2, int resultado) {
    resultado = num1 - num2;
    printf("O resultado da subtração é %d", resultado);

}

void multiplicar(int num1, int num2, int resultado) {
    resultado = num1 * num2;
    printf("O resultado da multiplicação é %d", resultado);

}

void dividir(int num1, int num2, int resultado) {
    resultado = num1 / num2;
    printf("O resultado da divisão é %d", resultado);

}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, resultado, tipoop, op;
    printf("Qual operação deseja utilizar?\n");
    printf("1 - soma, 2 - subtração, 3 - multiplicação, 4 - divisão: ");
    scanf("%d", &tipoop);
    switch(tipoop) {
        case 1:
        printf("Digite um número inteiro (positivo ou negativo) +: ");
        scanf("%d", &num1);
        printf("Digite outro número inteiro (positivo ou negativo) +: ");
        scanf("%d", &num2);
        op = ;
        printf("O resultado da op é %d", resultado);
        break;

        case 2:
        printf("Digite um número inteiro (positivo ou negativo) -: ");
        scanf("%d", &num1);
        printf("Digite outro número inteiro (positivo ou negativo) -: ");
        scanf("%d", &num2);
        printf(resultado);
        break;

        case 3:
        printf("Digite um número inteiro (positivo ou negativo) *: ");
        scanf("%d", &num1);
        printf("Digite outro número inteiro (positivo ou negativo) *: ");
        scanf("%d", &num2);
        printf("O resultado da op é %d", resultado);
        break;

        case 4:
        printf("Digite um número inteiro (positivo ou negativo) /: ");
        scanf("%d", &num1);
        printf("Digite outro número inteiro (positivo ou negativo) /: ");
        scanf("%d", &num2);
        printf(resultado);
        break;

        default:
            printf("Inválido!");
    }
}
