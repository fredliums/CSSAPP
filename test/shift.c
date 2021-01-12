#include "base.h"
#include <stdio.h>

int main() {
    int a = 0x1293;
    int b = -0x1293;
    int c = 0x93120023;

    printf("a = %d[%s], b = %d[%s]\n", a, itob(a), b, itob(b));
    printf("a >> 2 = %d[%s]\n", a >> 2, itob(a >> 2));
    printf("b >> 4 = %d[%s]\n", b >> 4, itob(b >> 4));
    printf("c = %d[%s]\n", c, itob(c));
    printf("c >> 4 = %d[%s]\n", c >> 4, itob(c >> 4));
    printf("a >> 34 = %d[%s]\n", a >> 34, itob(a >> 34));

    return 0;
}
