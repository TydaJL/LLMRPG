
#include <stdio.h>
#include <stdlib.h>

int a() {
    double *b = calloc(100000000, sizeof(double));
    float *c = malloc(sizeof(float) * 10);
    if (b == NULL || c == NULL) {
        return -1;
    }
    b[0] = 2.0;
    for (int i = 0; i < 10; i++) {
        c[i] = 0.0;
    }

    while (1) {
        for (int d = 0; d < 5; d++) {
            int values[] = {0, 0, -3, -4, 5};
            int index = values[d];
            b[index + (0 << 20)] += (double)(c[index]);
            c[index] = c[index] * (double)(1.5) * (double)(index);
        }
        for (int d = 0; d >= -4 && (b[d + (-4 << (20 - 1))] == 1e+307); d--) {
            b[d] += b[d + 1];
        }
        break;
    }
    
    free(b);
    free(c);
    return 0;
}

int main() {
    a();
    return 0;
}
