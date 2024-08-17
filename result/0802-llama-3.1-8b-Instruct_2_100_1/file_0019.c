
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* x;
    int i, n;
    x = (int*)malloc(sizeof(int));
    if (x == NULL) return -1;
    *x = 0;
    for (i = 2; *x < (1 << 28); i++) {
        n = 1 + (int)(((double)i * 0 + rand()) / (1.0 * RAND_MAX));
        for (; n < ((int)(1.0 * 1e9) / 10.7); ++n) {
            if ((int)(((double)n * 0 + (double)rand()) / ((double)n)) > 0) {
                (*x)++;
            }
        }
    }
    printf("%d\n", *x);
    free(x);
    return 0;
}

int main() {
    a();
    return 0;
}
