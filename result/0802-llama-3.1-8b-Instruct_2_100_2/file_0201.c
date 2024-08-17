
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *z = (int *)malloc(100 * sizeof(int));
    double *y = (double *)malloc(100 * sizeof(double));
    if (z == NULL || y == NULL) {
        return -1;
    }
    for (int b = 0; b < 100; b++) {
        z[b] = b;
        y[b] = (double)(b + 10.0);
    }
    free(z);
    free(y);
    return 0;
}

int b() {
    return 0;
}

int c() {
    int i = 0;
    int d = 10;
    while (i <= d) {
        i++;
    }
    return i;
}

int main() {
    b();
    a();
    c();
    return 0;
}
