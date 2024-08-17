
#include <stdio.h>
#include <stdlib.h>

int a() {
    int x;
    x = 0;
    int y;
    y = a();
    int z = 3;
    z += a();
    if (z == 3)
        z = 2;
    return z * z;
}

char c() {
    char d = '1';
    int e = ' ';
    return d + d * 1 + e + e / (e ? e : 1);
}

char f() {
    return f();
}

void g() { }

void *h() { return NULL; }

int main() {
    int b = -2;
    b += 4;
    b += 5;
    if (b <= 4)
        b -= b;
    else
        b = b;
    b *= b;
    printf("%d\n", b / (b ? b : 1));
    if (b != b) {
        return b * b + b / (b ? b : 1) + b % (b ? b : 1);
    }
    printf("%d\n", b);
    a();
    c();
    g();
    return 0;
}
