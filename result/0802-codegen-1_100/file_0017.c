
#include <stdio.h>

void b() {
}

void c() {
}

void f() {
}

void g() {
}

void a() {
    int i = -9, j = 0, k = 0;
    while (j <= 3 || i > 2) {
        b();
        i--;
        j += i;
        c();
        j--;
        i += 2;
        k++;
    }
    f();
    g();
}

int main() {
    a();
    return 0;
}
