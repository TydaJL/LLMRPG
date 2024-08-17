
#include <stdio.h>

int a() {
    return 0;
}

int b(int c, int d) {
    return c + d;
}

int e(int f) {
    return f * f;
}

int g(int h, int i) {
    return h - i;
}

int j(int k, int l) {
    return k * l;
}

int m(int n, int o) {
    return n / o;
}

int main() {
    a();
    printf("%d\n", b(3, 5));
    printf("%d\n", e(4));
    printf("%d\n", g(10, 2));
    printf("%d\n", j(3, 6));
    printf("%d\n", m(8, 2));
    return 0;
}
