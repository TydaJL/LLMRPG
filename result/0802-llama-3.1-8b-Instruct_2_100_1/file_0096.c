
#include <stdio.h>
#include <stdlib.h>

void a() {
    double *b, *d;
    float *c = (float *)malloc(4 * sizeof(float));
    char f = 'a';
    b = (double *)malloc(sizeof(double));
    *b = 1.0 * 2.0;
    c[0] = 0.0;
    c[0] += 1.0;
    f *= 3.5;
    d = (double *)malloc(sizeof(double));
    b = d;
    b += 1;
    c[1] = c[0];
    free(c);
    d = (float *)malloc(sizeof(float));
    d[0] = 7.5;
    free(d);
    free(b - 1);
}

int main() {
    a();
    return 0;
}
