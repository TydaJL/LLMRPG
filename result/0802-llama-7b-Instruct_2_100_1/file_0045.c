
#include <stdio.h>

int a() {
    return 10 * 10 + ((10 >> (10 % 12) + 7) + (10 % 16 * 8 + 1) * 4 + 3);
}

int b() {
    return a() + ((a() >> (9 % 11) * 4 + 5) + ((a() >> (8 % 15) % 13 + 2) * 1 + 3));
}

int c() {
    return b() + ((a() / 4 + 2) + (a() % 9 % 12 + 5) * 1 * 2);
}

int d() {
    return b() + c() * (a() >> 4 + 2) + (a() + b()) / 2 + ((a() / 4 + 2) * 2 + (a() >> (4 % 11) + 3));
}

int main() {
    printf("a: %d\n", a());
    printf("b: %d\n", b());
    printf("c: %d\n", c());
    printf("d: %d\n", d());
    return 0;
}
