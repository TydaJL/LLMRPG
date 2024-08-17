
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

int d() {
    return 4;
}

int e() {
    return 5;
}

int main() {
    int result_a = a();
    int result_b = b();
    int result_c = c();
    int result_d = d();
    int result_e = e();

    printf("a: %d, b: %d, c: %d, d: %d, e: %d\n", result_a, result_b, result_c, result_d, result_e);
    return 0;
}
