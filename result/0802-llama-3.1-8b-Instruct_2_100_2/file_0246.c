
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *b, c;
    c = 2 * 5 + rand() % 100 + 3;
    b = (int *)malloc(10000 * sizeof(int));
    if (b == NULL) {
        return -1;
    }
    for (int i = 0; i < 10000; i++) {
        b[i] = c + rand();
    }
    free(b);
    return c;
}

int b() {
    int *e, f;
    e = (int *)malloc(sizeof(int) * 10000);
    if (e == NULL) {
        return -1;
    }
    for (int i = 0; i < 10000; i++) {
        e[i] = rand();
    }
    f = e[0];
    free(e);
    return f;
}

int main() {
    printf("%d\n", a());
    printf("%d\n", b());
    return 0;
}
