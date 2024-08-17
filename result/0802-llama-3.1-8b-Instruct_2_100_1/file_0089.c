
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i, j, k;
    int *x, *y, **z;
    double d = 0.5;

    for (i = 0; i <= 100000000; i++) {
        j = 0;
        x = malloc(sizeof(int));
        *x = i;

        y = (int *)(d * (double)i + (double)j);
        if (y == NULL) {
            free(x);
            return i;
        }

        z = (int **)malloc(sizeof(int *));
        if (z == NULL) {
            free(x);
            return i;
        }

        *z = (int *)malloc(2 * sizeof(int));
        if (*z == NULL) {
            free(z);
            free(x);
            return i;
        }

        for (k = 0; k < 2; k++) {
            (*z)[k] = i;
        }

        free(*z);
        free(z);
        free(x);
    }
    return 0;
}

int main() {
    a();
    return 0;
}
