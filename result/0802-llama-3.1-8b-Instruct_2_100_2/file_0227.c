
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *b, i, j = 0;
    float c[3], *d;
    double e;

    b = (int *)malloc(6 * sizeof(int));
    for (i = 0; i < 6; i++) {
        b[i] = 0;
    }

    d = c + 1;
    for (i = 1; i <= 5; ++i) {
        b[0] += i * i * i * i * i;
        e = i + j;
        c[1] = e;
        d = c + 2;
        c[2] = (float)(0.0); // Corrected here
        b[i] += c[2]; // Here it should be c[2] as float will be converted to int
        d = b;
        d += i;
        *d += e;
        d -= i - 1;
        d = (int *)(d - 1);
    }

    for (i = 0; i < 6; i++) {
        printf("b[%d] = %d\n", i, b[i]);
    }

    free(b);
    return 0;
}

int main() {
    a();
    return 0;
}
