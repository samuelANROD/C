// arrays são listas que armazenam valores simples
// pode ser numeros e palavras
#include <stdio.h>

int main(void) {
    //existem dois tipos de listas as que são editadas pelo usuario
    //e as que são colocadas seu valor no arrays

    int num[5] = {10, 20, 30, 40, 50};
    char names[50];

    //toda lista começa apartir do zero

    printf("digite seu nome: ");
    scanf("%49s", names);

    printf("----------------------------\n");

    printf("%d\n", num[4]);
    return 0;
}