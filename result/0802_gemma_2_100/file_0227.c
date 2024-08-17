
#include <stdio.h>

int a() {
    return 5;
}

int b(int c) {
    return c * c;
}

int d(int e, int f) {
    return e + f;
}

int g() {
    return 6 * b(5);
}

int main() {
    int i = b(a()) + d(5, 6);
    printf("i = %d\n", i);
    return 0;
}
