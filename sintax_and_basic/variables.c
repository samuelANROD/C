#include <stdio.h>

int main(void) {
    // tipos de variaveis

    //só carcter
    char a ='a';
    printf("%c\n", a);

    //string = palvras
    char name[] = "sam";
    printf("%s\n", name);

    //capacidade miníma padrão
    int num = 1;
    printf("%d\n", num);

    //capacidade miníma menor
    short int num_2 = 1;
    printf("%hd\n", num_2);

    //capacidade miníma menor
    long int num_3 = 1;
    printf("%ld\n", num_2);

    //float num com virgula
    float num_f = 1.0000;
    printf("%f\n", num_f);

    //tipos de leitura
    // %d  -> int
    // %c  -> char
    // %f  -> float / double (printf)
    // %s  -> string (char[])
    // %ld -> long int
    // %hd -> short int
    // %u  -> unsigned int
    // %lf -> double (scanf)
}