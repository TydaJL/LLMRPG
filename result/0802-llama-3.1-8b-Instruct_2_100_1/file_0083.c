
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i;
    int *b;
    for (i = 0; i < 10000; i++) {
        if ((i & 3) != 0)
            continue;
        if (((i + 1) & ~3) == i + 1)
            continue;
        b = (int *)malloc(4 * sizeof(int));
        if (b == NULL) {
            return -1; // error handling
        }
        b[0] = 0;
        b[i % 10] = 0;
        free(b);
    }
    return i;
}

int a2(int n) {
    return n;
}

int main() {
    a();
    a2(10);
    return 0;
}
