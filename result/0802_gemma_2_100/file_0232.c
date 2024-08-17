
#include <stdio.h>

int a() {
    return 42;
}

int b() {
    return 23;
}

int c() {
    return 10;
}

int d() {
    return a() + b() + c();
}

int main() {
    printf("a: %d\n", a());
    printf("b: %d\n", b());
    printf("c: %d\n", c());
    printf("d: %d\n", d());
    return 0;
}
