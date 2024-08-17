
#include <stdio.h>

int a() {
    return 42;
}

int b() {
    return 27;
}

int c() {
    return a() + b();
}

int main() {
    printf("a() returns: %d\n", a());
    printf("b() returns: %d\n", b());
    printf("c() returns: %d\n", c());
    return 0;
}
