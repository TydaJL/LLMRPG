
#include <stdio.h>

int a() {
    return 2;
}

void b(double a[]) {
    a[0] = 2;
}

void c(double a[]) {
    a[0] = a[0];
}

void d(float a[]) {
    a[0] = 2;
}

void e(float a[]) {
    a[0] = 4;
}

void f(int *a, int b) {
    *a = b;
}

void g(int *a) {
    *a = 1;
}

void h(char a[]) {
    a[0] = a[0];
}

void k(char a[]) {
    a[0] = a[0];
}

void p(int a[]) {
    a[0] = 0;
}

int main() {
    printf("%d\n", a());

    double arr_d[1];
    b(arr_d);
    printf("%f\n", arr_d[0]);

    double arr_c[1] = {0};
    c(arr_c);
    printf("%f\n", arr_c[0]);

    float arr_f1[1];
    d(arr_f1);
    printf("%f\n", arr_f1[0]);

    float arr_f2[1];
    e(arr_f2);
    printf("%f\n", arr_f2[0]);

    int x = 1, y = 2;
    f(&x, y);

    int z = 0;
    g(&z);
    printf("%d\n", z);

    char arr_h[2] = {'a', '\0'};
    h(arr_h);
    printf("%c\n", arr_h[0]);

    char arr_k[2] = {'b', '\0'};
    k(arr_k);
    printf("%c\n", arr_k[0]);

    int arr_p[1];
    p(arr_p);
    printf("%d\n", arr_p[0]);

    return 0;
}
