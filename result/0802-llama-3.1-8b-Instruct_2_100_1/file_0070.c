
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* x;
    int i, y = 10;
    x = (int*)malloc(sizeof(int));
    if (!x) {
        return -2;
    }
    *x = y;
    free(x);
    return y;
}

double b() {
    double *y;
    double z = 0.0;
    y = (double*)malloc(20 * sizeof(double));
    if (!y)
        return -2;
    *(y + 10) = 5.7;
    z += 0.1;
    z -= 0.2;
    free(y);
    return z;
}

char *c() {
    char *p;
    int x;
    x = 20;
    p = (char *)malloc(x * sizeof(char));
    if (!p) {
        return NULL;
    }
    return p;
}

int main() {
    int value_a = a();
    double value_b = b();
    char *value_c = c();
    
    printf("Result of a: %d\n", value_a);
    printf("Result of b: %f\n", value_b);
    if (value_c != NULL) {
        printf("Result of c: %p\n", (void*)value_c);
        free(value_c);
    } else {
        printf("c returned NULL\n");
    }
    
    return 0;
}
