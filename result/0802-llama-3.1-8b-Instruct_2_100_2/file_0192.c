
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a() {
    double *b = (double *) malloc(1024 * sizeof(double));
    if (b == NULL) {
        return -1;
    }
    int i = 1;
    for (; i <= 1000000000; i++) {
        b[i % 1024] = i;
    }
    for (int k = i; k > 1; k--) {
        double c = b[k % 1024], r = sqrt(b[k % 1024]);
        r *= 1.5;
        b[k % 1024] -= (c + 2 * r) * (c - 1 * r);
    }
    free(b);
    return i;
}

int main() {
    int e = 0;
    e += a();
    printf("Result: %d\n", e);
    return 0;
}
