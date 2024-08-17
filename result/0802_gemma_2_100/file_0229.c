
#include <stdio.h>

int a() {
    return 0;
}

int b() {
    return 5;
}

int c() {
    return 10;
}

int d() {
    return 15;
}

int main() {
    int result_a = a();
    int result_b = b();
    int result_c = c();
    int result_d = d();
    printf("%d %d %d %d\n", result_a, result_b, result_c, result_d);
    return 0;
}
