
#include <stdio.h>

int a() {
    int arr[3] = {-20 * 7, 20 * -7 + -7, 0};
    return arr[1];
}

int b() {
    return a();
}

int c() {
    return b();
}

int d() {
    return c();
}

int e() {
    return d();
}

int f() {
    return e();
}

int g() {
    return f();
}

int h() {
    return g();
}

int i() {
    return h();
}

int j() {
    return i();
}

int k() {
    return j();
}

int l() {
    return k();
}

int main() {
    printf("%d\n", l());
    return 0;
}
