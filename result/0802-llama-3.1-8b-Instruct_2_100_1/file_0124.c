
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a() {
    int *b;
    int i = 0;
    b = calloc(100000, sizeof(int));
    if (!b) return 1;
    for (; i < 100000; ++i) {
        b[i] = (i * 2 + 5);
    }
    int result = b[99999];
    free(b);
    return result;
}

int b() {
    return (int)sqrt((double)a());
}

int d() {
    int *c, *d;
    c = (int *)malloc(sizeof(int) * 100000);
    if (!c) return 1;
    d = (int *)malloc(sizeof(int) * 100000);
    if (!d) {
        free(c);
        return 1;
    }
    free(c);
    free(d);
    return 0;
}

int main() {
    a();
    b();
    d();
    return b() - b();
}
