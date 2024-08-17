
#include <stdio.h>
#include <stdlib.h>

double a() {
    int n = 10, i;
    double d = 0;
    for (i = n; i >= 2; i--) {
        d += (double)i;
    }
    d *= 0x7ff;
    return d + ((int)(d) & ~0x7f);
}

int b() {
    int n = 5, i;
    double d = 0;
    for (i = 0; i < n; i++) {
        d += (double)(i + 1);
    }
    return (int)d;
}

int main() {
    double result_a = a();
    int result_b = b();
    printf("Result a: %f\n", result_a);
    printf("Result b: %d\n", result_b);
    return 0;
}
