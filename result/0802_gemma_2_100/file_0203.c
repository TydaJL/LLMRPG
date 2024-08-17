
#include <stdio.h>

int a() {
    return 1 + 2;
}

int b() {
    return 1;
}

int c(int d) {
    return d + 1;
}

int e(int f) {
    return f + 1;
}

int g(int h) {
    return h + 1;
}

int i(int j) {
    return j + 1;
}

int k(int l) {
    return l + 1;
}

int m(int n) {
    return n + 1;
}

int main() {
    int result_a = a();
    int result_b = b();
    int result_c = c(5);
    int result_e = e(5);
    int result_g = g(5);
    int result_i = i(5);
    int result_k = k(5);
    int result_m = m(5);
    
    printf("a: %d\n", result_a);
    printf("b: %d\n", result_b);
    printf("c(5): %d\n", result_c);
    printf("e(5): %d\n", result_e);
    printf("g(5): %d\n", result_g);
    printf("i(5): %d\n", result_i);
    printf("k(5): %d\n", result_k);
    printf("m(5): %d\n", result_m);

    return 0;
}
