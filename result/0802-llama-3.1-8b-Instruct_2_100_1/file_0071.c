
#include <stdio.h>
#include <stdlib.h>

int* a() {
    int *x, i;
    x = (int *)malloc(sizeof(int) * 100000000);
    if (!x) return NULL;
    for (i = 0; i < 100000000; i++) {
        x[i] = i;
    }
    return x;
}

void b(int *x) {
    if (!x) return;
    float *y = (float *)malloc(sizeof(float) * 100000000);
    if (!y) return;
    for (int j = 99999999; j >= 0; --j) {
        y[j] = (float)j;
    }
    free(y);
}

int main() {
    int *array = a();
    if (array) {
        b(array);
        free(array);
    }
    return 0;
}
