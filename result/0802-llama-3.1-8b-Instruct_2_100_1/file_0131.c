
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *p;
    double *q = (double *)malloc(sizeof(double));
    int c = 0;
    int *x = (int *)calloc(10, sizeof(int));
    int *y = NULL;
    p = x;
    *q = 3.0;
    *x += 2;
    y = (int *)malloc(sizeof(int));
    if (p == NULL) {
        exit(1);
    }
    for (int i = 1; i < 100; i++) {
        c += i;
        *q += 3.0;
        x = (int *)realloc(x, (10 + i) * sizeof(int));
        if (x == NULL) {
            free(q);
            free(y);
            exit(1);
        }
    }
    free(y);
    free(p);
    free(q);
    return c;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
