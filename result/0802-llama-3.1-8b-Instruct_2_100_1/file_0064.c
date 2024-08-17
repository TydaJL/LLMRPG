
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* p = (int *)malloc(1 * sizeof(int));
    if (p == NULL) {
        return -1;
    }
    *p = 42; 
    int value = *p;
    free(p);
    return value;
}

double f() {
    return (double)(2.0 + 4 * (3 - (int)(2.0 + 4 * 3)));
}

int main() {
    int result_a = a();
    double result_f = f();
    printf("Result of a(): %d\n", result_a);
    printf("Result of f(): %f\n", result_f);
    return 0;
}
