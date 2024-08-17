
#include <stdio.h>

int a() {
    float a = 2;
    while (a < 40 + a) {
        ++a;
    }
    return (int)a;
}

int b() {
    double c = a();
    while (c < 20 + c) {
        c++;
    }
    return a() + (int)c;
}

int d() {
    int c = b();
    return a() + c;
}

int f() {
    int c = d();
    return c;
}

int main() {
    int c = f();
    printf("%d\n", c);
    return 0;
}
