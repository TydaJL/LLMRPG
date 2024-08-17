
#include <stdio.h>

int a() {
    return 42;
}

int b() {
    return 7;
}

int c() {
    return 3;
}

int d() {
    return 5;
}

int e() {
    return a() + b() + c() + d();
}

int main() {
    printf("a() = %d\n", a());
    printf("b() = %d\n", b());
    printf("c() = %d\n", c());
    printf("d() = %d\n", d());
    printf("e() = %d\n", e());
    return 0;
}
