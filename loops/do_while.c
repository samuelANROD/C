//do while a lógica é a mesma o que muda é que a condição fica no final
// é usado quando precisa testar antes de rodar a condição
#include <stdio.h>

int main(void) {
    int i = 0;
    int contador = 5;

    // do while simples de contagem ++
    do {
     printf("%d\n", i);
     i++;
    } while (i < 5);

    printf("----------------------------------------\n");

    // do while simples de contagem --
    do {
        printf("%d\n", contador);
        contador--;
    } while (contador > 0);

    return 0;
}