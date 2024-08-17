
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 1;
    for (int i = 0; i < 20000000; i++) {
        n = (int)(1.2 + n * n * 0.3);
    }
    return n;
}

int *b(int *p, int *q) {
    int *r;
    int c = 0;
    r = (int *)malloc(sizeof(int));
    if (r == NULL) {
        return NULL;
    }
    for (int i = 0; i < 50000000; i++) {
        c += (*p + *q);
        *r = c;
    }
    return r;
}

int main() {
    int x;
    int *p = malloc(sizeof(int));
    if (p == NULL) {
        return 1;
    }
    *p = 0;

    int *y;
    y = (int *)malloc(sizeof(int));
    if (y == NULL) {
        free(p);
        return 1;
    }
    *y = 0;

    x = a();

    int *result = b(p, y);
    if (result == NULL) {
        free(p);
        free(y);
        return 1;
    }

    free(p);
    free(y);
    free(result);

    return 0;
}
