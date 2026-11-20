#include <stdio.h>

int main (void) {
    // dentro do for tem a variavel
    // a condição
    // e o tipo ++ ou --
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    for (int contagem = 3; contagem > 0; contagem--) {
        printf("d%\n", contagem);
    }
    return 0;
}
