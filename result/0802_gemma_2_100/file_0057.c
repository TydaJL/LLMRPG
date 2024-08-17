
#include <stdio.h>

int a() {
    return 1;
}

int b() {
    return 2;
}

int c() {
    return 3;
}

int d(int e) {
    return 4;
}

int f(int g, int h) {
    return 5;
}

int i(int j, int k, int l, int m) {
    return 6;
}

int n(int o, int p, int q) {
    return 7;
}

int r(int s, int t) {
    return 8;
}

int main() {
    printf("%d\n", a());
    printf("%d\n", b());
    printf("%d\n", c());
    printf("%d\n", d(0));
    printf("%d\n", f(0, 0));
    printf("%d\n", i(0, 0, 0, 0));
    printf("%d\n", n(0, 0, 0));
    printf("%d\n", r(0, 0));
    return 0;
}
