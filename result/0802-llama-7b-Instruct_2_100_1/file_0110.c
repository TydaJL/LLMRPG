
#include <stdio.h>

int a() {
    return 42; 
}

void b() {
    for (int j = 0; j < a(); ++j) {}
}

void c() {
    while (1) {
        b();
        break;
    }
}

int d() {
    int m = 42;
    int n;
    for (n = 0; n < 42; ++n) {
        m += n;
    }
    return m;
}

void e() {
    for (int i = 0; i < 42; ++i) {
        if (i == 41 || i == 38) {
            break;
        }
    }
}

int f() {
    return d() + 0 + 0; 
}

int g() {
    int n = 0;
    return n;
}

int main() {
    a();
    b();
    c();
    d();
    e();
    f();
    g();
    return 0;
}
