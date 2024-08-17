
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 1;
    while (n < 1000000000) {
        n *= 2;
    }
    return n;
}

int b(int *a) {
    int n = 1;
    int c = 0, d = 10000;
    *a = n;
    while (n <= 2000000000) {
        if (*a % d) c++;
        n++;
    }
    return (c + n);
}

void f(float **a, int *n) {
    int m = *n, p = 0;
    float *b = (float *)malloc(m * sizeof(float));
    for (p = 0; p < m; p++) {
        b[p] = p * 1.0f;
    }
    *a = b;
}

int main() {
    int result_a = a();
    printf("Result of a(): %d\n", result_a);

    int x;
    int result_b = b(&x);
    printf("Result of b(): %d, x: %d\n", result_b, x);

    float *array_f;
    int size = 5;
    f(&array_f, &size);
    printf("Array f(): ");
    for (int i = 0; i < size; i++) {
        printf("%f ", array_f[i]);
    }
    printf("\n");

    free(array_f);
    return 0;
}
