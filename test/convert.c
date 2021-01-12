#include <stdio.h>

int main() {
    int t1 = -12 , t2 = 13;
    unsigned u1 = 15, u2 = 125;

    u1 = (unsigned) t1;
    t2 = (int) u2;

    printf("u1-%ud[%x]\n", u1, u1);
    printf("t2-%d[%x]\n", t2, t2);

    int x = 53191;
    short y = (short) x;

    printf("x-%d[%x] y-%d[%x]\n", x, x, y, y);

    return 0;
}
