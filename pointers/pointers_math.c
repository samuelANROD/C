#include <stdio.h>

//ptr++ → avança uma posição.
//ptr-- → volta uma posição.
//ptr + 2 → acessa duas posições à frente.
//ptr - 2 → acessa duas posições atrás.

int main(void) {
    int numeros[5] = {10, 20, 30, 40, 50};

    int *ptr = numeros;

    printf("Primeiro valor: %d\n", *ptr);

    ptr++;
    printf("Segundo valor: %d\n", *ptr);

    ptr++;
    printf("Terceiro valor: %d\n", *ptr);

    ptr--;
    printf("Voltando: %d\n", *ptr);

    printf("Duas posicoes a frente: %d\n", *(ptr + 2));

    return 0;
}