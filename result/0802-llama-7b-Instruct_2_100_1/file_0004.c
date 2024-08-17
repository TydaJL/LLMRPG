
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 0;
}

char b() {
    return ' ';
}

void c() {
}

char f(char *ptr) {
    return *ptr;
}

int main(void) {
    char *d = malloc(3 + 4 * a());
    if (d == NULL) {
        return 1;
    }
    d[a()] = c();
    d[a() + 1] = f(d + a() + 2);
    d[a()] = b();

    for (int i = a() + 1 - 1; i > a(); --i) {
        d[a() + i - a()] = c();
    }

    free(d);
    return 0;
}
