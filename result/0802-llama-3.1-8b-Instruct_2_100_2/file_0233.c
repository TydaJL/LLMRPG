
#include <stdio.h>
#include <stdlib.h>

int a() {
    double *p;
    int i = 0;
    p = malloc(4 * sizeof(double));
    if (!p) return 0;
    for (i = 0; i < 4; i++) {
        p[i] = (i) * 0.0001;
    }
    free(p);
    return i;
}

void *b() {
    double *x = NULL;
    x = realloc(x, 10 * sizeof(double));
    if (!x) return NULL;
    return (void *)x;
}

int main() {
    a();
    b();
    return 0;
}
