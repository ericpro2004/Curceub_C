#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


void somar(int num1, int num2, int resultado) {
    return num1 + num2;

}

void subtrair(int num1, int num2, int resultado) {
    return num1 - num2;

}

void multiplicar(int num1, int num2, int resultado) {
    return num1 * num2;

}

void dividir(int num1, int num2, int resultado) {
    return num1 / num2;

}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, resultado, tipoop, op;
    printf("Digite um número inteiro (positivo ou negativo) +: ");
    scanf("%d", &num1);
    printf("Digite outro número inteiro (positivo ou negativo) +: ");
    scanf("%d", &num2);
    printf("Qual operação deseja utilizar?\n");
    printf("1 - soma, 2 - subtração, 3 - multiplicação, 4 - divisão: ");
    scanf("%d", &tipoop);
    switch(tipoop) {
        case 1:
            
        break;

        case 2:

        break;

        case 3:
        break;

        case 4:

        break;

        default:
            printf("Inválido!");
    }
}
