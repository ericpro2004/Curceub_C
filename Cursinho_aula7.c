#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL,"Portuguese");
    int matriz1[3][3], matriz2[3][3], MR[3][3];

    int x,y;
    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            printf("Digite os valores da primeira matriz[%d][%d]: ", x, y);
            scanf("%d", &matriz1[x][y]);
        }
    }

    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            printf("%d\t", matriz1[x][y]);
        }
        printf("\n");
    }


    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            printf("Digite os valores da segunda matriz[%d][%d]: ", x, y);
            scanf("%d", &matriz2[x][y]);
        }
    }

    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            printf("%d\t", matriz2[x][y]);
        }
        printf("\n");
    }

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            MR[x][y] = matriz1[x][y] - matriz2[x][y];

        }
    }
    printf("Resultado Subtração.");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            printf("%d\t", MR[x][y]);

        }
        printf("\n");
    }

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            MR[x][y] = matriz1[x][y] + matriz2[x][y];

        }
    }
     printf("Resultado Soma.");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            printf("%d\t", MR[x][y]);

        }
        printf("\n");
    }


}
