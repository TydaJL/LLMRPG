
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 0;
    for (int j = 2; n < 2000; j++) {
        n += j;
    }
    return n;
}

void b() {
    int i, j;
    int n = 0;
    int *v = malloc(2000 * sizeof(int));
    if (v == NULL) {
        exit(1);
    }
    for (j = 0, i = 0; j >= i && i < 1999; j--, i++) {
        n = n + n + 1;
    }
    free(v);
}

int main() {
    int n;
    char *p;
    p = malloc(sizeof(int));
    if (p == NULL) {
        exit(1);
    }

    n = a() + 1;
    *p = n;
    free(p);
    
    b();
    return a();
}
