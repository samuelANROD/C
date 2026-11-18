//constantes em C são valores que não podem ser mudados

#include <stdio.h>

int main(void) {
    const float pi = 3.14;

    printf("%.2f", pi);

    // Se tentar alterar, gera erro de compilação
    // pi = 3.15;

    return 0;
}