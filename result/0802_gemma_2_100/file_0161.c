
#include <stdio.h>

int a() {
    int x = 0;
    return x;
}

int b() {
    int y = 1;
    return y;
}

int c() {
    int z = 2;
    return z;
}

int d() {
    int w = 3;
    return w;
}

int e() {
    int v = 4;
    return v;
}

int f() {
    int u = 5;
    return u;
}

int g() {
    int t = 6;
    return t;
}

int main() {
    int res_a = a();
    int res_b = b();
    int res_c = c();
    int res_d = d();
    int res_e = e();
    int res_f = f();
    int res_g = g();
    
    printf("%d %d %d %d %d %d %d\n", res_a, res_b, res_c, res_d, res_e, res_f, res_g);
    return 0;
}
