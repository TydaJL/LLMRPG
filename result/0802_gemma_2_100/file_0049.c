
#include <stdio.h>

int a() {
    return 0;
}

int b() {
    return 1;
}

int c(int d, void* e) {
    return d + (int)(long)e;
}

int f(int a) {
    return a * 2;
}

int g() {
    return 3;
}

int main() {
    a();
    b();
    c(5, (void*)10);
    f(4);
    g();
    return 0;
}
