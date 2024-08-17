
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *b, *c, *d, *e, i, n;
    b = calloc(1, sizeof(int));
    c = (int *)malloc(sizeof(int) * 10);
    d = (int *)malloc(sizeof(int)); 
    e = malloc(5 * sizeof(int));
    *b = 1;
    for (i = 0; i < 10; i++) {
        *(c + i) = i;
        *(d) = i + 2; 
        *(e + i % 5) += i * i; 
    }
    n = *d;
    free(b);
    free(c);
    free(d);
    free(e);
    return n;
}

int main() {
    int value = a();
    printf("Returned value: %d\n", value);
    return 0;
}
