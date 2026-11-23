#include <stdio.h>

//exemplo de loops simples com arrays
// loop 1 para percorrer
// loop 2 para exibir

int main(void) {
    int num[5];
    int resultado;

    //loop 1
    for (int i = 0; i < 5; i++) {
        printf("digite o valor %d:", i + 1);
        scanf("%d", &num[i]);
    }

    printf("digite 1 para ver a lista e 0 para encerrar: ");
    scanf("%d", &resultado);

    if (resultado == 0) {
        printf("encerrado");
    }
    else if (resultado == 1) {
        //loop 2
        for (int array = 0;array < 5; array++) {
            printf("%d\n", num[array]);
        }
    }
    else {
        printf("digite 1 ou 0 erro recomece!!");
    }

    return 0;
}