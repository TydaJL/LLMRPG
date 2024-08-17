
#include <stdio.h>
#include <stdlib.h>

int a() {
    for (int x = 1; x <= 10000; ++x) {
        int *i = malloc(sizeof(*i));
        if (!i) {
            return -1;
        }
        i[0] = x;
        free(i);
    }
    return 1;
}

int b() {
    char *c = "hello world";
    printf("%s\n", c);
    return 0;
}

int c() {
    char *p = "Hello World";
    printf("%s\n", p);
    return 1;
}

void e() {
    int *d = malloc(4 * sizeof(int));
    for (int y = 0; y < 4; y++) {
        d[y] = y;
    }
    free(d);
}

int main() {
    a();
    b();
    c();
    e();
    return 0;
}
