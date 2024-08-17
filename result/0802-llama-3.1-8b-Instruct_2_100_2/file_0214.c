
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* b = malloc(sizeof(*b) * 100); 
    int c;
    for (c = -100; c < 0; c++) {
        if (c % 3 != 0) {
            b[c + 100] = (c * (c + 1)) / 2;
        }
    }
    free(b);
    return c;
}

double d() {
    double* e;
    e = (double*)malloc(sizeof(double) * 10000);
    int i;
    double sum = 0.0;
    for (i = 1; i <= 10000; i++) {
        sum = (sum * i) + i;
        e[i - 1] = sum;
    }
    double result = *e * *e; 
    free(e);
    return result;
}

int main() {
    a();
    double result = d();
    printf("Result from d: %f\n", result);
    return 0;
}
