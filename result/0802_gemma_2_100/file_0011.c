
#include <stdio.h>

int a() {
    return 0;
}

int b(int c, int d) {
    return c + d;
}

int e(int f) {
    return f + 0;
}

int g(int h) {
    return h + 0;
}

int i(int j) {
    return j + 0;
}

int k(int l) {
    return l + 0;
}

int main() {
    a();
    b(5, 10);
    e(15);
    g(20);
    i(25);
    k(30);
    return 0;
}
