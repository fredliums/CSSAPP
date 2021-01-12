#include <stdio.h>

long decode(long *xp, long *yp, long *zp) {
    long x = *xp;
    long y = *yp;
    long z = *zp;

    *yp = x;
    *zp = y;
    *xp = z;

    return z;
}

int decode2(long *xp, long *yp, long *zp) {
    long x = *xp;

    *xp = *zp;
    *zp = *yp;
    *yp = x;

    return *xp;
}

int main() {
    long a = 1, b = 2, c = 3;

    decode(&a, &b, &c);
    printf("a-%ld b-%ld c-%ld\n", a, b, c);

    a = 1; b =2; c = 3;
    decode2(&a, &b, &c);
    printf("a-%ld b-%ld c-%ld\n", a, b, c);

    return 0;
}
