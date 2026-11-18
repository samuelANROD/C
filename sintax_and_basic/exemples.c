#include <stdio.h>

int main(void) {
    //pedindo ao usuario
    char cor[50];
    int idade;
    float altura;

    printf("digite cor favorita: ");
    scanf("%49s", cor);

    printf("digite idade: ");
    scanf("%d", &idade);

    printf("digite altura: ");
    scanf("%f", &altura);

    printf("------dados------\n");
    printf("cor favorita: %s\n", cor);
    printf("idade: %d\n", idade);
    printf("altura: %.2f\n", altura);

    return 0;
}