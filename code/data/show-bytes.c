#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; i++)
        printf("%.2x", start[i]);
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof(x));
}

void show_float(float x)
{
    show_bytes((byte_pointer) &x, sizeof(x));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer) &x, sizeof(x));
}

void test()
{
    int val = 0x87654321;

    byte_pointer pval = (byte_pointer) &val;

    show_bytes(pval, 1);
    show_bytes(pval, 2);
    show_bytes(pval, 3);
}

int main()
{
    int num = 0x12345678;
    show_int(num);
    float f = 0.12345;
    show_float(f);
    int *p = &num;
    show_pointer(p);
    float *pf = &f;
    show_pointer(pf);

    printf("test:\n");
    test();
    return 0;
}
