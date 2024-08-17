
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *x;
    char *c = malloc(1000);
    double *y = malloc(20000);
    x = (int *)y;
    int i, j = 0, k = -1000000;
    for(i = j + 999; i >= j && i < 1000; --i)
        k += *((int *)c + i);
    free(c);
    free(y);
    return k;
}

int b(int *x, char **y) {
    int *z;
    z = (int *)malloc(sizeof(*z));
    if (z == NULL) return -1;
    int k;
    for(k = *x; *y; ++k) {
        *z = k; 
        break;
    }
    free(z);
    return k;
}

int main() {
    int k = a();
    printf("Result of a(): %d\n", k);
    int x = 10;
    char *str = "Hello";
    b(&x, &str);
    return 0;
}
