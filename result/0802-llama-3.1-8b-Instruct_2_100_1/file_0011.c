
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a() {
    int* x;
    int* y;
    x = malloc(sizeof(int));
    y = malloc(sizeof(int));
    *y = 100;
    int** t = malloc(sizeof(int*));
    *t = x;
    int** p = malloc(sizeof(int*));
    *p = malloc(sizeof(int));
    **p = 0;
    **p += *y;
    return **t;
}

int b(int** x, double** y) {
    int i = 0, j;
    int* k = (int*)*y;
    j = *(*x + i) + *k;
    free(k);
    return j;
}

double c(int* z) {
    return sqrt(*z);
}

int main() {
    int result_a = a();
    printf("Result of a: %d\n", result_a);
    return 0;
}
