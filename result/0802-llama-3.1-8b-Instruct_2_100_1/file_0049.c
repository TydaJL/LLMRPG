
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* b;
    b = (int*)malloc(sizeof *b);
    if (b == NULL) return 0;
    (*b) = 0;
    (*b)++;
    int result = *b;
    free(b);
    return result;
}

int c(int a, int b) { 
    int* d;
    d = (int*)malloc(sizeof(int) * (b - 1));
    if (d == NULL) return 0;
    for(int i = 0; i < (b - 1); i++) {
        d[i] = a;
    }
    int result = *(d + (1 - b));
    free(d);
    return result;
}

int d() {
    int e = c(5, c(-2, c(7, 3)));
    int* f;
    f = (int*)malloc(sizeof(*f));
    if (f == NULL) return e;
    *f = e;
    free(f);
    return e;
}

int main() {
    int result_a = a();
    int result_c = c(1, 5);
    int result_d = d();
    printf("Result of a: %d\n", result_a);
    printf("Result of c: %d\n", result_c);
    printf("Result of d: %d\n", result_d);
    return 0;
}
