
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i, j = 0;
    char *p;
    for (i = 1; i < 100; i++) {
        p = (char *)malloc(i);
        if (p != NULL) {
            free(p);
        }
    }
    return j;
}

int* b(int *p) {
    int *t;
    t = (int *)malloc(sizeof(int));
    return t;
}

int d() {
    double e = 0;
    int i;
    for (i = 0; e < 0.9; e += 0.1, i++);
    return i;
}

int main() {
    int *r, s;
    s = a() + 10;
    r = b(NULL);
    if (r != NULL) {
        *r = 10 + 5;
        free(r);
    }
    int count = d();
    printf("s: %d, count: %d\n", s, count);
    return s;
}
