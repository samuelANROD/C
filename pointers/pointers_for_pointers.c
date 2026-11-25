#include <stdio.h>

int main (void) {
    int num = 10;
    int *ptr1 = &num;
    
    // aqui acessa ptr1 e troca ele igual o ptr1 fez com num
    //*ptr, **ptr, ***ptr...
    int **ptr2 = &ptr1;

    printf("Valor da variavel: %d\n", num);
    printf("Valor pelo primeiro ponteiro: %d\n", *ptr1);
    printf("Valor pelo segundo ponteiro: %d\n", **ptr2);

    //alteração de variaveis (só que no caso de ptr para ptr2)
    **ptr2 = 100;

    printf("\nDepois da modificacao:\n");
    printf("Numero: %d\n", num);
    return 0;
}