
#include <stdio.h>

int b(int x) {
    return x + 1;
}

int c(int y) {
    return y * 2;
}

int d(int z) {
    return z - 3;
}

int f(int w) {
    return w / 2;
}

int a() {
    return b(2 + 3 - 3) + c(4 + 4) + f(7);
}

int main() {
    printf("%d\n", a());
    return 0;
}
