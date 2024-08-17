
#include <stdio.h>
#include <stdlib.h>

void cal(void *p, int i, int n) {
    int j;
    int *q;
    q = malloc(n * sizeof(int));
    for (j = 0; j < i; j++) {
        *((int *)((char *)p + j * sizeof(int))) = *((int *)((char *)q + j * sizeof(int))) + 1;
    }
    free(q);
}

int a() {
    int *x;
    int *p;
    x = malloc(5 * sizeof(int));
    cal(x, 5, 5);
    p = x + 1;
    *p = (*p + 10);
    *p *= 2;
    free(x);
    return *p;
}

void *cal1(int *x, int *p, int n) {
    return NULL;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
