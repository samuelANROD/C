//operators em C teorias:
// obs: as saidas são em binario
// true = 1 e false = 0

#include <stdio.h>

int main(void) {
    // assignment operators
    int x = 5;
    // x += 5 (x + 5)
    // x -= 5 (x - 5)
    // x /= 5 (x / 5)
    // x *= 5 (x * 5)
    // x %= 5 (x % 5)
    // x &= 5 (x & 5)
    // x |= 5 (x | 5)
    // x ^= 5 (x ^ 5)
    // x >>= 5 (x >> 5) deslocamento de bits
    // x <<= 5 (x << 5) deslocamento de bits

    printf("------------------------------\n");
    printf("%d\n", x);
    //---------------------------------------

    // comparison operators
    int a = 5;
    int b = 5;
    // a == b;
    // a != b;
    // a > b;
    // a < b;
    // a <= b;
    // a >= b;

    printf("------------------------------\n");
    printf("%d\n", a == b);
    //---------------------------------------

    // logical operators
    int y = 5;
    // x > 3 && x < 10; AND
    // x > 3 || x < 10; OR
    // !(x > 3 && x < 10); NOT

    printf("------------------------------\n");
    printf("%d\n", x > 3 && x < 10);
    printf("%d\n", x > 3 || x < 10);
    printf("%d\n", !(x > 3 && x < 10));

    return 0;
}