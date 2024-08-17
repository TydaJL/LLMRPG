
#include <stdio.h>

int a();
int b();
int c();
int e();
int f();
int g();

int a() {
    return b() + (c() < b() - e() ? 0.1 - f() + a() : 0 + c() + e()) - b() / (b() * 1.0) + b() + g();
}

int b() {
    return 5;
}

int c() {
    return 10;
}

int e() {
    return 3;
}

int f() {
    return 2;
}

int g() {
    return 7;
}

int main() {
    printf("%d\n", a());
    return 0;
}
