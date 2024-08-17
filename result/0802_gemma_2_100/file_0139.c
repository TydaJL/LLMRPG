
#include <stdio.h>

int a() {
    return 1;
}

int b(int val) {
    return val * 2;
}

int c() {
    return 3;
}

int d(int val) {
    return val + 4;
}

int e(int val) {
    return val - 5;
}

int f(int val) {
    return val / 6;
}

int g(int val) {
    return val % 7;
}

int h(int val) {
    return val * val;
}

int i(int val) {
    return val + 1;
}

int j() {
    return 0;
}

int main() {
    printf("a: %d\n", a());
    printf("b(5): %d\n", b(5));
    printf("c: %d\n", c());
    printf("d(5): %d\n", d(5));
    printf("e(5): %d\n", e(5));
    printf("f(6): %d\n", f(6));
    printf("g(10): %d\n", g(10));
    printf("h(5): %d\n", h(5));
    printf("i(5): %d\n", i(5));
    printf("j: %d\n", j());

    return 0;
}
