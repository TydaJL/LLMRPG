
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *x;
    x = calloc(1, 8);
    int i;
    int b[4][4];

    for (i = 0; i < 4; ++i) {
        for (int j = 0; j <= i; ++j) {
            b[i][j] = 0;
        }
    }

    int c[100];
    int *d;
    d = (int *)calloc(1, sizeof(int));
    
    for (i = 0; i < sizeof(c) / sizeof(c[0]); ++i) {
        c[i] = 0;
    }
    
    *d = 0xdeaf; 
    free(d);
    int result = *x; 
    free(x);
    return result;
}

int b() {
    int *e;
    e = malloc(10 * sizeof(int));
    int f[2][5];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            f[i][j] = 0;
        }
    }
    free(e);
    return 0;
}

int main() {
    a();
    b();
    return 0;
}
