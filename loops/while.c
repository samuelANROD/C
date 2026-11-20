#include <stdio.h>

int main(void) {
    int i = 0;
    int contador = 3;

    //while simples de contagem ++
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }

    printf("---------------------------------\n");

    //while simples de contagem --
    while (contador > 0) {
        printf("%d\n", contador);
        contador--;
    }

    return 0;
}