#include <stdio.h>

int main(void) {

    // ARRAY DE INTEIROS
    int numeros[5] = {10, 20, 30, 40, 50};

    int *ptr = numeros;

    printf("--- ARRAY COM PONTEIROS ---\n");

    for (int i = 0; i < 5; i++) {
        printf("Valor: %d\n", *(ptr + i));
    }

    // STRING COM PONTEIRO
    char nome[] = "Samuel";

    char *ptr_nome = nome;

    printf("\n--- STRING COM PONTEIROS ---\n");

    // \0 significa final da string
    // cada carctere esta em um endereço diferente
    while (*ptr_nome != '\0') {

        //lógica enquanto *ptr_nome não chegar no final vai continuar

        printf("%c\n", *ptr_nome);
        ptr_nome++;
    }

    return 0;
}