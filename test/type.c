#include <stdio.h>

int main() {
    signed char c = 0x80;
    char b = 0xFB;
    int a = 0;

    printf("c = %c[%d]\n", c, c);
    printf("b = %d[%x]\n", b, b);
    printf("~0 = %d[%x]\n", ~a, ~a);

    return 0;
}
