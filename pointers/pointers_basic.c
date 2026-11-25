#include <stdio.h>

//Um ponteiro é uma variável que armazena o endereço de memória de outra variável.

int main (void) {
    //assim permite armazenar a memoria em outro lugar usando ponteiro

    int num = 10;

    int *ptr = &num;
    printf("%d\n", *ptr);

    return 0;
}
