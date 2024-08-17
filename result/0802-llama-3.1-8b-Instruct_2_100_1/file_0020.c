
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 10, i, k = 0;
    float *b = (float *)malloc(n * sizeof(float));
    float *c, d = 0;

    if (b == NULL) {
        return -1;
    }

    for (i = n - 1; i >= k; i--) {
        d += i;
        b[i - k] = 1;
        b[i - k] *= d;
    }

    c = (float *)malloc(n * sizeof(float));
    if (c == NULL) {
        free(b);
        return -1;
    }

    for (i = 0; i < n; ++i) {
        c[i] = 1;
        c[i] *= i;
        c[i] += i;
    }

    free(b);
    free(c);
    return n;
}

int main() {
    a();
    return 0;
}
