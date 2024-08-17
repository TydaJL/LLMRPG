
#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x, y, z;
};

int a() {
    struct Point *b = malloc(sizeof(struct Point));
    *b = (struct Point){.x = 1, .y = 2, .z = 3};
    int c = b->z;
    free(b);
    return c;
}

void f(struct Point *a) {
    struct Point *d = malloc(sizeof(struct Point));
    if (d == NULL) {
        return;
    }
    int *g = malloc(sizeof(int));
    if (g == NULL) {
        free(d);
        return;
    }
    *g = a->x;
    d->y = *g - a->x;
    free(g);
    free(d);
}

int main() {
    struct Point a = {.x = 1, .y = 2, .z = 3};
    struct Point b;

    b.z = a();
    printf("%d\n", b.z);

    f(&a);
    return 0;
}
