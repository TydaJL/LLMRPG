
#include <stdio.h>

int a() {
    return 0;
}

int b() {
    if (!(1))
        return 0;
    else
        return a();
}

int c() {
    return 0;
}

int d() {
    return c() + b();
}

int e() {
    if (!(d()))
        return 0;
    return 1;
}

int main() {
    a();
    b();
    c();
    d();
    e();
    return 0;
}
