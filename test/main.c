#include <stdio.h>

void mulstore(long, long, long *);

int main() {
    long d;
    mulstore(2, 3, &d);
    printf("2 * 3 = %ld\n", d);

    return 0;
}

long mul2(long x, long y) {
    long s = x * y;
    return s;
}
