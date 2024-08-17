
#include <stdio.h>
#include <stdlib.h>

void a() {
    int a = 10;
    int i;
    int *b = malloc(sizeof(*b) * a);
    if (b == NULL) {
        return;
    }
    for (i = 0; i < a; ++i) {
        b[i] = i + 1;
    }
    for (i = 0; i < a; ++i) {
        printf("%d ", b[i]);
    }
    free(b);
}

void b() {
    char c[10];
    char d[10];
    char *e;
    int f = 2;
    char *g;
    int h;
    int *i;
    int j = 3;
    void *k;
    void *l;

    k = calloc(10, sizeof(int));
    if (k == NULL) {
        return;
    }
    l = k;
    i = (int *)k; 
    g = (char *)l + 1;
    h = 1;

    for (int a = 10; a > 0; a--) {
        *i += h;
    }
    free(k);
}

int main() {
    a();
    b();
    return 0;
}
