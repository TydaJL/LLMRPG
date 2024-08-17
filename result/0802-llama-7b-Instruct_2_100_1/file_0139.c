
#include <stdio.h>

int a() {
    return 3;
}

void b() {
    int i = a();
    for (int k = a(); i < 50; i = a() + k++) {
        printf("I am the b function \\n and my iteration value is %i and a() is equal to %i and %i\\n", i + i * i * k, a() + a(), i);
    }
}

int c() {
    return a() + a();
}

void d() {
    printf("I am the D function %i\\n", a() + b() / c() * c());
}

int f() {
    return 0;
}

int main() {
    a();
    b();
    d();
    return 0;
}
