//switch não é nada mais nada menos do que um escolha caso
#include <stdio.h>

int main(void) {
    int day;

    printf("digite um dia da semana em numero: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("segunda");
            break;
        case 2:
            printf("terça");
        case 3:
            printf("quarta");
            break;
        case 4:
            printf("quinta");
            break;
        case 5:
            printf("sexta");
            break;
        case 6:
            printf("sabado");
            break;
        case 7:
            printf("domingo");
            break;
    }

    return 0;
}