#include <stdio.h>
//&	Obtém o endereço de memória de uma variável.
//*	Acessa o valor armazenado no endereço (desreferencia)
//& = onde está?
//* = oq tem?

//Um ponteiro é uma variável que armazena o endereço de memória de outra variável.

int main (void) {
    //assim permite armazenar a memoria em outro lugar usando ponteiro

    // ponteiros numericos são mais faceis de trabalhar do que em char
    int num = 10;

    int *ptr = &num;
    printf("%d\n", *ptr);

    return 0;
}
