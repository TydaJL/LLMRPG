
#include <stdio.h>

int a() {
    return 1;
}

int b() {
    return 2;
}

int c(int a) {
    return a + 1;
}

int d(int a) {
    return a + 2;
}

int e(int a) {
    return a + 3;
}

int f(int a) {
    return a + 4;
}

int main() {
    int result_a = a();
    int result_b = b();
    int result_c = c(result_a);
    int result_d = d(result_a);
    int result_e = e(result_a);
    int result_f = f(result_a);
    
    printf("Result a: %d\n", result_a);
    printf("Result b: %d\n", result_b);
    printf("Result c: %d\n", result_c);
    printf("Result d: %d\n", result_d);
    printf("Result e: %d\n", result_e);
    printf("Result f: %d\n", result_f);
    
    return 0;
}
