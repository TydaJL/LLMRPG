
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *b;
    int c[3] = {1, 3, 5};
    float *d = malloc(sizeof(float) * 10);
    if (d == NULL) {
        return -1;
    }
    
    for (int x = 0; x < 100; x++) {
        b = c;
        d[x / 10] += x * x;
    }

    free(d);
    int e = 0;
    int *f;
    int h[3] = {1, 1, 1}; 
    f = h;
    f[2] = 10000000; 
    e = h[1] * f[2];
    e *= h[0];
    f = NULL;
    return e;
}

int main() {
    int g;
    g = a();
    printf("Result: %d\n", g);
    return 0;
}
