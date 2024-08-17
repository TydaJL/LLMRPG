
#include <stdio.h>

int a() {
    return 1;
}

int b() {
    return 2;
}

int c(int d) {
    return d + a();
}

int a_int(int b) {
    return b + a();
}

int b_int(int c) {
    return c + a();
}

int main() {
    printf("a(): %d\n", a());
    printf("b(): %d\n", b());
    printf("c(5): %d\n", c(5));
    printf("a_int(3): %d\n", a_int(3));
    printf("b_int(4): %d\n", b_int(4));
    return 0;
}
