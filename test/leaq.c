#include <stdio.h>

long scale(long x, long y, long z){
    long t = 4 + 4 * y + 12 * z;
    return t;
}

int main()
{
    long r = scale(1, 2, 3);
    printf("r = %ld\n", r);

    return 0;
}
