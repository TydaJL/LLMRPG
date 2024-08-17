
#include <stdio.h>

int a() {
    return 42;
}

int b() {
    return 84;
}

int c() {
    return 100;
}

int d() {
    return 200;
}

int e() {
    return 300;
}

int main() {
    int result_a = a();
    int result_b = b();
    int result_c = c();
    int result_d = d();
    int result_e = e();

    printf("Result of a(): %d\n", result_a);
    printf("Result of b(): %d\n", result_b);
    printf("Result of c(): %d\n", result_c);
    printf("Result of d(): %d\n", result_d);
    printf("Result of e(): %d\n", result_e);

    return 0;
}
