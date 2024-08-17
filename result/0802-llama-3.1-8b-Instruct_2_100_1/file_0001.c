
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *b;
    b = (char *)malloc(10);
    if (b) {
        free(b);
        return 0;
    }
    return -1;
}

int b(int x) {
    char *b;
    b = (char *)malloc(x * sizeof(int));
    if (!b) {
        return -2;
    } else {
        free(b);
        return 1;
    }
}

void d(int *c, int d, double *e, float *f) {
    *c = 0;
    e[0] = f[0] = d;
    for (int i = 0; *c < 100; ++i) {
        *c = d * i;
        *e += d;
        f[i % 3] *= d;
    }
}

int main() {
    a();
    int c;
    double e[1] = {0};
    float f[3] = {1.0f, 2.0f, 3.0f};
    b(10);
    d(&c, 5, e, f);
    return 0;
}
