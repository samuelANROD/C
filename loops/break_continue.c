#include <stdio.h>

int main (void) {

    //break= parar o loop completamente.
    //continue= pular esta rodada, mas continue fazendo looping.

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }

    printf("------------------------------------\n");

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}