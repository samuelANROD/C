// demonstarção simples de if else com triangulos fator existência
#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;

    printf("digite os lado A do traingulo: ");
    scanf("%d", &a);
    printf("digite os lado B do traingulo: ");
    scanf("%d", &b);
    printf("digite os lado C do traingulo: ");
    scanf("%d", &c);

    //lógica simples usando AND e comparação
    if (a < b + c && b < a + c && c < a + b) {
        printf("triangulo existe");
    } else {
        printf("triangulo não existe");
    }

    return 0;
}