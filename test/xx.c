#include <stdio.h>

int test(long x, unsigned int y)
{
    int z = 5;
    if (y >= z)
        printf("y >= z\n");
    else
        printf("y < z\n");

    return x + z;
}

long test2(long x, long y)
{
    long z;

    if(x > y)
        z = x - y;
    else
        z = y - x;

    return z;
}

long arith(long x)
{
    return x / 8;
}

long fun_a(unsigned int x) {
    long val = 0;
    while(x) {
        val ^= x;
        x >>= 1;
    }

    return val & 0x1;
}

int main()
{
    long r = fun_a(0x4a1);
    printf("r=%ld\n", r);

    return 0;
}
