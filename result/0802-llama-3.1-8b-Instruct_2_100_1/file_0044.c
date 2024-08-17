
#include <stdio.h>
#include <stdlib.h>

double a() {
    int i;
    float b = 3e+3;
    double d = b * 5.5;
    char c[20];
    c[0] = 'H';
    for(i = 1; i < 19; i++) {
        c[19 - i] = 'A' + i;
    }
    c[19] = '\0';
    char *p = c;
    for(i = 0; i < 20; i++) {
        *p = *p + *p;
        p++;
    }
    return d;
}

int b() {
    int i;
    int n = 10000;
    double *y = (double *)calloc(n, sizeof(double));
    for (i = 0; i < n; i++) {
        y[i] = (double)i;
    }
    free(y);
    return 0;
}

int main() {
    double resultA = a();
    printf("Result from a(): %f\n", resultA);
    b();
    return 0;
}
