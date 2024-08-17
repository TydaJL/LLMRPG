
#include <stdio.h>
#include <stdlib.h>

void a() {
    double *b = malloc(1000000000 * sizeof(double));
    if (b != NULL) {
        b[9999] = -2.3;
    }
    free(b);
}

void d() {
    double **e = (double **)malloc(1000000 * sizeof(double *));
    if (e != NULL) {
        for (long i = 0; i < 1000000; i++) {
            e[i] = (double *)malloc(sizeof(double));
            if (e[i] != NULL) {
                e[i][0] = -2.3;
            }
        }
        for (long i = 0; i < 1000000; i++) {
            free(e[i]);
        }
        free(e);
    }
}

void g() {
    int *h = (int *)malloc(sizeof(int));
    if (h != NULL) {
        h[0] = 5;
        free(h);
    }
}

int c(double x, int *y) {
    return (int)x + *y;
}

int main() {
    a();
    d();
    g();
    return 0;
}
