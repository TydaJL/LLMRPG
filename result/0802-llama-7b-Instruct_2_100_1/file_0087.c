
#include <stdio.h>

int a() {
    int x = 42;
    float y = 2.34 * x;
    x = (int)(2 * y);
    return x;
}

int b() {
    int x = 4;
    return x * 10 + 5;
}

int c() {
    return 0;
}

double d(int x) {
    if (x == 0) {
        return 1;
    } else {
        return d(x - 1) / 2;
    }
}

int f(int z) {
    if (z < 1) {
        return 1;
    }
    return 0;
}

int e(int x, double y) {
    int z = 0;
    if (f(z) && x < 1) {
        return (int)(y * e(y, y) + x + y * x);
    } else {
        return x;
    }
}

int g() {
    int a[5];
    a[1] = 0;
    return a[1];
}

int main() {
    printf("a() = %d\n", a());
    printf("b() = %d\n", b());
    printf("c() = %d\n", c());
    printf("d(5) = %f\n", d(5));
    printf("e(0, 1.5) = %d\n", e(0, 1.5));
    printf("g() = %d\n", g());
    return 0;
}
