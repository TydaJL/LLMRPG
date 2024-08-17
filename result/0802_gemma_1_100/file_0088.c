
#include <stdio.h>

int a() {
    return 1;
}

void b() {
}

int c() {
    return 2;
}

void d() {
}

int e() {
    return 3;
}

int main() {
    int result_a = a();
    int result_c = c();
    int result_e = e();
    b();
    d();
    printf("Results: a = %d, c = %d, e = %d\n", result_a, result_c, result_e);
    return 0;
}
