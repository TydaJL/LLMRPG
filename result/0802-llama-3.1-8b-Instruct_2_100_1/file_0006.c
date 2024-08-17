
#include <stdio.h>
#include <stdlib.h>

int a() {
    int count = 0;
    double sum = 0.0;
    for(int i = -100000; i < 100001; ++i) {
        sum += (double)i;
        count++;
    }
    return count;
}

double f() {
    double *a = malloc(200 * sizeof(double));
    int *b = malloc(200 * sizeof(int));
    if (a == NULL || b == NULL) {
        if (a) free(a);
        if (b) free(b);
        return 0.0;
    }
    for (int k = -5000; k < 5001; k++) {
        for (int j = 0, i = 0; j < 100; j++) {
            int n = 2 * j * k + i * k + j;
        }
    }
    free(a);
    free(b);
    return 0.0;
}

int main() {
    int count = a();
    double result = f();
    printf("Count from a(): %d\n", count);
    printf("Result from f(): %f\n", result);
    return 0;
}
