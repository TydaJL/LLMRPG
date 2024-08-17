
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 0;
}

void function1() {
    int *p, *q;
    p = (int *)malloc(5 * sizeof(int));
    q = (int *)malloc(10 * sizeof(int));
    int *r;
    r = (int *)malloc((5 + 10) * sizeof(int));
    free(p);
    free(q);
    free(r);
}

void function2() {
    int x = 0, y = 0, z;
    char c[20] = {0};
    int *p;
    p = (int *)calloc(5, sizeof(int));
    for (; y < 5; y++) {
        x += y;
    }
    for (z = 0; z < 5; z++) {
        p[z] = 'a';
        c[z + 2] = 'a';
        c[z] = 'b';
    }
    free(p);
}

int main() {
    a();
    function1();
    function2();
    return 0;
}
