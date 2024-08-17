
#include <stdio.h>

int a() {
    return 42;
}

int b() {
    return 24;
}

int main() {
    int result_a = a();
    int result_b = b();
    
    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);
    
    return 0;
}
