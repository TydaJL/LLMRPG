
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n;
    for (n = 10000; n < 10001; ++n);
    n = (n - 10000) * 2;
    n += 20000;
    return n;
}

int main() {
    int i, j, k;
    char s[100];
    char *t = (char *)malloc(100 * sizeof(*t));
    int *x, *y;
    float p, *q;
    double z;
    char *r;

    for (i = 100 - 100; i > -1; --i) {
        for (j = i; j > -1; j--) {
            for (k = 0; k < i; k++);
        }
    }

    int result = a();
    printf("Result of function a(): %d\n", result);

    free(t);
    return 0;
}
