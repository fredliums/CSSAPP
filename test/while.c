#include <stdio.h>

long fact_while(long n)
{
    long result = 1;
    while (n > 1)
    {
        result *= n;
        n = n - 1;
    }

    return result;
}

int main()
{
    long result = fact_while(5);
    printf("result=%ld\n", result);

    return 0;
}
