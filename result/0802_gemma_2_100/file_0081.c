
#include <stdio.h>

int a() {
    return 3 - 4 * 5;
}

int b() {
    return 1 * 2 + 3;
}

int main() {
    int result_a = a();
    int result_b = b();
    
    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);
    
    return 0;
}
