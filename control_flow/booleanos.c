// tem que chamar a biblioteca <stdbool.h>
#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int age = 19;

    // TRUE
    bool is_adult = age >= 18;

    // FALSE
    bool is_minor = age < 18;

    printf("Is adult: %d\n", is_adult);
    printf("Is minor: %d\n", is_minor);

    if (is_adult) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }

    return 0;
}