
#include <stdio.h>

int a() {
    int x = 5;
    return x;
}

int b() {
    int y = 10;
    return y;
}

int c() {
    int z = 15;
    return z;
}

int d() {
    int w = 20;
    return w;
}

int e() {
    int v = 25;
    return v;
}

int main() {
    printf("a: %d\n", a());
    printf("b: %d\n", b());
    printf("c: %d\n", c());
    printf("d: %d\n", d());
    printf("e: %d\n", e());
    return 0;
}
