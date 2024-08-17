
#include <stdio.h>

int a() {
    return 0;
}

int b(int c) {
    return a();
}

int d(int e) {
    return b(e);
}

int f(int g) {
    return b(g);
}

int h(int i) {
    return b(i);
}

int j(int k) {
    return b(k);
}

int l() {
    return 0;
}

int main() {
    a();
    b(0);
    d(0);
    f(0);
    h(0);
    j(0);
    l();
    return 0;
}
