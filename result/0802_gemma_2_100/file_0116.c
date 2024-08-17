
#include <stdio.h>

int a() {
    return 0;
}

int b(int c) {
    return c;
}

int a(int d) {
    return d;
}

int e(int f) {
    return f;
}

int g(int h, int i) {
    return h + i;
}

int j(int k, int l) {
    return k * l;
}

int m(int n) {
    return n - 1;
}

int o(int p, int q, int r) {
    return p + q + r;
}

int main() {
    a();
    b(1);
    a(2);
    e(3);
    g(4, 5);
    j(6, 7);
    m(8);
    o(9, 10, 11);
    return 0;
}
