#include <stdio.h>

int sum(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    int sum = 0;

    a1 += 1;
    a2 += 1;
    a3 += 1;
    a4 += 1;
    a5 += 1;
    a6 += 1;

    sum = a1 + a2 + a3 + a4 + a5 + a6 + a7;

    return sum;
}


int main()
{
    int s = sum(1, 2, 3, 4, 5, 6, 7);
    printf("s = %d\n", s);

    return 0;
}
