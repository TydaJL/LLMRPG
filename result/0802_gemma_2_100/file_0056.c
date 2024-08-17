
#include <stdio.h>

int a() {
    int b = 5;
    return b;
}

int b() {
    int c = 10;
    return c;
}

int d() {
    int e = 15;
    return e;
}

int main() {
    int result_a = a();
    int result_b = b();
    int result_d = d();
    
    printf("Result from a: %d\n", result_a);
    printf("Result from b: %d\n", result_b);
    printf("Result from d: %d\n", result_d);
    
    return 0;
}
