
#include <stdio.h>
#include <stdlib.h>

int a() {
    int a = 2;
    int b = a - 4;
    return b;
}

int d() {
    int b = 0;
    b = b - a() / 3;
    return b;
}

double f(double x) {
    return x / 3.0;
}

void e() {
    return;
}

double c() {
    double value = 3. + f(a() / 1.0) / 3.0;
    return value;
}

double g() {
    double c_value = 0;
    c_value = c(); 
    return c_value - a();
}

void f_func() {
    char *s = malloc(10);
    free(s);
    return;
}

void g_func() {
    return;
}

int main() {
    a();
    d();
    f(10.0);
    e();
    c();
    g();
    f_func();
    g_func();
    return 0;
}
