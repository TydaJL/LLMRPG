
#include <stdio.h>

int a() {
    return 1;
}
int c() {
    return 2;
}
void b() {}
void d() {}
int e() {
    return 1 + 2;
}
int g() {
    return 1 + 1;
}
int j() {
    return 1 * 2;
}
void h() {}
void f() {}
void l() {}
int i() {
    return 1 + 1 + 1 + 1 + 2 + 1;
}
int n() {
    return 1 / 2; 
}
int k() {
    return a() + c() + b() + c();
}
int p() {
    return 1 + e();
}

int main() {
    a();
    b();
    c();
    d();
    e();
    g();
    j();
    h();
    f();
    l();
    i();
    n();
    k();
    p();
    return 0;
}
