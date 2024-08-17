
#include <stdio.h>

int a() {
    return 1;
}

int b() {
    return 2;
}

int c() {
    return 6;
}

int main() {
    int result_a = a();
    int result_b = b();
    int result_c = c();
    
    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);
    printf("Result of c: %d\n", result_c);
    
    return 0;
}
