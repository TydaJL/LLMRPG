
#include <stdio.h>

int a() {
    return 2 + 3;
}

int b(int x) {
    return x + x;
}

int c() {
    return b(a());
}

int d() {
    return c(b(a()));
}

int e() {
    return d(d(d()));
}

int f() {
    return e(e(e(e())));
}

int g() {
    return f(f(f()));
}

int h() {
    return g();
}

int main() {
    printf("a: %d\n", a());
    printf("b(5): %d\n", b(5));
    printf("c: %d\n", c());
    printf("d: %d\n", d());
    printf("e: %d\n", e());
    printf("f: %d\n", f());
    printf("g: %d\n", g());
    printf("h: %d\n", h());
    return 0;
}
