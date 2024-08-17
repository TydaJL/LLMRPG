
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *b;
    b = (int *)malloc(sizeof(int));
    *b = 1;
    int result = *b;
    free(b);
    return result;
}

int main() {
    char *d = (char *)malloc(20 * sizeof(*d));
    d[0] = 'A';

    int *e = (int *)calloc(2, sizeof(*e));
    e[1] = 10;

    int *f = (int *)malloc(5 * sizeof(int));
    f[0] = 3;

    int *f_start = f;
    for (; *f; f++) *f = *f + 1;
    f[0] = 0;

    int g = *(f - 1);
    int *h = (int *)malloc(sizeof(int));
    *h = g;

    printf("Return value from a(): %d\n", a());
    printf("First char in d: %c\n", d[0]);
    printf("Value at e[1]: %d\n", e[1]);
    printf("Value in f after loop: %d\n", *(f - 1));
    printf("Value in h: %d\n", *h);

    free(d);
    free(e);
    free(f_start);
    free(h);

    return 0;
}
