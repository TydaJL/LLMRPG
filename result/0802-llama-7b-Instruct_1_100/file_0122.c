
#include <stdio.h>

int a() {
    return (5 * 4 * 7);
}

int c() {
    return 0;
}

int d() {
    return 0;
}

int main() {
    int result_a = a();
    int result_c = c();
    int result_d = d();
    printf("Result of a(): %d\n", result_a);
    printf("Result of c(): %d\n", result_c);
    printf("Result of d(): %d\n", result_d);
    return 0;
}
