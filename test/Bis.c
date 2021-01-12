#include <stdio.h>
#include "base.h"

/* tranvert number in format binary */
char* itob(int num);

int bis(int x, int m);
int bic(int x, int m);

int bool_or(int x, int y);
int bool_xor(int x, int y);

int bis(int x, int m) {
    return x | m;
}

int bic(int x, int m) {
    return x & ~m;
}

int bool_or(int x, int y) {
    int result = bis(x, y);
    return result;
}

int bool_xor(int x, int y) {
    int result = bis(bic(x, y), bic(y, x));
    return result;
}

int main() {
    int x = 0x812;
    int m = 0x932;

    printf("x=%x[%s] m=%x[%s]\n", x, itob(x), m, itob(m));
    printf("bis(x, m) = %x[%s]\n", bis(x, m), itob(bis(x, m)));
    printf("bic(x, m) = %x[%s]\n", bic(x, m), itob(bic(x, m)));

    printf("x OR m = %x[%s]\n", bool_or(x, m), itob(bool_or(x, m)));
    printf("x XOR m = %x[%s]\n", bool_xor(x, m), itob(bool_or(x, m)));

    return 0;
}
