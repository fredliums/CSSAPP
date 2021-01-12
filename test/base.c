#include "base.h"
#include <string.h>

char* itob(int num) {
    int i, j, result[35];
    char ret[36], *p = ret;

    for (i = 0, j = 0; i < 32; i++, j++) {
        /* Add a space every 8 bits */
        if (i > 0 && i % 8 == 0)
            result[j++] = 2;

        if (num & (1 << (31 - i)))
            result[j] = 1;
        else
            result[j] = 0;
    }

    for (i = 0; i < 35; i++) {
        *(p++) = result[i] == 2 ? ' ' : '0' + result[i];
    }
    *p = '\0';

    return strdup(ret);
}
