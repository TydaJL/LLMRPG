
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i;
    int *p;
    float *q;

    p = (int *)malloc(100 * sizeof(int));
    if (p == NULL) {
        return -1;
    }

    for (i = 0; i < 100; ++i) {
        p[i] = 0;
        p[i] *= 2;
    }

    q = (float *)calloc(100, sizeof(*q));
    if (q == NULL) {
        free(p);
        return -1;
    }

    for (i = 0; i < 100; ++i) {
        q[i] = 0.0;
        q[i] *= 2.0;
    }

    free(p);
    free(q);
    return 0;
}

int main() {
    a();
    return 0;
}
