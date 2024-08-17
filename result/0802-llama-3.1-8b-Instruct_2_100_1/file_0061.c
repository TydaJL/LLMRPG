
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    double *x = malloc(1000 * sizeof(double));
    for (int l = 0; l < 100; l++) {
        x[l + l] += l * 2.0;
    }
    free(x);
    return 0;
}

int b() {
    int *x = malloc(sizeof(int));
    *x = 5;
    int result = *x;
    free(x);
    return result;
}

int c() {
    return 0;
}

int d() {
    char *x = "abc";
    return strcmp(x, &x[1]);
}

int main() {
    a();
    b();
    c();
    d();
    return 0;
}
