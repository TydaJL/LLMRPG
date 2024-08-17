
#include <stdio.h>

int a() {
    return 0;
}

int b() {
    return 1;
}

int c(int x) {
    return x;
}

int d(int e, int f) {
    return e + f;
}

int main() {
    printf("%d\n", a());
    printf("%d\n", b());
    printf("%d\n", c(1));
    printf("%d\n", d(2, 3));
    return 0;
}
