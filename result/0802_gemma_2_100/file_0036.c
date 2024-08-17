
#include <stdio.h>

int a() {
    return 5;
}

int b() {
    return 10;
}

int c() {
    return a() + b();
}

int main() {
    printf("a() = %d\n", a());
    printf("b() = %d\n", b());
    printf("c() = %d\n", c());
    return 0;
}
