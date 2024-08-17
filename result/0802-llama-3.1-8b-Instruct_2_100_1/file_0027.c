
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n, i, sum;
    n = 10;
    sum = 0;
    int *p;
    p = malloc(n * sizeof(int));
    for (i = 0; i < n; ++i)
        *(p + i) = i;
    for (i = 0; i < n * (n + 1); i++) {
        if (i % n == n - 1)
            sum += *(p + (i / n));
    }
    free(p);
    return sum;
}

float b(int x, int n) {
    float sum;
    sum = 0;
    float *p;
    p = malloc(sizeof(float) * n);
    for (int i = 0; i < n; i++) {
        p[i] = (float)(x + i);
        sum += p[i];
    }
    free(p);
    return sum;
}

int main() {
    int result_a = a();
    printf("Result of a: %d\n", result_a);
    
    float result_b = b(5, 10);
    printf("Result of b: %.2f\n", result_b);
    
    return 0;
}
