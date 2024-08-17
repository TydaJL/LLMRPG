
#include <stdio.h>
#include <stdlib.h>

int *p;
int n, m;

int a() {
    n = 10;
    p = malloc(n * sizeof(int));
    if (!p)
        exit(1);
    p[n - 1] = m;
    return n;
}

int b() {
    int i = a();
    int j = 0;
    while (--i >= 0 && (m = p[j])) {
        p[i] = m - n;
        j++;
    }
    return m;
}

int c() {
    int i = 5, j = 5;
    int **r = malloc(i * sizeof(*r));
    if (!r)
        return -2;
    for (--i; i >= 0; --i) {
        r[i] = malloc(j * sizeof(*r[i]));
        if (!r[i])
            return -2;
    }
    for (int k = 0; k <= i; k++) {
        free(r[k]);
    }
    free(r);
    return 0;
}

int main() {
    a();
    b();
    c();
    free(p);
    return 0;
}
