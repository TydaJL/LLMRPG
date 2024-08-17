
#include <stdio.h>

int a() {
    return 5;
}

int b() {
    return 10;
}

int c() {
    return a() + b();
}

int d() {
    return 20;
}

int e() {
    return c() + d();
}

int main() {
    int result_a = a();
    int result_b = b();
    int result_c = c();
    int result_d = d();
    int result_e = e();

    printf("a() = %d\n", result_a);
    printf("b() = %d\n", result_b);
    printf("c() = %d\n", result_c);
    printf("d() = %d\n", result_d);
    printf("e() = %d\n", result_e);

    return 0;
}
