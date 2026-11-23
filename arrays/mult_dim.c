//multi dim ou matrizes são arrays construidos como matrizes matematicas
// exemplo por formatos 3x3, 2x3, 2x2...
#include <stdio.h>

int main (void) {
    //construindo uma matriz
    int resultado;

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    // pedindo ao usuario
    int matriz_2[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("digite os valores:");
            scanf("%d", &matriz_2[i][j]);
        }
        printf("\n");
    }

    printf("----------------------\n");

    printf("digite qual matriz quer ver 1 para primeira e 2 para a do usuario: ");
    scanf("%d", &resultado);

    if (resultado == 1) {
        //percorrer matriz 3x3 i = linha, j = coluna
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
    }
    else if (resultado == 2) {
        //percorrer matriz 3x3 i = linha, j = coluna
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d ", matriz_2[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("erro digite 1 ou 2");
    }

    return 0;
}