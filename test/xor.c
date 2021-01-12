#include <stdio.h>

int main(){
    int x = 0x87654321;

    printf("~%x = %.8x\n", x, ~x);
    printf("%x ^ ~0 = %.8x\n", x, x ^ ~0);
    printf("%x ^ 0 = %.8x\n", x, x ^ 0);

    return 0;
}
