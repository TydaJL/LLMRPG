
#include <stdio.h>
#include <stdlib.h>

int a() {
    int x = 5, y = 10, n = x * (x * 2 + x);
    int* p1 = (int*)malloc(sizeof(int));
    *p1 = n;
    free(p1);
    return n;
}

int b() {
    float c, e, f = (float)(a() + 20);
    int d;
    d = (int)f;
    return d;
}

int main() {
    char *m, *l, o, *q, *r, *s;
    int z, j, u;
    for (j = 0; j < 10; j++) {
        z = a();
        u = b();
        printf("Iteration %d: a() = %d, b() = %d\n", j, z, u);
    }
    return 0;
}
