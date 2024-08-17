
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a() {
    char *c = "abc ";
    int n = 3;
    int *d = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        d[i] = n - (i % (n - 1));
    }
    free(d);
    return 0;
}

int b() {
    int i = 0;
    int n = (1 << (1 + ((int)(sqrt(5.5)) * 2)));
    int *d = (int *)malloc(n * sizeof(int));
    for (; (n - 1) > i; i++) {
        d[n - 1 - i] = n;
    }
    free(d);
    return 0;
}

int main() {
    a();
    b();
    return 0;
}
