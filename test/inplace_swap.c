#include <stdio.h>

void inplace_swap_1(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void inplace_swap_2(int *a, int *b) {
    *b = *a ^ *b;
    *a = *a ^ *b;
    *b = *a ^ *b;
}

void reverse_array(int a[], int cnt) {
    int first, last;

    for (first = 0, last = cnt - 1;
            first < last;
            first++, last--) {
        inplace_swap_2(&a[first], &a[last]);
    }
}

void show_array(int a[], int cnt) {
    for (int i = 0; i < cnt; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int a, b;
    
    a = 12;
    b = 21;

    printf("Before swap: a=%d, b=%d\n", a, b);
    inplace_swap_1(&a, &b);
    printf("Swap: a=%d, b=%d\n", a, b);
    inplace_swap_2(&a, &b);
    printf("Swap: a=%d, b=%d\n", a, b);

    int a1[] = {1, 2, 3, 4, 5, 6};
    printf("Before reverse: ");
    show_array(a1, 6);
    reverse_array(a1, 6);
    printf("Reverse: ");
    show_array(a1, 6);

    int a2[] = {1, 2, 3, 4, 5, 6, 7};
    printf("Before reverse: ");
    show_array(a2, 7);
    reverse_array(a2, 7);
    printf("Reverse: ");
    show_array(a2, 7);

    return 0;
}
