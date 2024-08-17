
#include <stdio.h>

int a() {
    return 42 + 1 + 1 + 0 + 1 + 3 + 2;
}

int f() {
    return (a() + a() + a());
}

int d() {
    return (a() * a() * a() * a());
}

int g() {
    return d() * f();
}

int m() {
    int b = g();
    return b;
}

int h() {
    return a() - m();
}

int p() {
    int a_val = a() - m();
    int c = f();
    printf("%d %c %d\n", a_val - c + m(), ' ', f());
    return a_val;
}

int main() {
    int i = a() - 2;
    int j = f();
    printf("%d %d\n", i, j);
    p();
    return 0;
}
